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
    // 1. Instruction Decoding
    wire [6:0] opcode = pcpi_insn[6:0];
    wire [2:0] funct3 = pcpi_insn[14:12];
    wire is_custom_instr = (opcode == 7'b0001011);
    wire is_relu_en      = (funct3 == 3'b001);

    // 2. Internal Register
    reg [31:0] accumulator;

    // 3. Combinational Math Logic (The "Brain")
    //    We calculate the next value *before* the clock edge to avoid blocking errors
    wire [31:0] product = pcpi_rs1 * pcpi_rs2;
    wire [31:0] sum     = accumulator + product;
    //    ReLU Logic: If bit 31 is 1 (negative), result is 0
    wire [31:0] next_result = (is_relu_en && sum[31]) ? 32'b0 : sum;

    // 4. Sequential Logic (The "Memory")
    always @(posedge clk or negedge resetn) begin
        if (!resetn) begin
            accumulator <= 32'b0;
            pcpi_wr     <= 1'b0;
            pcpi_ready  <= 1'b0;
            pcpi_rd     <= 32'b0;
            pcpi_wait   <= 1'b0;
        end else begin
            // Default Handshake
            pcpi_wr    <= 1'b0;
            pcpi_ready <= 1'b0;
            pcpi_wait  <= 1'b0;

            if (pcpi_valid && is_custom_instr) begin
                // Update registers using Non-Blocking (<=) assignment
                accumulator <= next_result;
                pcpi_rd     <= next_result;
                pcpi_wr     <= 1'b1;
                pcpi_ready  <= 1'b1;
            end
        end
    end
endmodule
