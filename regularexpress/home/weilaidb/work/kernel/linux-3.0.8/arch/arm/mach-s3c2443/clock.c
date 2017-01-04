static struct clk clk_i2s_ext = ;
static unsigned int armdiv[16] = ;
static inline unsigned int s3c2443_fclk_div(unsigned long clkcon0)
static unsigned long s3c2443_armclk_roundrate(struct clk *clk,
unsigned long rate)
static int s3c2443_armclk_setrate(struct clk *clk, unsigned long rate)
static struct clk clk_armdiv = ;
static struct clk *clk_arm_sources[] = ;
static struct clksrc_clk clk_arm = ;
static struct clksrc_clk clk_hsspi = ;
static struct clksrc_clk clk_hsmmc_div = ;
static int s3c2443_setparent_hsmmc(struct clk *clk, struct clk *parent)
static int s3c2443_enable_hsmmc(struct clk *clk, int enable)
static struct clk clk_hsmmc = ;
static struct clksrc_clk clk_i2s_eplldiv = ;
struct clk *clk_i2s_srclist[] = ;
static struct clksrc_clk clk_i2s = ;
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static struct clksrc_clk *clksrcs[] __initdata = ;
static struct clk *clks[] __initdata = ;
void __init_or_cpufreq s3c2443_setup_clocks(void)
void __init s3c2443_init_clocks(int xtal)
