static DEFINE_MUTEX(clock_list_lock);
static LIST_HEAD(clocks);
struct clk *tegra_get_clock_by_name(const char *name)
static unsigned long clk_predict_rate_from_parent(struct clk *c, struct clk *p)
unsigned long clk_get_rate_locked(struct clk *c)
unsigned long clk_get_rate(struct clk *c)
EXPORT_SYMBOL(clk_get_rate);
int clk_reparent(struct clk *c, struct clk *parent)
void clk_init(struct clk *c)
int clk_enable(struct clk *c)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *c)
EXPORT_SYMBOL(clk_disable);
int clk_set_parent(struct clk *c, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
struct clk *clk_get_parent(struct clk *c)
EXPORT_SYMBOL(clk_get_parent);
int clk_set_rate_locked(struct clk *c, unsigned long rate)
int clk_set_rate(struct clk *c, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
unsigned long clk_get_rate_all_locked(struct clk *c)
long clk_round_rate(struct clk *c, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
static int tegra_clk_init_one_from_table(struct tegra_clk_init_table *table)
void tegra_clk_init_from_table(struct tegra_clk_init_table *table)
EXPORT_SYMBOL(tegra_clk_init_from_table);
void tegra_periph_reset_deassert(struct clk *c)
EXPORT_SYMBOL(tegra_periph_reset_deassert);
void tegra_periph_reset_assert(struct clk *c)
EXPORT_SYMBOL(tegra_periph_reset_assert);
void __init tegra_init_clock(void)
void tegra_sdmmc_tap_delay(struct clk *c, int delay)
static int __clk_lock_all_spinlocks(void)
static void __clk_unlock_all_spinlocks(void)
static void clk_lock_all(void)
static void clk_unlock_all(void)
static struct dentry *clk_debugfs_root;
static void clock_tree_show_one(struct seq_file *s, struct clk *c, int level)
static int clock_tree_show(struct seq_file *s, void *data)
static int clock_tree_open(struct inode *inode, struct file *file)
static const struct file_operations clock_tree_fops = ;
static int possible_parents_show(struct seq_file *s, void *data)
static int possible_parents_open(struct inode *inode, struct file *file)
static const struct file_operations possible_parents_fops = ;
static int clk_debugfs_register_one(struct clk *c)
static int clk_debugfs_register(struct clk *c)
static int __init clk_debugfs_init(void)
late_initcall(clk_debugfs_init);
