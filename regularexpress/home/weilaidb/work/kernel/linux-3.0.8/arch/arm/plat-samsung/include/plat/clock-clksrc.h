struct clksrc_sources ;
struct clksrc_reg ;
struct clksrc_clk ;
extern void s3c_set_clksrc(struct clksrc_clk *clk, bool announce);
extern void s3c_register_clksrc(struct clksrc_clk *srcs, int size);
