static DEFINE_MUTEX(clocks_mutex);
static DEFINE_SPINLOCK(clocks_lock);
static LIST_HEAD(clocks);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
int clk_reset(struct clk *clk, enum clk_reset_action action)
EXPORT_SYMBOL(clk_reset);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
int clk_set_min_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_min_rate);
int clk_set_max_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_max_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL(clk_get_parent);
int clk_set_flags(struct clk *clk, unsigned long flags)
EXPORT_SYMBOL(clk_set_flags);
static struct clk *ebi1_clk;
void __init msm_clock_init(struct clk_lookup *clock_tbl, unsigned num_clocks)
static int __init clock_late_init(void)
late_initcall(clock_late_init);
