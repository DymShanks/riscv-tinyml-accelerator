SIM        ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES = $(shell pwd)/../rtl/tinyml_accelerator.v
TOPLEVEL   = tinyml_accelerator
MODULE     = test_tinyml
EXTRA_ARGS = --trace --coverage

include $(shell cocotb-config --makefiles)/Makefile.sim
