#define CPG2_FRQCR3	0xfe0a0018
static int frqcr3_divisors[] = ;
static int frqcr3_values[]   = ;
static unsigned long emi_clk_recalc(struct clk *clk)
static inline int frqcr3_lookup(struct clk *clk, unsigned long rate)
static struct clk_ops sh4202_emi_clk_ops = ;
static struct clk sh4202_emi_clk = ;
static unsigned long femi_clk_recalc(struct clk *clk)
static struct clk_ops sh4202_femi_clk_ops = ;
static struct clk sh4202_femi_clk = ;
static void shoc_clk_init(struct clk *clk)
static unsigned long shoc_clk_recalc(struct clk *clk)
static int shoc_clk_verify_rate(struct clk *clk, unsigned long rate)
static int shoc_clk_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops sh4202_shoc_clk_ops = ;
static struct clk sh4202_shoc_clk = ;
static struct clk *sh4202_onchip_clocks[] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
int __init arch_clk_init(void)
