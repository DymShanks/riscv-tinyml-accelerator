# Full System Variables
MODULE = system_top
RTL_SRC = rtl/system_top.v rtl/tinyml_accelerator.v rtl/picorv32.v 
SIM_SRC = sim/top_tb.cpp

# Unit & Benchmark Variables
UNIT_MODULE = tinyml_accelerator
UNIT_RTL = rtl/tinyml_accelerator.v
UNIT_SIM = sim/unit_tb.cpp
BENCH_SIM = sim/benchmark_tb.cpp

VERILATOR = verilator
BUILD_DIR = obj_dir
FLAGS = -Wall --trace --cc --exe -Wno-fatal -Wno-PINMISSING -Wno-BLKSEQ -Wno-SYNCASYNCNET

all: build

# Standard System Build
build:
	$(VERILATOR) $(FLAGS) $(RTL_SRC) $(SIM_SRC) --top-module $(MODULE)
	make -C $(BUILD_DIR) -f V$(MODULE).mk V$(MODULE)

# Unit Verification
verify:
	$(VERILATOR) $(FLAGS) $(UNIT_RTL) $(UNIT_SIM) --top-module $(UNIT_MODULE)
	make -C $(BUILD_DIR) -f V$(UNIT_MODULE).mk V$(UNIT_MODULE)
	./$(BUILD_DIR)/V$(UNIT_MODULE)

# TinyML Benchmark Suite (NEW!)
benchmark:
	$(VERILATOR) $(FLAGS) $(UNIT_RTL) $(BENCH_SIM) --top-module $(UNIT_MODULE) -o Vbenchmark
	make -C $(BUILD_DIR) -f V$(UNIT_MODULE).mk Vbenchmark
	./$(BUILD_DIR)/Vbenchmark

run:
	./$(BUILD_DIR)/V$(MODULE)

wave:
	gtkwave sim/waveform.vcd

wave_verify:
	gtkwave sim/unit_test.vcd

clean:
	rm -rf $(BUILD_DIR) sim/*.vcd
