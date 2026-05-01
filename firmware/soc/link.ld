MEMORY {
    RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 128K
}

SECTIONS {
    .text : {
        *(.text.startup)
        *(.text)
        *(.text*)
    } > RAM

    .data : {
        *(.data)
        *(.data*)
    } > RAM

    .bss : {
        *(.bss)
        *(.bss*)
    } > RAM
}
