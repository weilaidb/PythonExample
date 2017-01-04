#define FRQCR		0xa4150000
#define VCLKCR		0xa4150004
#define SCLKACR		0xa4150008
#define SCLKBCR		0xa415000c
#define PLLCR		0xa4150024
#define MSTPCR0		0xa4150030
#define MSTPCR1		0xa4150034
#define MSTPCR2		0xa4150038
#define DLLFRQ		0xa4150050
static struct clk r_clk = ;
struct clk extal_clk = ;
static unsigned long dll_recalc(struct clk *clk)
static struct clk_ops dll_clk_ops = ;
static struct clk dll_clk = ;
static unsigned long pll_recalc(struct clk *clk)
static struct clk_ops pll_clk_ops = ;
static struct clk pll_clk = ;
struct clk *main_clks[] = ;
static int multipliers[] = ;
static int divisors[] = ;
static struct clk_div_mult_table div4_div_mult_table = ;
static struct clk_div4_table div4_table = ;
enum ;
#define DIV4(_reg, _bit, _mask, _flags) \
SH_CLK_DIV4(&pll_clk, _reg, _bit, _mask, _flags)
struct clk div4_clks[DIV4_NR] = ;
enum ;
struct clk div6_clks[DIV6_NR] = ;
#define MSTP(_parent, _reg, _bit, _flags) \
SH_CLK_MSTP32(_parent, _reg, _bit, _flags)
enum ;
static struct clk mstp_clks[MSTP_NR] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
int __init arch_clk_init(void)
