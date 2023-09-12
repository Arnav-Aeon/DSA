`timescale 1ns/1ns
`include "7segdriver.v"


module sev_segment_drvr_tb;

reg [3:0] in;
reg [4:0] iteration;
wire [6:0] obs_out;

// Register containing the expected output
reg [6:0] exp_out[15:0]; 

// Instantiate the Design Under Test (DUT)
sev_segment_drvr det(in, obs_out) ;

initial begin

  $dumpfile("7segdriver_tb.vcd");
  $dumpvars(0 , sev_segment_drvr_tb);
  // Set the expected output
  exp_out[0] = 7'h7E; // 0
  exp_out[1] = 7'h30; // 1
  exp_out[2] = 7'h6D; // 2
  exp_out[3] = 7'h79; // 3
  exp_out[4] = 7'h33; // 4
  exp_out[5] = 7'h5B; // 5
  exp_out[6] = 7'h5F; // 6
  exp_out[7] = 7'h70; // 7
  exp_out[8] = 7'h7F; // 8
  exp_out[9] = 7'h73; // 9
  exp_out[10] = 7'h77; // A
  exp_out[11] = 7'h1F; // b
  exp_out[12] = 7'h4E; // C 
  exp_out[13] = 7'h3D; // d 
  exp_out[14] = 7'h4F; // E
  exp_out[15] = 7'h47; // F

  // Generate the inputs and check the output
  for (iteration = 0; iteration<=15; iteration++) begin
    
    // assign the input to the iteration variable
    in = iteration[3:0];
    
    // wait for 1 simulation tick
    #1;
 
    // Check the output
    if (obs_out != exp_out[iteration]) begin
      $display("[ERROR] Pattern [%x] Mismatch on time %0t ns Obs = %x Exp = %x",in, $time, obs_out, exp_out[iteration]);
    end
    else begin
      $display("[INFO]  Pattern [%x] Matched  on time %0t ns",in, $time);
    end
  end
  $display("Test Complete") ;
end
endmodule