void nuc93x_clk_enable(struct clk *clk, int enable);
void clks_register(struct clk_lookup *clks, size_t num);
struct clk ;
#define DEFINE_CLK(_name, _ctrlbit)			\
struct clk clk_##_name =
#define DEF_CLKLOOK(_clk, _devname, _conname)		\
