#include <stdint.h>
#include "firmware/tinyml.h"

int main() {
    int8_t input[16] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
    int8_t weight[16] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    
    int32_t final_acc = 0;
    
    // Clear the hardware accumulator
    TINYML_CLR_ACC();
    
    // Hardware Accelerated MAC Loop
    for (int i = 0; i < 16; i++) {
        final_acc = TINYML_MAC(input[i], weight[i]);
    }
    
    // Store result at address 0x100
    volatile int32_t* result_addr = (int32_t*)0x100;
    *result_addr = final_acc;
    
    return 0;
}
