static struct clk extal_clk = ;
static unsigned long pll_recalc(struct clk *clk)
static struct clk_ops pll_clk_ops = ;
static struct clk pll_clk = ;
static struct clk *clks[] = ;
static unsigned int div2[] = ;
static struct clk_div_mult_table div4_div_mult_table = ;
static struct clk_div4_table div4_table = ;
enum ;
#define DIV4(_bit, _mask, _flags) \
SH_CLK_DIV4(&pll_clk, FRQMR1, _bit, _mask, _flags)
struct clk div4_clks[DIV4_NR] = ;
#define MSTPCR0		0xffc80030
#define MSTPCR1		0xffc80034
enum ;
static struct clk mstp_clks[MSTP_NR] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
int __init arch_clk_init(void)
