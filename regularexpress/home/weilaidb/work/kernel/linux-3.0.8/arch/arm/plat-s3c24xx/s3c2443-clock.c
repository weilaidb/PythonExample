static int s3c2443_gate(void __iomem *reg, struct clk *clk, int enable)
int s3c2443_clkcon_enable_h(struct clk *clk, int enable)
int s3c2443_clkcon_enable_p(struct clk *clk, int enable)
int s3c2443_clkcon_enable_s(struct clk *clk, int enable)
struct clk clk_mpllref = ;
static struct clk *clk_epllref_sources[] = ;
struct clksrc_clk clk_epllref = ;
static struct clk *clk_sysclk_sources[] = ;
struct clksrc_clk clk_esysclk = ;
static unsigned long s3c2443_getrate_mdivclk(struct clk *clk)
static struct clk clk_mdivclk = ;
static struct clk *clk_msysclk_sources[] = ;
struct clksrc_clk clk_msysclk = ;
static unsigned long s3c2443_prediv_getrate(struct clk *clk)
static struct clk clk_prediv = ;
static struct clksrc_clk clk_usb_bus_host = ;
static struct clksrc_clk clksrc_clks[] = ;
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static inline unsigned long s3c2443_get_hdiv(unsigned long clkcon0)
void __init_or_cpufreq s3c2443_common_setup_clocks(pll_fn get_mpll,
fdiv_fn get_fdiv)
static struct clk *clks[] __initdata = ;
static struct clksrc_clk *clksrcs[] __initdata = ;
void __init s3c2443_common_init_clocks(int xtal, pll_fn get_mpll,
fdiv_fn get_fdiv)
