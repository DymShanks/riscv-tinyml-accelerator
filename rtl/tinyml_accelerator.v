module tinyml_accelerator (
    input wire        clk,
    input wire        resetn,
    input wire        pcpi_valid,
    input wire [31:0] pcpi_insn,
    input wire [31:0] pcpi_rs1,
    input wire [31:0] pcpi_rs2,
    output reg        pcpi_wr,
    output reg [31:0] pcpi_rd,
    output reg        pcpi_wait,
    output reg        pcpi_ready
);
    // ── Instruction Decode ─────────────────────────────────────
    wire [6:0] opcode        = pcpi_insn[6:0];
    wire [2:0] funct3        = pcpi_insn[14:12];
    wire is_custom_instr     = (opcode == 7'b0001011);
    wire is_mac              = (funct3 == 3'b000); // acc += rs1*rs2
    wire is_mac_relu         = (funct3 == 3'b001); // acc += rs1*rs2, ReLU
    wire is_clr              = (funct3 == 3'b010); // acc = 0

    // ── Internal Accumulator ───────────────────────────────────
    reg [31:0] accumulator;

    // ── Combinational Math ─────────────────────────────────────
    wire [31:0] product     = pcpi_rs1 * pcpi_rs2;
    wire [31:0] sum         = accumulator + product;
    wire [31:0] relu_result = (sum[31]) ? 32'b0 : sum;

    // ── Sequential Logic ───────────────────────────────────────
    always @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            accumulator <= 32'b0;
            pcpi_wr     <= 1'b0;
            pcpi_ready  <= 1'b0;
            pcpi_rd     <= 32'b0;
            pcpi_wait   <= 1'b0;
        end else begin
            pcpi_wr    <= 1'b0;
            pcpi_ready <= 1'b0;
            pcpi_wait  <= 1'b0;

            if (pcpi_valid && is_custom_instr) begin
                if (is_clr) begin
                    // funct3=010: clear accumulator, return 0
                    accumulator <= 32'b0;
                    pcpi_rd     <= 32'b0;
                    pcpi_wr     <= 1'b1;
                    pcpi_ready  <= 1'b1;
                end else if (is_mac_relu) begin
                    // funct3=001: MAC + ReLU
                    accumulator <= relu_result;
                    pcpi_rd     <= relu_result;
                    pcpi_wr     <= 1'b1;
                    pcpi_ready  <= 1'b1;
                end else begin
                    // funct3=000: plain MAC
                    accumulator <= sum;
                    pcpi_rd     <= sum;
                    pcpi_wr     <= 1'b1;
                    pcpi_ready  <= 1'b1;
                end
            end
        end
    end
endmodule
