 module fsm (
 clock,
 reset,
 req_0,
 req_1,
 gnt_0,
 gnt_1
 );
 input   clock,reset,req_0,req_1;
 output signed   gnt_0,gnt_1;
 wire    clock,reset,req_0,req_1;
 reg     gnt_0,gnt_1;

 parameter SIZE = 3           ;
 parameter IDLE  = 3'b001,GNT0 = 3'b010,GNT1 = 3'b100,GNT2 = 3'b101 ;

 reg signed [SIZE-1:0] state;
 reg signed [SIZE-1:0] next_state;

 always @ (posedge clock)
 begin : FSM
 if (reset == 1'b1) begin
   state <=  #1  IDLE;
   gnt_0 <= 0;
   gnt_1 <= 0;
 end else
  case(state)
    IDLE : if (req_0 == 1'b1) begin
                 state <=  #1  GNT0;
`ifndef BUG
                 gnt_0 <= 1;
`else
                 gnt_0 <= 1'bZ;
`endif
               end else if (req_1 == 1'b1) begin
                 gnt_1 <= 1;
                 state <=  #1  GNT0;
               end else begin
                 state <=  #1  IDLE;
               end
    GNT0 : if (req_0 == 1'b1) begin
                 state <=  #1  GNT0;
               end else begin
                 gnt_0 <= 0;
                 state <=  #1  IDLE;
               end
    GNT1 : if (req_1 == 1'b1) begin
                 state <=  #1  GNT2;
				 gnt_1 <= req_0;
               end
    GNT2 : if (req_0 == 1'b1) begin
                 state <=  #1  GNT1;
				 gnt_1 <= req_1;
               end
    default : state <=  #1  IDLE;
 endcase
 end

 endmodule

 module top (
input clk,
input rst,
input a,
input b,
output g0,
output g1
);

fsm u_fsm ( .clock(clk),
            .reset(rst),
            .req_0(a),
            .req_1(b),
            .gnt_0(g0),
            .gnt_1(g1));

endmodule
