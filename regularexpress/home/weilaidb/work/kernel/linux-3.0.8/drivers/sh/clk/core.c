#define pr_fmt(fmt) "clock: " fmt
static LIST_HEAD(clock_list);
static DEFINE_SPINLOCK(clock_lock);
static DEFINE_MUTEX(clock_list_sem);
void clk_rate_table_build(struct clk *clk,
struct cpufreq_frequency_table *freq_table,
int nr_freqs,
struct clk_div_mult_table *src_table,
unsigned long *bitmap)
struct clk_rate_round_data;
struct clk_rate_round_data ;
#define for_each_frequency(pos, r, freq)			\
for (pos = r->min, freq = r->func(pos, r);		\
pos <= r->max; pos++, freq = r->func(pos, r))	\
if (unlikely(freq == 0))			\
;					\
else
static long clk_rate_round_helper(struct clk_rate_round_data *rounder)
static long clk_rate_table_iter(unsigned int pos,
struct clk_rate_round_data *rounder)
long clk_rate_table_round(struct clk *clk,
struct cpufreq_frequency_table *freq_table,
unsigned long rate)
static long clk_rate_div_range_iter(unsigned int pos,
struct clk_rate_round_data *rounder)
long clk_rate_div_range_round(struct clk *clk, unsigned int div_min,
unsigned int div_max, unsigned long rate)
int clk_rate_table_find(struct clk *clk,
struct cpufreq_frequency_table *freq_table,
unsigned long rate)
unsigned long followparent_recalc(struct clk *clk)
int clk_reparent(struct clk *child, struct clk *parent)
void propagate_rate(struct clk *tclk)
static void __clk_disable(struct clk *clk)
void clk_disable(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_disable);
static int __clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_enable);
static LIST_HEAD(root_clks);
void recalculate_root_clocks(void)
static struct clk_mapping dummy_mapping;
static struct clk *lookup_root_clock(struct clk *clk)
static int clk_establish_mapping(struct clk *clk)
static void clk_destroy_mapping(struct kref *kref)
static void clk_teardown_mapping(struct clk *clk)
int clk_register(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_register);
void clk_unregister(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_unregister);
void clk_enable_init_clocks(void)
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_get_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_set_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL_GPL(clk_set_parent);
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_get_parent);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_round_rate);
long clk_round_parent(struct clk *clk, unsigned long target,
unsigned long *best_freq, unsigned long *parent_freq,
unsigned int div_min, unsigned int div_max)
EXPORT_SYMBOL_GPL(clk_round_parent);
static void clks_core_resume(void)
static struct syscore_ops clks_syscore_ops = ;
static int __init clk_syscore_init(void)
subsys_initcall(clk_syscore_init);
static struct dentry *clk_debugfs_root;
static int clk_debugfs_register_one(struct clk *c)
static int clk_debugfs_register(struct clk *c)
static int __init clk_debugfs_init(void)
late_initcall(clk_debugfs_init);
