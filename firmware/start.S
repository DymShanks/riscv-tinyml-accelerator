.section .text.start
.global _start
_start:
    /* Set stack pointer to the top of 64KB RAM */
    la sp, _stack_top
    /* Jump to C main function */
    jal main
    /* If main returns, trigger trap to end simulation */
    ebreak
