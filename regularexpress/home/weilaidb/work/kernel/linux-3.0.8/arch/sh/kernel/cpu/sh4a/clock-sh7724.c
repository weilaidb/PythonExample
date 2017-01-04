#define FRQCRA		0xa4150000
#define FRQCRB		0xa4150004
#define VCLKCR		0xa4150048
#define FCLKACR		0xa4150008
#define FCLKBCR		0xa415000c
#define IRDACLKCR	0xa4150018
#define PLLCR		0xa4150024
#define SPUCLKCR	0xa415003c
#define FLLFRQ		0xa4150050
#define LSTATS		0xa4150060
static struct clk r_clk = ;
static struct clk extal_clk = ;
static unsigned long fll_recalc(struct clk *clk)
static struct clk_ops fll_clk_ops = ;
static struct clk fll_clk = ;
static unsigned long pll_recalc(struct clk *clk)
static struct clk_ops pll_clk_ops = ;
static struct clk pll_clk = ;
static unsigned long div3_recalc(struct clk *clk)
static struct clk_ops div3_clk_ops = ;
static struct clk div3_clk = ;
struct clk sh7724_fsimcka_clk = ;
struct clk sh7724_fsimckb_clk = ;
static struct clk *main_clks[] = ;
static void div4_kick(struct clk *clk)
static int divisors[] = ;
static struct clk_div_mult_table div4_div_mult_table = ;
static struct clk_div4_table div4_table = ;
enum ;
#define DIV4(_reg, _bit, _mask, _flags) \
SH_CLK_DIV4(&pll_clk, _reg, _bit, _mask, _flags)
struct clk div4_clks[DIV4_NR] = ;
enum ;
static struct clk div6_clks[DIV6_NR] = ;
enum ;
static struct clk *fclkacr_parent[] = ;
static struct clk *fclkbcr_parent[] = ;
static struct clk div6_reparent_clks[DIV6_REPARENT_NR] = ;
static struct clk mstp_clks[HWBLK_NR] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
int __init arch_clk_init(void)
