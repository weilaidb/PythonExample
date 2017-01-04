static LIST_HEAD(at32_clock_list);
static DEFINE_SPINLOCK(clk_lock);
static DEFINE_SPINLOCK(clk_list_lock);
void at32_clk_register(struct clk *clk)
static struct clk *__clk_get(struct device *dev, const char *id)
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
static void __clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
static void __clk_disable(struct clk *clk)
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
#define	NEST_DELTA	2
#define	NEST_MAX	6
struct clkinf ;
static void
dump_clock(struct clk *parent, struct clkinf *r)
static int clk_show(struct seq_file *s, void *unused)
static int clk_open(struct inode *inode, struct file *file)
static const struct file_operations clk_operations = ;
static int __init clk_debugfs_init(void)
postcore_initcall(clk_debugfs_init);
