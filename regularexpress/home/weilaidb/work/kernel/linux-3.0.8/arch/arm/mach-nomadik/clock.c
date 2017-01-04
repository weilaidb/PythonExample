unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
static struct clk clk_24 = ;
static struct clk clk_48 = ;
static struct clk clk_default;
#define CLK(_clk, dev)				\
static struct clk_lookup lookups[] = ;
int __init clk_init(void)
