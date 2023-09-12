module sev_segment_drvr ( input [3:0] hex_in,
                          output [6:0] ss_pattern_out
);
  reg a;
  reg b;
  reg c;
  reg d;
  reg e;
  reg f;
  reg g;

  always @ (hex_in) begin
    case (hex_in)
      4'h0 : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b1;
        d = 1'b1;
        e = 1'b1;
        f = 1'b1;
        g = 1'b0;
      end
      4'h1 : begin
        a = 1'b0;
        b = 1'b1;
        c = 1'b1;
        d = 1'b0;
        e = 1'b0;
        f = 1'b0;
        g = 1'b0;        
      end
      4'h2 : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b0;
        d = 1'b1;
        e = 1'b1;
        f = 1'b0;
        g = 1'b1;
      end
      4'h3 : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b1;
        d = 1'b1;
        e = 1'b0;
        f = 1'b0;
        g = 1'b1;
      end
      4'h4 : begin
        a = 1'b0;
        b = 1'b1;
        c = 1'b1;
        d = 1'b0;
        e = 1'b0;
        f = 1'b1;
        g = 1'b1;
      end
      4'h5 : begin
        a = 1'b1;
        b = 1'b0;
        c = 1'b1;
        d = 1'b1;
        e = 1'b0;
        f = 1'b1;
        g = 1'b1;
      end
      4'h6 : begin
        a = 1'b1;
        b = 1'b0;
        c = 1'b1;
        d = 1'b1;
        e = 1'b1;
        f = 1'b1;
        g = 1'b1;
      end
      4'h7 : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b1;
        d = 1'b0;
        e = 1'b0;
        f = 1'b0;
        g = 1'b0;
      end
      4'h8 : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b1;
        d = 1'b1;
        e = 1'b1;
        f = 1'b1;
        g = 1'b1;
      end
      4'h9 : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b1;
        d = 1'b0;
        e = 1'b0;
        f = 1'b1;
        g = 1'b1;
      end
      4'hA : begin
        a = 1'b1;
        b = 1'b1;
        c = 1'b1;
        d = 1'b0;
        e = 1'b1;
        f = 1'b1;
        g = 1'b1;
      end
      4'hB : begin
        a = 1'b0;
        b = 1'b0;
        c = 1'b1;
        d = 1'b1;
        e = 1'b1;
        f = 1'b1;
        g = 1'b1;
      end
      4'hC : begin
        a = 1'b1;
        b = 1'b0;
        c = 1'b0;
        d = 1'b1;
        e = 1'b1;
        f = 1'b1;
        g = 1'b0;
      end
      4'hD : begin
        a = 1'b0;
        b = 1'b1;
        c = 1'b1;
        d = 1'b1;
        e = 1'b1;
        f = 1'b0;
        g = 1'b1;
      end
      4'hE : begin
        a = 1'b1;
        b = 1'b0;
        c = 1'b0;
        d = 1'b1;
        e = 1'b1;
        f = 1'b1;
        g = 1'b1;
      end
      4'hF : begin
        a = 1'b1;
        b = 1'b0;
        c = 1'b0;
        d = 1'b0;
        e = 1'b1;
        f = 1'b1;
        g = 1'b1;
      end
      default: begin
        a = 1'b0;
        b = 1'b0;
        c = 1'b0;
        d = 1'b0;
        e = 1'b0;
        f = 1'b0;
        g = 1'b0;
      end
    endcase
  end

  assign ss_pattern_out = {a,b,c,d,e,f,g};
endmodule