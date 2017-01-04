#define __CLKDEV_H
struct clk;
struct device;
struct clk_lookup ;
struct clk_lookup *clkdev_alloc(struct clk *clk, const char *con_id,
const char *dev_fmt, ...);
void clkdev_add(struct clk_lookup *cl);
void clkdev_drop(struct clk_lookup *cl);
void clkdev_add_table(struct clk_lookup *, size_t);
int clk_add_alias(const char *, const char *, char *, struct device *);
