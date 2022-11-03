module f1_fsm (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] data_out
);

typedef enum  {S0, S1, S2, S3, S4, S5, S6, S7, S8} myState;
myState currentState, nextState;

logic [7:0] out;

always_ff @(posedge clk, posedge rst)
    if(rst)     currentState <= S0;
    else if(en) currentState <= nextState;

always_comb begin
    case (currentState)
    S0: nextState = S1;
    S1: nextState = S2;
    S2: nextState = S3;
    S3: nextState = S4;
    S4: nextState = S5;
    S5: nextState = S6;
    S6: nextState = S7;
    S7: nextState = S8;
    S8: nextState = S0;
    endcase
end

always_comb begin
    case (currentState)
    S0: out = 8'b0;
    S1: out = 8'b1;
    S2: out = 8'b11;
    S3: out = 8'b111;
    S4: out = 8'b1111;
    S5: out = 8'b11111;
    S6: out = 8'b111111;
    S7: out = 8'b1111111;
    S8: out = 8'b11111111;
    endcase
end

assign data_out = out;



endmodule
