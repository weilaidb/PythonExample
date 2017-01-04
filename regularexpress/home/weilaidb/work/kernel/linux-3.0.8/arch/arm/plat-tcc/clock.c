static DEFINE_MUTEX(clocks_mutex);
static void __clk_disable(struct clk *clk)
static int __clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_get_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_round_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_set_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL_GPL(clk_set_parent);
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_get_parent);
