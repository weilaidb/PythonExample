static LIST_HEAD(clocks);
static DEFINE_MUTEX(clocks_mutex);
static struct clk_lookup *clk_find(const char *dev_id, const char *con_id)
struct clk *clk_get_sys(const char *dev_id, const char *con_id)
EXPORT_SYMBOL(clk_get_sys);
struct clk *clk_get(struct device *dev, const char *con_id)
EXPORT_SYMBOL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
void clkdev_add(struct clk_lookup *cl)
EXPORT_SYMBOL(clkdev_add);
void __init clkdev_add_table(struct clk_lookup *cl, size_t num)
#define MAX_DEV_ID	20
#define MAX_CON_ID	16
struct clk_lookup_alloc ;
struct clk_lookup * __init_refok
clkdev_alloc(struct clk *clk, const char *con_id, const char *dev_fmt, ...)
EXPORT_SYMBOL(clkdev_alloc);
int clk_add_alias(const char *alias, const char *alias_dev_name, char *id,
struct device *dev)
EXPORT_SYMBOL(clk_add_alias);
void clkdev_drop(struct clk_lookup *cl)
EXPORT_SYMBOL(clkdev_drop);
