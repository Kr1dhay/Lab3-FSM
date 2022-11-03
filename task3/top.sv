module top(
    input wire [15:0] N,
    input wire en,
    input wire rst,
    input wire clk,
    output wire [7:0] data_out
);

wire tickToEn;

clktick myClock(
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (tickToEn)
);

f1_fsm myF1(
    .clk (clk),
    .rst (rst),
    .en (tickToEn),
    .data_out (data_out)
);



endmodule
