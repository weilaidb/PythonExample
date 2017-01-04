#define FRQCRA		0xe6150000
#define FRQCRB		0xe6150004
#define FRQCRD		0xe61500e4
#define VCLKCR1		0xe6150008
#define VCLKCR2		0xe615000C
#define VCLKCR3		0xe615001C
#define ZBCKCR		0xe6150010
#define FLCKCR		0xe6150014
#define SD0CKCR		0xe6150074
#define SD1CKCR		0xe6150078
#define SD2CKCR		0xe615007C
#define FSIACKCR	0xe6150018
#define FSIBCKCR	0xe6150090
#define SUBCKCR		0xe6150080
#define SPUACKCR	0xe6150084
#define SPUVCKCR	0xe6150094
#define MSUCKCR		0xe6150088
#define HSICKCR		0xe615008C
#define MFCK1CR		0xe6150098
#define MFCK2CR		0xe615009C
#define DSITCKCR	0xe6150060
#define DSI0PCKCR	0xe6150064
#define DSI1PCKCR	0xe6150068
#define DSI0PHYCR	0xe615006C
#define DSI1PHYCR	0xe6150070
#define PLLECR		0xe61500d0
#define PLL0CR		0xe61500d8
#define PLL1CR		0xe6150028
#define PLL2CR		0xe615002c
#define PLL3CR		0xe61500dc
#define SMSTPCR0	0xe6150130
#define SMSTPCR1	0xe6150134
#define SMSTPCR2	0xe6150138
#define SMSTPCR3	0xe615013c
#define SMSTPCR4	0xe6150140
#define SMSTPCR5	0xe6150144
#define CKSCR		0xe61500c0
static struct clk r_clk = ;
struct clk sh73a0_extal1_clk = ;
struct clk sh73a0_extal2_clk = ;
static unsigned long div2_recalc(struct clk *clk)
static struct clk_ops div2_clk_ops = ;
static struct clk extal1_div2_clk = ;
static struct clk extal2_div2_clk = ;
static struct clk_ops main_clk_ops = ;
static struct clk main_clk = ;
static unsigned long pll_recalc(struct clk *clk)
static struct clk_ops pll_clk_ops = ;
static struct clk pll0_clk = ;
static struct clk pll1_clk = ;
static struct clk pll2_clk = ;
static struct clk pll3_clk = ;
static struct clk pll1_div2_clk = ;
static struct clk *main_clks[] = ;
static void div4_kick(struct clk *clk)
static int divisors[] = ;
static struct clk_div_mult_table div4_div_mult_table = ;
static struct clk_div4_table div4_table = ;
enum ;
#define DIV4(_reg, _bit, _mask, _flags) \
SH_CLK_DIV4(&pll1_clk, _reg, _bit, _mask, _flags)
static struct clk div4_clks[DIV4_NR] = ;
enum ;
static struct clk div6_clks[DIV6_NR] = ;
enum ;
#define MSTP(_parent, _reg, _bit, _flags) \
SH_CLK_MSTP32(_parent, _reg, _bit, _flags)
static struct clk mstp_clks[MSTP_NR] = ;
#define CLKDEV_CON_ID(_id, _clk)
#define CLKDEV_DEV_ID(_id, _clk)
#define CLKDEV_ICK_ID(_cid, _did, _clk)
static struct clk_lookup lookups[] = ;
void __init sh73a0_clock_init(void)
