#define __LINUX_CLK_H
struct device;
struct clk;
struct clk *clk_get(struct device *dev, const char *id);
int clk_enable(struct clk *clk);
void clk_disable(struct clk *clk);
unsigned long clk_get_rate(struct clk *clk);
void clk_put(struct clk *clk);
long clk_round_rate(struct clk *clk, unsigned long rate);
int clk_set_rate(struct clk *clk, unsigned long rate);
int clk_set_parent(struct clk *clk, struct clk *parent);
struct clk *clk_get_parent(struct clk *clk);
struct clk *clk_get_sys(const char *dev_id, const char *con_id);
int clk_add_alias(const char *alias, const char *alias_dev_name, char *id,
struct device *dev);
