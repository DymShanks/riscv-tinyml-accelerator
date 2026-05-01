#include <stdint.h>

// A standard 16-input neuron (mimicking TFLM fully_connected.cc)
int main() {
    int8_t input[16] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
    int8_t weight[16] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    
    int32_t acc = 0;
    
    // Software MAC Loop
    for (int i = 0; i < 16; i++) {
        acc += input[i] * weight[i];
    }
    
    // Software ReLU
    if (acc < 0) {
        acc = 0;
    }
    
    // Store result at address 0x100 for testbench to read
    volatile int32_t* result_addr = (int32_t*)0x100;
    *result_addr = acc;
    
    return 0;
}
