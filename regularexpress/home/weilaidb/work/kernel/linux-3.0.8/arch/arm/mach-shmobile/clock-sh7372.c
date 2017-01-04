#define FRQCRA		0xe6150000
#define FRQCRB		0xe6150004
#define FRQCRC		0xe61500e0
#define FRQCRD		0xe61500e4
#define VCLKCR1		0xe6150008
#define VCLKCR2		0xe615000c
#define VCLKCR3		0xe615001c
#define FMSICKCR	0xe6150010
#define FMSOCKCR	0xe6150014
#define FSIACKCR	0xe6150018
#define FSIBCKCR	0xe6150090
#define SUBCKCR		0xe6150080
#define SPUCKCR		0xe6150084
#define VOUCKCR		0xe6150088
#define HDMICKCR	0xe6150094
#define DSITCKCR	0xe6150060
#define DSI0PCKCR	0xe6150064
#define DSI1PCKCR	0xe6150098
#define PLLC01CR	0xe6150028
#define PLLC2CR		0xe615002c
#define RMSTPCR0	0xe6150110
#define RMSTPCR1	0xe6150114
#define RMSTPCR2	0xe6150118
#define RMSTPCR3	0xe615011c
#define RMSTPCR4	0xe6150120
#define SMSTPCR0	0xe6150130
#define SMSTPCR1	0xe6150134
#define SMSTPCR2	0xe6150138
#define SMSTPCR3	0xe615013c
#define SMSTPCR4	0xe6150140
#define FSIDIVA		0xFE1F8000
#define FSIDIVB		0xFE1F8008
struct clk sh7372_dv_clki_clk = ;
static struct clk r_clk = ;
struct clk sh7372_extal1_clk = ;
struct clk sh7372_extal2_clk = ;
static unsigned long div2_recalc(struct clk *clk)
static struct clk_ops div2_clk_ops = ;
struct clk sh7372_dv_clki_div2_clk = ;
static struct clk extal1_div2_clk = ;
static struct clk extal2_div2_clk = ;
static struct clk extal2_div4_clk = ;
static unsigned long pllc01_recalc(struct clk *clk)
static struct clk_ops pllc01_clk_ops = ;
static struct clk pllc0_clk = ;
static struct clk pllc1_clk = ;
static struct clk pllc1_div2_clk = ;
static struct clk *pllc2_parent[] = ;
static struct cpufreq_frequency_table pllc2_freq_table[29];
static void pllc2_table_rebuild(struct clk *clk)
static unsigned long pllc2_recalc(struct clk *clk)
static long pllc2_round_rate(struct clk *clk, unsigned long rate)
static int pllc2_enable(struct clk *clk)
static void pllc2_disable(struct clk *clk)
static int pllc2_set_rate(struct clk *clk, unsigned long rate)
static int pllc2_set_parent(struct clk *clk, struct clk *parent)
static struct clk_ops pllc2_clk_ops = ;
struct clk sh7372_pllc2_clk = ;
struct clk sh7372_fsiack_clk = ;
struct clk sh7372_fsibck_clk = ;
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
static struct clk div6_clks[DIV6_NR] = ;
enum ;
static struct clk *hdmi_parent[] = ;
static struct clk *fsiackcr_parent[] = ;
static struct clk *fsibckcr_parent[] = ;
static struct clk div6_reparent_clks[DIV6_REPARENT_NR] = ;
static unsigned long fsidiv_recalc(struct clk *clk)
static long fsidiv_round_rate(struct clk *clk, unsigned long rate)
static void fsidiv_disable(struct clk *clk)
static int fsidiv_enable(struct clk *clk)
static int fsidiv_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops fsidiv_clk_ops = ;
static struct clk_mapping sh7372_fsidiva_clk_mapping = ;
struct clk sh7372_fsidiva_clk = ;
static struct clk_mapping sh7372_fsidivb_clk_mapping = ;
struct clk sh7372_fsidivb_clk = ;
static struct clk *late_main_clks[] = ;
enum ;
#define MSTP(_parent, _reg, _bit, _flags) \
SH_CLK_MSTP32(_parent, _reg, _bit, _flags)
static struct clk mstp_clks[MSTP_NR] = ;
#define CLKDEV_CON_ID(_id, _clk)
#define CLKDEV_DEV_ID(_id, _clk)
#define CLKDEV_ICK_ID(_cid, _did, _clk)
static struct clk_lookup lookups[] = ;
void __init sh7372_clock_init(void)
