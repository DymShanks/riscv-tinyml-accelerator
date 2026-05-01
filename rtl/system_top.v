/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off PINMISSING */
module system_top (
    input  clk,
    input  resetn,
    output trap,

    // Memory interface — exposed for C++ testbench RAM model
    output        mem_valid,
    output [31:0] mem_addr,
    output [31:0] mem_wdata,
    output [ 3:0] mem_wstrb,
    input  [31:0] mem_rdata,
    input         mem_ready
);
    wire        pcpi_valid;
    wire [31:0] pcpi_insn;
    wire [31:0] pcpi_rs1;
    wire [31:0] pcpi_rs2;
    wire        pcpi_wr;
    wire [31:0] pcpi_rd;
    wire        pcpi_wait;
    wire        pcpi_ready;

    // PicoRV32 instantiation — all ports connected
    picorv32 #(
        .ENABLE_PCPI(1)
    ) cpu (
        .clk        (clk),
        .resetn     (resetn),
        .trap       (trap),

        // Memory interface
        .mem_valid  (mem_valid),
        .mem_instr  (),
        .mem_ready  (mem_ready),
        .mem_addr   (mem_addr),
        .mem_wdata  (mem_wdata),
        .mem_wstrb  (mem_wstrb),
        .mem_rdata  (mem_rdata),

        // Look-ahead memory interface — not used, tied off
        .mem_la_read  (),
        .mem_la_write (),
        .mem_la_addr  (),
        .mem_la_wdata (),
        .mem_la_wstrb (),

        // PCPI co-processor interface
        .pcpi_valid (pcpi_valid),
        .pcpi_insn  (pcpi_insn),
        .pcpi_rs1   (pcpi_rs1),
        .pcpi_rs2   (pcpi_rs2),
        .pcpi_wr    (pcpi_wr),
        .pcpi_rd    (pcpi_rd),
        .pcpi_wait  (pcpi_wait),
        .pcpi_ready (pcpi_ready),

        // IRQ — tied to zero (no interrupts)
        .irq        (32'b0),
        .eoi        (),

        // Trace — not used
        .trace_valid(),
        .trace_data ()
    );

    // TinyML co-processor
    tinyml_accelerator accelerator (
        .clk        (clk),
        .resetn     (resetn),
        .pcpi_valid (pcpi_valid),
        .pcpi_insn  (pcpi_insn),
        .pcpi_rs1   (pcpi_rs1),
        .pcpi_rs2   (pcpi_rs2),
        .pcpi_wr    (pcpi_wr),
        .pcpi_rd    (pcpi_rd),
        .pcpi_wait  (pcpi_wait),
        .pcpi_ready (pcpi_ready)
    );

endmodule
/* verilator lint_on PINCONNECTEMPTY */
/* verilator lint_on PINMISSING */
