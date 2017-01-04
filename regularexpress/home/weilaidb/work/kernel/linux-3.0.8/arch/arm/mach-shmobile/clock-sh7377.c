#define RTFRQCR    0xe6150000
#define SYFRQCR    0xe6150004
#define CMFRQCR    0xe61500E0
#define VCLKCR1    0xe6150008
#define VCLKCR2    0xe615000C
#define VCLKCR3    0xe615001C
#define FMSICKCR   0xe6150010
#define FMSOCKCR   0xe6150014
#define FSICKCR    0xe6150018
#define PLLC1CR    0xe6150028
#define PLLC2CR    0xe615002C
#define SUBUSBCKCR 0xe6150080
#define SPUCKCR    0xe6150084
#define MSUCKCR    0xe6150088
#define MVI3CKCR   0xe6150090
#define HDMICKCR   0xe6150094
#define MFCK1CR    0xe6150098
#define MFCK2CR    0xe615009C
#define DSITCKCR   0xe6150060
#define DSIPCKCR   0xe6150064
#define SMSTPCR0   0xe6150130
#define SMSTPCR1   0xe6150134
#define SMSTPCR2   0xe6150138
#define SMSTPCR3   0xe615013C
#define SMSTPCR4   0xe6150140
static struct clk r_clk = ;
struct clk sh7377_extalc1_clk = ;
struct clk sh7377_extal2_clk = ;
static unsigned long div2_recalc(struct clk *clk)
static struct clk_ops div2_clk_ops = ;
static struct clk extalc1_div2_clk = ;
static struct clk extal2_div2_clk = ;
static struct clk extal2_div4_clk = ;
static unsigned long pllc1_recalc(struct clk *clk)
static struct clk_ops pllc1_clk_ops = ;
static struct clk pllc1_clk = ;
static struct clk pllc1_div2_clk = ;
static unsigned long pllc2_recalc(struct clk *clk)
static struct clk_ops pllc2_clk_ops = ;
static struct clk pllc2_clk = ;
static struct clk *main_clks[] = ;
static void div4_kick(struct clk *clk)
static int divisors[] = ;
static struct clk_div_mult_table div4_div_mult_table = ;
static struct clk_div4_table div4_table = ;
enum ;
#define DIV4(_reg, _bit, _mask, _flags) \
SH_CLK_DIV4(&pllc1_clk, _reg, _bit, _mask, _flags)
static struct clk div4_clks[DIV4_NR] = ;
enum ;
static struct clk div6_clks[] = ;
enum ;
#define MSTP(_parent, _reg, _bit, _flags) \
SH_CLK_MSTP32(_parent, _reg, _bit, _flags)
static struct clk mstp_clks[] = ;
#define CLKDEV_CON_ID(_id, _clk)
#define CLKDEV_DEV_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
void __init sh7377_clock_init(void)
