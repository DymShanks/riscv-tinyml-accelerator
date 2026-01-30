MODULE = system_top
RTL_SRC = rtl/system_top.v rtl/tinyml_accelerator.v rtl/picorv32.v 
SIM_SRC = sim/top_tb.cpp

VERILATOR = verilator
BUILD_DIR = obj_dir

# Added -Wno-fatal to stop warnings from killing the build
# Added -Wno-PINMISSING because PicoRV32 has unused pins in simulation
FLAGS = -Wall --trace --cc --exe -Wno-fatal -Wno-PINMISSING -Wno-BLKSEQ -Wno-SYNCASYNCNET

all: build

build:
	$(VERILATOR) $(FLAGS) $(RTL_SRC) $(SIM_SRC) --top-module $(MODULE)
	make -C $(BUILD_DIR) -f V$(MODULE).mk V$(MODULE)

run:
	./$(BUILD_DIR)/V$(MODULE)

wave:
	gtkwave sim/waveform.vcd

clean:
	rm -rf $(BUILD_DIR) sim/waveform.vcd
