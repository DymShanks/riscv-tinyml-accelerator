#!/usr/bin/env python3
"""
AI-Assisted Coverage Analyser for tinyml_accelerator
=====================================================
Reads tb/coverage.log produced by the Python DV testbench,
applies Isolation Forest anomaly detection to surface
under-covered instruction sequences, and outputs:
  - terminal report with coverage gaps highlighted
  - tools/coverage_report.json  (machine-readable)
  - tools/coverage_heatmap.png  (visual heatmap)

This is the approach described in lowRISC's AI-assisted
verification research: use ML to guide where to focus
next test-writing effort.
"""
import json, sys
from pathlib import Path

try:
    import numpy as np
    import pandas as pd
    from sklearn.ensemble import IsolationForest
    from sklearn.preprocessing import LabelEncoder
    import matplotlib
    matplotlib.use("Agg")
    import matplotlib.pyplot as plt
    import matplotlib.colors as mcolors
except ImportError as e:
    print(f"Missing dependency: {e}")
    print("Run: pip install scikit-learn pandas numpy matplotlib")
    sys.exit(1)

ROOT     = Path(__file__).parent.parent
COV_LOG  = ROOT / "tb" / "coverage.log"
OUT_JSON = Path(__file__).parent / "coverage_report.json"
OUT_PNG  = Path(__file__).parent / "coverage_heatmap.png"

# ── All instruction sequences the testbench SHOULD cover ─────────
EXPECTED_SEQUENCES = [
    "MAC|rs1_nonzero|rs2_nonzero",
    "MAC|rs1_zero",
    "MAC|rs2_zero",
    "MAC|accumulate|4inputs",
    "MAC|reset_mid_sequence",
    "MAC|handshake",
    "MAC|boundary_max_value",       # not yet tested → will flag
    "MAC|back_to_back_instructions",# not yet tested → will flag
    "MAC_RELU|negative_input",
    "MAC_RELU|positive_input",
    "MAC_RELU|zero_boundary",       # not yet tested → will flag
    "NOP|not_custom_opcode",
    "NOP|during_valid_sequence",    # not yet tested → will flag
]

# ── Parse coverage log ───────────────────────────────────────────
def parse_log(path: Path) -> dict:
    hits = {}
    if not path.exists():
        print(f"ERROR: {path} not found. Run python3 tb/test_tinyml.py first.")
        sys.exit(1)
    for line in path.read_text().splitlines():
        if ":" in line:
            key, _, val = line.rpartition(":")
            hits[key.strip()] = int(val.strip())
    return hits

# ── Build feature matrix ─────────────────────────────────────────
def build_features(hits: dict) -> pd.DataFrame:
    rows = []
    for seq in EXPECTED_SEQUENCES:
        parts  = seq.split("|")
        instr  = parts[0]                        # MAC / MAC_RELU / NOP
        count  = hits.get(seq, 0)
        is_relu    = 1 if "RELU" in instr else 0
        is_nop     = 1 if instr == "NOP" else 0
        has_zero   = 1 if any("zero" in p for p in parts) else 0
        has_neg    = 1 if any("neg"  in p for p in parts) else 0
        is_boundary= 1 if any("boundary" in p or "max" in p for p in parts) else 0
        rows.append({
            "sequence":   seq,
            "hit_count":  count,
            "is_relu":    is_relu,
            "is_nop":     is_nop,
            "has_zero":   has_zero,
            "has_neg":    has_neg,
            "is_boundary":is_boundary,
            "covered":    1 if count > 0 else 0,
        })
    return pd.DataFrame(rows)

# ── Isolation Forest anomaly detection ───────────────────────────
def detect_anomalies(df: pd.DataFrame) -> pd.DataFrame:
    features = ["hit_count","is_relu","is_nop",
                "has_zero","has_neg","is_boundary","covered"]
    X = df[features].values.astype(float)

    clf = IsolationForest(
        n_estimators=200,
        contamination=0.35,   # expect ~35% sequences under-covered
        random_state=42
    )
    df = df.copy()
    df["anomaly_score"] = clf.fit_predict(X)
    df["raw_score"]     = clf.decision_function(X)
    # anomaly_score: -1 = anomalous (under-covered), 1 = normal
    df["flagged"] = df["anomaly_score"] == -1
    return df

