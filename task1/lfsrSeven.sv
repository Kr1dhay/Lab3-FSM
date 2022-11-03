module lfsrSeven (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [6:0] data_out   
);

    logic [6:0] sreg;

    always_ff @(posedge clk)
        if(rst) 
            sreg <= 7'b1;
        else if(en)
            begin
               sreg <= {sreg[6:1], sreg[2] ^ sreg[6]};
            end
    assign data_out = sreg;

endmodule
