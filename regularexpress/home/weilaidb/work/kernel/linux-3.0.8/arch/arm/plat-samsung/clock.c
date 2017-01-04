#if defined(CONFIG_DEBUG_FS)
static LIST_HEAD(clocks);
DEFINE_SPINLOCK(clocks_lock);
static int clk_null_enable(struct clk *clk, int enable)
static int dev_is_s3c_uart(struct device *dev)
static int dev_is_platform_device(struct device *dev)
struct clk *clk_get(struct device *dev, const char *id)
void clk_put(struct clk *clk)
int clk_enable(struct clk *clk)
void clk_disable(struct clk *clk)
unsigned long clk_get_rate(struct clk *clk)
long clk_round_rate(struct clk *clk, unsigned long rate)
int clk_set_rate(struct clk *clk, unsigned long rate)
struct clk *clk_get_parent(struct clk *clk)
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_get);
EXPORT_SYMBOL(clk_put);
EXPORT_SYMBOL(clk_enable);
EXPORT_SYMBOL(clk_disable);
EXPORT_SYMBOL(clk_get_rate);
EXPORT_SYMBOL(clk_round_rate);
EXPORT_SYMBOL(clk_set_rate);
EXPORT_SYMBOL(clk_get_parent);
EXPORT_SYMBOL(clk_set_parent);
int clk_default_setrate(struct clk *clk, unsigned long rate)
struct clk_ops clk_ops_def_setrate = ;
struct clk clk_xtal = ;
struct clk clk_ext = ;
struct clk clk_epll = ;
struct clk clk_mpll = ;
struct clk clk_upll = ;
struct clk clk_f = ;
struct clk clk_h = ;
struct clk clk_p = ;
struct clk clk_usb_bus = ;
struct clk s3c24xx_uclk = ;
int s3c24xx_register_clock(struct clk *clk)
int s3c24xx_register_clocks(struct clk **clks, int nr_clks)
void __init s3c_register_clocks(struct clk *clkp, int nr_clks)
void __init s3c_disable_clocks(struct clk *clkp, int nr_clks)
int __init s3c24xx_register_baseclocks(unsigned long xtal)
#if defined(CONFIG_PM_DEBUG) && defined(CONFIG_DEBUG_FS)
static struct dentry *clk_debugfs_root;
static int clk_debugfs_register_one(struct clk *c)
static int clk_debugfs_register(struct clk *c)
static int __init clk_debugfs_init(void)
late_initcall(clk_debugfs_init);