# ── Coverage heatmap ─────────────────────────────────────────────
def plot_heatmap(df: pd.DataFrame, path: Path):
    fig, ax = plt.subplots(figsize=(10, 5))
    fig.patch.set_facecolor("#0d1117")
    ax.set_facecolor("#0d1117")

    n = len(df)
    cols = 4
    rows = (n + cols - 1) // cols

    for i, row in df.iterrows():
        c = i % cols
        r = i // cols
        if row["hit_count"] == 0:
            color = "#e05252"      # red   — never hit
        elif row["flagged"]:
            color = "#e0a030"      # amber — hit but anomalous
        else:
            color = "#2ea043"      # green — well covered

        rect = plt.Rectangle([c, rows - r - 1], 0.95, 0.85,
                              color=color, zorder=2)
        ax.add_patch(rect)

        label = row["sequence"].replace("|", "\n")
        ax.text(c + 0.475, rows - r - 0.575, label,
                ha="center", va="center",
                fontsize=5.5, color="white",
                fontfamily="monospace", zorder=3)

    ax.set_xlim(0, cols)
    ax.set_ylim(0, rows)
    ax.axis("off")
    ax.set_title("Instruction Sequence Coverage Heatmap",
                 color="white", fontsize=13, pad=12)

    # Legend
    for color, label in [("#2ea043","Covered"),
                          ("#e0a030","Anomalous"),
                          ("#e05252","Never hit")]:
        ax.plot([], [], "s", color=color,
                markersize=10, label=label)
    ax.legend(loc="lower right", framealpha=0.2,
              labelcolor="white", fontsize=8)

    plt.tight_layout()
    plt.savefig(path, dpi=150, bbox_inches="tight",
                facecolor=fig.get_facecolor())
    plt.close()
    print(f"  Heatmap       → {path}")

# ── Terminal report ──────────────────────────────────────────────
def print_report(df: pd.DataFrame):
    covered   = df[df["hit_count"] > 0]
    uncovered = df[df["hit_count"] == 0]
    flagged   = df[df["flagged"] & (df["hit_count"] > 0)]
    pct       = 100 * len(covered) / len(df)

    print("\n" + "="*60)
    print("  AI-Assisted Coverage Analysis — tinyml_accelerator")
    print("="*60)
    print(f"\n  Total sequences tracked : {len(df)}")
    print(f"  Covered                 : {len(covered)}  ({pct:.0f}%)")
    print(f"  Never hit               : {len(uncovered)}")
    print(f"  Anomalous (ML-flagged)  : {len(flagged)}")

    if not uncovered.empty:
        print("\n  \033[31m[NEVER HIT] — write tests for these:\033[0m")
        for _, r in uncovered.iterrows():
            print(f"    • {r['sequence']}")

    if not flagged.empty:
        print("\n  \033[33m[ANOMALOUS] — hit but statistically under-exercised:\033[0m")
        for _, r in flagged.iterrows():
            print(f"    • {r['sequence']}  (score: {r['raw_score']:.3f}, hits: {r['hit_count']})")

    print("\n  \033[32m[COVERED]\033[0m")
    for _, r in covered[~covered["flagged"]].iterrows():
        print(f"    ✓ {r['sequence']}  (hits: {r['hit_count']})")

    print("\n" + "="*60)
    print("  Suggested next tests:")
    print("="*60)
    suggestions = [
        ("MAC|boundary_max_value",
         "run_mac(0xFFFF, 0xFFFF) — test 32-bit overflow behaviour"),
        ("MAC|back_to_back_instructions",
         "issue 16 MAC ops with no gap — stress pipeline hazards"),
        ("MAC_RELU|zero_boundary",
         "run_mac(0,0,relu=True) — ReLU at exact zero boundary"),
        ("NOP|during_valid_sequence",
         "inject NOP mid-accumulation — verify state preserved"),
    ]
    for seq, desc in suggestions:
        if seq in uncovered["sequence"].values:
            print(f"\n  + {seq}")
            print(f"    {desc}")
    print()

# ── Main ─────────────────────────────────────────────────────────
if __name__ == "__main__":
    hits = parse_log(COV_LOG)
    df   = build_features(hits)
    df   = detect_anomalies(df)

    print_report(df)

    # Save JSON report
    report = df[["sequence","hit_count","covered",
                 "flagged","raw_score"]].copy()
    report["flagged"] = report["flagged"].astype(bool)
    with open(OUT_JSON, "w") as f:
        json.dump(report.to_dict(orient="records"), f, indent=2)
    print(f"  JSON report   → {OUT_JSON}")

    plot_heatmap(df, OUT_PNG)
    print()
