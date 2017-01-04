static LIST_HEAD(clock_list);
static DEFINE_SPINLOCK(clock_lock);
static DEFINE_MUTEX(clock_list_sem);
enum ;
struct cpufreq_frequency_table loongson2_clockmod_table[] = ;
EXPORT_SYMBOL_GPL(loongson2_clockmod_table);
static struct clk cpu_clk = ;
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
static void propagate_rate(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_set_rate);
int clk_set_rate_ex(struct clk *clk, unsigned long rate, int algo_id)
EXPORT_SYMBOL_GPL(clk_set_rate_ex);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_round_rate);
DEFINE_SPINLOCK(loongson2_wait_lock);
void loongson2_cpu_wait(void)
EXPORT_SYMBOL_GPL(loongson2_cpu_wait);
MODULE_AUTHOR("Yanhua <yanh@lemote.com>");
MODULE_DESCRIPTION("cpufreq driver for Loongson 2F");
MODULE_LICENSE("GPL");
