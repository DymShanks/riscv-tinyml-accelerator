VERILATOR = verilator
RTL_DIR   = rtl
SIM_DIR   = sim
OBJ_DIR   = obj_dir
TOP       = tinyml_accelerator
RTL_SRCS  = $(RTL_DIR)/$(TOP).v
ROOT      = $(shell pwd)
VFLAGS    = --cc --exe --build -Wall -Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-GENUNNAMED -I$(RTL_DIR) -CFLAGS "-std=c++17 -O2" --top-module $(TOP)

.PHONY: all waveform benchmark demo dv coverage clean

all: waveform benchmark demo

waveform:
	@mkdir -p $(SIM_DIR) $(OBJ_DIR)
	$(VERILATOR) $(VFLAGS) --trace $(RTL_SRCS) $(SIM_DIR)/waveform_tb.cpp -o $(ROOT)/$(OBJ_DIR)/sim_wave
	./$(OBJ_DIR)/sim_wave

benchmark:
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VFLAGS) $(RTL_SRCS) $(SIM_DIR)/benchmark_tb.cpp -o $(ROOT)/$(OBJ_DIR)/sim_bench
	./$(OBJ_DIR)/sim_bench | tee sim/benchmark_results.txt

demo:
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VFLAGS) -CFLAGS "-std=c++17 -O2 -Ifirmware" $(RTL_SRCS) $(SIM_DIR)/demo_inference.cpp -o $(ROOT)/$(OBJ_DIR)/sim_demo
	./$(OBJ_DIR)/sim_demo | tee sim/demo_results.txt

dv:
	.venv/bin/python3 tb/test_tinyml.py

coverage:
	.venv/bin/python3 tools/coverage_analyser.py

clean:
	rm -rf $(OBJ_DIR) sim/*.vcd sim/*.txt

soc:
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VFLAGS) --trace \
	    $(RTL_DIR)/picorv32.v \
	    $(RTL_DIR)/tinyml_accelerator.v \
	    $(RTL_DIR)/system_top.v \
	    $(SIM_DIR)/soc_tb.cpp \
	    -o $(ROOT)/$(OBJ_DIR)/sim_soc
	./$(OBJ_DIR)/sim_soc

soc:
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) --cc --exe --build \
	    -Wno-UNUSEDSIGNAL -Wno-DECLFILENAME -Wno-GENUNNAMED \
	    -Wno-PINCONNECTEMPTY -Wno-PINMISSING \
	    -Wno-BLKSEQ -Wno-SYNCASYNCNET \
	    -I$(RTL_DIR) \
	    -CFLAGS "-std=c++17 -O2" \
	    --top-module system_top \
	    --trace \
	    $(RTL_DIR)/picorv32.v \
	    $(RTL_DIR)/tinyml_accelerator.v \
	    $(RTL_DIR)/system_top.v \
	    $(SIM_DIR)/soc_tb.cpp \
	    -o $(ROOT)/$(OBJ_DIR)/sim_soc
	./$(OBJ_DIR)/sim_soc

tflm:
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VFLAGS) \
	    -CFLAGS "-std=c++17 -O2 -Ifirmware/tflm_integration" \
	    $(RTL_SRCS) \
	    $(SIM_DIR)/tflm_integration_demo.cpp \
	    -o $(ROOT)/$(OBJ_DIR)/sim_tflm
	./$(OBJ_DIR)/sim_tflm | tee sim/tflm_results.txt
