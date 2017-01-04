static DEFINE_SPINLOCK(clocks_lock);
static LIST_HEAD(root_clks);
static LIST_HEAD(clocks);
static void propagate_rate(struct clk *, int on_init);
static int clk_debugfs_reparent(struct clk *);
static int generic_clk_enable(struct clk *clk)
static void generic_clk_disable(struct clk *clk)
static struct clkops generic_clkops = ;
static struct pclk_info *pclk_info_get(struct clk *clk)
static void clk_reparent(struct clk *clk, struct pclk_info *pclk_info)
static void do_clk_disable(struct clk *clk)
static int do_clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
void clk_register(struct clk_lookup *cl)
void propagate_rate(struct clk *pclk, int on_init)
static int
round_rate_index(struct clk *clk, unsigned long drate, unsigned long *rate)
long clk_round_rate(struct clk *clk, unsigned long drate)
EXPORT_SYMBOL(clk_round_rate);
unsigned long pll_calc_rate(struct clk *clk, int index)
int pll_clk_recalc(struct clk *clk)
int pll_clk_set_rate(struct clk *clk, unsigned long desired_rate)
unsigned long bus_calc_rate(struct clk *clk, int index)
int bus_clk_recalc(struct clk *clk)
int bus_clk_set_rate(struct clk *clk, unsigned long desired_rate)
unsigned long aux_calc_rate(struct clk *clk, int index)
int aux_clk_recalc(struct clk *clk)
int aux_clk_set_rate(struct clk *clk, unsigned long desired_rate)
unsigned long gpt_calc_rate(struct clk *clk, int index)
int gpt_clk_recalc(struct clk *clk)
int gpt_clk_set_rate(struct clk *clk, unsigned long desired_rate)
unsigned long clcd_calc_rate(struct clk *clk, int index)
int clcd_clk_recalc(struct clk *clk)
int clcd_clk_set_rate(struct clk *clk, unsigned long desired_rate)
int follow_parent(struct clk *clk)
void recalc_root_clocks(void)
void __init clk_init(void)
static struct dentry *clk_debugfs_root;
static int clk_debugfs_register_one(struct clk *c)
static int clk_debugfs_register(struct clk *c)
static int __init clk_debugfs_init(void)
late_initcall(clk_debugfs_init);
static int clk_debugfs_reparent(struct clk *c)
