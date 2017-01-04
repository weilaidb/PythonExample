struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
