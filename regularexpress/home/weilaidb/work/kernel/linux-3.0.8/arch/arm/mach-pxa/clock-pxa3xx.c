#define BASE_CLK	13000000
#define RO_CLK		60000000
#define ACCR_D0CS	(1 << 26)
#define ACCR_PCCE	(1 << 11)
static unsigned char hss_mult[4] = ;
unsigned int pxa3xx_get_clk_frequency_khz(int info)
static unsigned long clk_pxa3xx_ac97_getrate(struct clk *clk)
static unsigned long clk_pxa3xx_hsio_getrate(struct clk *clk)
static unsigned int smcfs_mult[8] = ;
static unsigned int df_clkdiv[4] = ;
static unsigned long clk_pxa3xx_smemc_getrate(struct clk *clk)
void clk_pxa3xx_cken_enable(struct clk *clk)
void clk_pxa3xx_cken_disable(struct clk *clk)
const struct clkops clk_pxa3xx_cken_ops = ;
const struct clkops clk_pxa3xx_hsio_ops = ;
const struct clkops clk_pxa3xx_ac97_ops = ;
const struct clkops clk_pxa3xx_smemc_ops = ;
static void clk_pout_enable(struct clk *clk)
static void clk_pout_disable(struct clk *clk)
const struct clkops clk_pxa3xx_pout_ops = ;
static uint32_t cken[2];
static uint32_t accr;
static int pxa3xx_clock_suspend(void)
static void pxa3xx_clock_resume(void)
#define pxa3xx_clock_suspend	NULL
#define pxa3xx_clock_resume	NULL
struct syscore_ops pxa3xx_clock_syscore_ops = ;
