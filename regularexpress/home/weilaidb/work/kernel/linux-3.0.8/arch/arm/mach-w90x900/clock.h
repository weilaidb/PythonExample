void nuc900_clk_enable(struct clk *clk, int enable);
void nuc900_subclk_enable(struct clk *clk, int enable);
struct clk ;
#define DEFINE_CLK(_name, _ctrlbit)			\
struct clk clk_##_name =
#define DEFINE_SUBCLK(_name, _ctrlbit)			\
struct clk clk_##_name =
#define DEF_CLKLOOK(_clk, _devname, _conname)		\
