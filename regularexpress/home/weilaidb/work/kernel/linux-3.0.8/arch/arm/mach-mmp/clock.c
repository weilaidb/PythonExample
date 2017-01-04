static void apbc_clk_enable(struct clk *clk)
static void apbc_clk_disable(struct clk *clk)
struct clkops apbc_clk_ops = ;
static void apmu_clk_enable(struct clk *clk)
static void apmu_clk_disable(struct clk *clk)
struct clkops apmu_clk_ops = ;
static DEFINE_SPINLOCK(clocks_lock);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
