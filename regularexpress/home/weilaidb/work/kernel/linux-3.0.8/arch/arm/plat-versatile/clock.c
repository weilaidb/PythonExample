int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
long icst_clk_round(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(icst_clk_round);
int icst_clk_set(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(icst_clk_set);
