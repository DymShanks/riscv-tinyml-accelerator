#ifndef TINYML_ACCELERATOR_H
#define TINYML_ACCELERATOR_H
#include <stdint.h>

// Macros for Custom Instructions
#define TINYML_MAC(rs1, rs2) ({ uint32_t __res; asm volatile (".insn r 0x0B, 0, 0, %0, %1, %2" : "=r"(__res) : "r"(rs1), "r"(rs2)); __res; })
#define TINYML_MAC_RELU(rs1, rs2) ({ uint32_t __res; asm volatile (".insn r 0x0B, 1, 0, %0, %1, %2" : "=r"(__res) : "r"(rs1), "r"(rs2)); __res; })
#define TINYML_CLR_ACC() asm volatile (".insn r 0x0B, 0, 1, x0, x0, x0")

#endif
