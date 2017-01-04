static LIST_HEAD(clocks);
static DEFINE_MUTEX(clocks_mutex);
static DEFINE_SPINLOCK(clockfw_lock);
static unsigned psc_domain(struct clk *clk)
static void __clk_enable(struct clk *clk)
static void __clk_disable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
static void propagate_rate(struct clk *root)
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
int clk_register(struct clk *clk)
EXPORT_SYMBOL(clk_register);
void clk_unregister(struct clk *clk)
EXPORT_SYMBOL(clk_unregister);
static int __init clk_disable_unused(void)
late_initcall(clk_disable_unused);
static unsigned long clk_sysclk_recalc(struct clk *clk)
int davinci_set_sysclk_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(davinci_set_sysclk_rate);
static unsigned long clk_leafclk_recalc(struct clk *clk)
static unsigned long clk_pllclk_recalc(struct clk *clk)
int davinci_set_pllrate(struct pll_data *pll, unsigned int prediv,
unsigned int mult, unsigned int postdiv)
EXPORT_SYMBOL(davinci_set_pllrate);
int __init davinci_clk_init(struct clk_lookup *clocks)
#define CLKNAME_MAX	10
#define NEST_DELTA	2
#define NEST_MAX	4
static void
dump_clock(struct seq_file *s, unsigned nest, struct clk *parent)
static int davinci_ck_show(struct seq_file *m, void *v)
static int davinci_ck_open(struct inode *inode, struct file *file)
static const struct file_operations davinci_ck_operations = ;
static int __init davinci_clk_debugfs_init(void)
device_initcall(davinci_clk_debugfs_init);
