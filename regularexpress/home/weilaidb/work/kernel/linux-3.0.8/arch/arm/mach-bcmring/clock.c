#define clk_is_primary(x)       ((x)->type & CLK_TYPE_PRIMARY)
#define clk_is_pll1(x)          ((x)->type & CLK_TYPE_PLL1)
#define clk_is_pll2(x)          ((x)->type & CLK_TYPE_PLL2)
#define clk_is_programmable(x)  ((x)->type & CLK_TYPE_PROGRAMMABLE)
#define clk_is_bypassable(x)    ((x)->type & CLK_TYPE_BYPASSABLE)
#define clk_is_using_xtal(x)    ((x)->mode & CLK_MODE_XTAL)
static DEFINE_SPINLOCK(clk_lock);
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
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL(clk_get_parent);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
