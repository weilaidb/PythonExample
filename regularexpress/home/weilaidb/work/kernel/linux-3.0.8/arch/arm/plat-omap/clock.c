static LIST_HEAD(clocks);
static DEFINE_MUTEX(clocks_mutex);
static DEFINE_SPINLOCK(clockfw_lock);
static struct clk_functions *arch_clock;
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
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL(clk_get_parent);
int __initdata mpurate;
static int __init omap_clk_setup(char *str)
__setup("mpurate=", omap_clk_setup);
unsigned long followparent_recalc(struct clk *clk)
unsigned long omap_fixed_divisor_recalc(struct clk *clk)
void clk_reparent(struct clk *child, struct clk *parent)
void propagate_rate(struct clk *tclk)
static LIST_HEAD(root_clks);
void recalculate_root_clocks(void)
void clk_preinit(struct clk *clk)
int clk_register(struct clk *clk)
EXPORT_SYMBOL(clk_register);
void clk_unregister(struct clk *clk)
EXPORT_SYMBOL(clk_unregister);
void clk_enable_init_clocks(void)
struct clk *omap_clk_get_by_name(const char *name)
int omap_clk_enable_autoidle_all(void)
int omap_clk_disable_autoidle_all(void)
static int clkll_enable_null(struct clk *clk)
static void clkll_disable_null(struct clk *clk)
const struct clkops clkops_null = ;
struct clk dummy_ck = ;
void clk_init_cpufreq_table(struct cpufreq_frequency_table **table)
void clk_exit_cpufreq_table(struct cpufreq_frequency_table **table)
static int __init clk_disable_unused(void)
late_initcall(clk_disable_unused);
late_initcall(omap_clk_enable_autoidle_all);
int __init clk_init(struct clk_functions * custom_clocks)
#if defined(CONFIG_PM_DEBUG) && defined(CONFIG_DEBUG_FS)
static struct dentry *clk_debugfs_root;
static int clk_debugfs_register_one(struct clk *c)
static int clk_debugfs_register(struct clk *c)
static int __init clk_debugfs_init(void)
late_initcall(clk_debugfs_init);
