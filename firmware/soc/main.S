.section .text
.global _start

_start:
    lui  x10, 0x10

    # Test 1: MAC 10*5 = 50
    .word 0x0000218B          # CLR
    li   x1, 10
    li   x2, 5
    nop
    nop
    .word 0x0020818B          # MAC x3 = 50
    nop
    nop
    nop
    sw   x3, 0(x10)

    # Test 2: single MAC 6*7 = 42 (simple, no accumulation)
    nop
    nop
    .word 0x0000218B          # CLR
    nop
    nop
    li   x1, 6
    li   x2, 7
    nop
    nop
    .word 0x0020818B          # MAC x3 = 42
    nop
    nop
    nop
    sw   x3, 4(x10)

    # Test 3: MAC_RELU positive 7*6 = 42
    nop
    nop
    .word 0x0000218B          # CLR
    nop
    nop
    li   x1, 7
    li   x2, 6
    nop
    nop
    .word 0x0020918B          # MAC_RELU x3 = 42
    nop
    nop
    nop
    sw   x3, 8(x10)

    # Test 4: MAC_RELU negative -8*5 = 0
    nop
    nop
    .word 0x0000218B          # CLR
    nop
    nop
    li   x1, -8
    li   x2, 5
    nop
    nop
    .word 0x0020918B          # MAC_RELU x3 = 0
    nop
    nop
    nop
    sw   x3, 12(x10)

    # Test 5a: normal sensor temp=20 bias=-45 = 0
    nop
    nop
    .word 0x0000218B          # CLR
    nop
    nop
    li   x1, 20
    li   x2, 1
    nop
    nop
    .word 0x0020818B          # MAC acc=20
    nop
    nop
    li   x1, -45
    li   x2, 1
    nop
    nop
    .word 0x0020918B          # MAC_RELU acc=20-45=-25->0
    nop
    nop
    nop
    sw   x3, 16(x10)

    # Test 5b: anomaly temp=80 bias=-45 = 35
    nop
    nop
    .word 0x0000218B          # CLR
    nop
    nop
    li   x1, 80
    li   x2, 1
    nop
    nop
    .word 0x0020818B          # MAC acc=80
    nop
    nop
    li   x1, -45
    li   x2, 1
    nop
    nop
    .word 0x0020918B          # MAC_RELU acc=35
    nop
    nop
    nop
    sw   x3, 20(x10)

    li   x11, 0xDEAD
    sw   x11, 24(x10)

done:
    j done
