struct clk ;
static struct clk clk_ost_clk = ;
static struct clk clk_mclk_clk = ;
static struct clk clk_bclk32_clk = ;
static struct clk clk_ddr_clk = ;
static struct clk clk_vga_clk = ;
static LIST_HEAD(clocks);
static DEFINE_MUTEX(clocks_mutex);
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
struct  vga_clk_table[] = ;
struct  mclk_clk_table[] = ;
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
int clk_register(struct clk *clk)
EXPORT_SYMBOL(clk_register);
void clk_unregister(struct clk *clk)
EXPORT_SYMBOL(clk_unregister);
struct  pllrate_table[] = ;
struct  pddr_table[] = ;
static int __init clk_init(void)
core_initcall(clk_init);
