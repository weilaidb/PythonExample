#define SUBCLK 0x24
static DEFINE_SPINLOCK(clocks_lock);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
void nuc900_clk_enable(struct clk *clk, int enable)
void nuc900_subclk_enable(struct clk *clk, int enable)
