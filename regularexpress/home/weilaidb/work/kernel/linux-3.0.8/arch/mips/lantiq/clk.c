struct clk ;
static struct clk *cpu_clk;
static int cpu_clk_cnt;
static struct clk cpu_clk_generic[] = ;
static struct resource ltq_cgu_resource = ;
void __iomem *ltq_cgu_membase;
void clk_init(void)
static inline int clk_good(struct clk *clk)
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
static inline u32 ltq_get_counter_resolution(void)
void __init plat_time_init(void)
