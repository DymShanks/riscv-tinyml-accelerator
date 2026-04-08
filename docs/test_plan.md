# Verification Test Plan — tinyml_accelerator

**Version:** 1.0  
**Author:** Divyam Shankhdhar  
**Date:** April 2026  
**Status:** Active — coverage-driven iteration in progress

---

## 1. Design Under Test

`rtl/tinyml_accelerator.v` — a custom RISC-V co-processor implementing a
Multiply-Accumulate (MAC) instruction extension targeting PicoRV32's PCPI
interface. Designed to accelerate TinyML inference (matrix multiply, ReLU
activation) on resource-constrained embedded hardware.

| Parameter | Value |
|---|---|
| Interface | PicoRV32 PCPI (co-processor interface) |
| Custom opcode | `0b0001011` (CUSTOM-0) |
| funct3=000 | MAC — multiply and accumulate |
| funct3=001 | MAC+ReLU — accumulate then clamp negative to 0 |
| Accumulator width | 32-bit |
| Reset | Active-low synchronous (`resetn`) |

---

## 2. Verification Goals

1. Confirm correct MAC arithmetic across all input classes
2. Confirm ReLU clamps negative accumulator values to zero
3. Confirm PCPI handshake signals (`pcpi_ready`, `pcpi_wr`) assert correctly
4. Confirm reset zeroes the accumulator at any point in a sequence
5. Confirm non-custom instructions are ignored without side effects
6. Identify untested instruction sequences via AI-assisted coverage analysis
7. Drive coverage from 62% → 100% across all tracked sequences

---

## 3. Test Environment

| Component | Implementation |
|---|---|
| Simulator | Verilator 5.020 |
| Testbench language | Python 3.12 (custom harness) |
| Coverage analysis | Isolation Forest — `tools/coverage_analyser.py` |
| Run command | `python3 tb/test_tinyml.py` |
| Coverage command | `python3 tools/coverage_analyser.py` |

---

## 4. Test Cases

### 4.1 Implemented (8/8 passing)

| ID | Test | Stimulus | Expected | Status |
|---|---|---|---|---|
| T01 | Basic MAC | rs1=10, rs2=5 | rd=50 | PASS |
| T02 | 4-input neuron accumulation | (2×10)+(4×5)+(1×20)+(5×2) | rd=70 | PASS |
| T03 | ReLU clamps negative | rs1=0xFFFFFFFF, rs2=1, relu=1 | rd=0 | PASS |
| T04 | ReLU passes positive | rs1=5, rs2=6, relu=1 | rd=30 | PASS |
| T05 | Zero input | rs1=0, rs2=999 | rd=0 | PASS |
| T06 | PCPI handshake | rs1=3, rs2=3 | ready=1, wr=1 | PASS |
| T07 | Reset mid-sequence | accumulate 100, assert reset | rd=0 | PASS |
| T08 | NOP instruction ignored | insn=0x13 (NOP) | ready=0 | PASS |

### 4.2 Planned — AI-flagged gaps (next iteration)

| ID | Test | Stimulus | Goal |
|---|---|---|---|
| T09 | 32-bit overflow boundary | rs1=0xFFFF, rs2=0xFFFF | Confirm wraparound behaviour |
| T10 | Back-to-back instructions | 16 consecutive MACs, no gap | Stress pipeline, no dropped ops |
| T11 | ReLU at zero boundary | rs1=0, rs2=0, relu=1 | ReLU(0) = 0 confirmed |
| T12 | NOP mid-accumulation | MAC(5,5), NOP, MAC(5,5) | Accumulator preserved across NOP |
| T13 | rs2=zero input | rs1=999, rs2=0 | rd=0, accumulator unchanged |

---

## 5. Coverage Model

Tracked via `tb/coverage.log`, analysed by `tools/coverage_analyser.py`
using scikit-learn Isolation Forest anomaly detection.

| Metric | Current | Target |
|---|---|---|
| Sequences covered | 8/13 (62%) | 13/13 (100%) |
| Anomalous sequences | 1 | 0 |
| Tests passing | 8/8 | 13/13 |

Coverage heatmap: `tools/coverage_heatmap.png`  
Full report: `tools/coverage_report.json`

---

## 6. Pipeline Hazard Scenarios

The following micro-architectural edge cases are tracked separately:

- **Read-after-write hazard:** `pcpi_rd` valid on same cycle as `pcpi_ready`
- **Back-to-back valid:** `pcpi_valid` held high across consecutive instructions
- **Reset during valid:** `resetn` deasserted while `pcpi_valid=1`
- **Accumulator overflow:** 32-bit wraparound on repeated large MACs

---

## 7. Known Limitations

- Accumulator is not explicitly clearable via instruction (requires reset)
- 32-bit overflow wraps silently — no overflow flag in current RTL
- No timeout on `pcpi_wait` — not exercised in current test suite
