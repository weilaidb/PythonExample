static struct clk clk_ext_xtal_mux = ;
#define clk_fin_apll clk_ext_xtal_mux
#define clk_fin_mpll clk_ext_xtal_mux
#define clk_fin_epll clk_ext_xtal_mux
#define clk_fout_mpll	clk_mpll
#define clk_fout_epll	clk_epll
struct clk clk_h2 = ;
struct clk clk_27m = ;
static int clk_48m_ctrl(struct clk *clk, int enable)
struct clk clk_48m = ;
struct clk clk_xusbxti = ;
static int inline s3c64xx_gate(void __iomem *reg,
struct clk *clk,
int enable)
static int s3c64xx_pclk_ctrl(struct clk *clk, int enable)
static int s3c64xx_hclk_ctrl(struct clk *clk, int enable)
int s3c64xx_sclk_ctrl(struct clk *clk, int enable)
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static struct clk clk_fout_apll = ;
static struct clk *clk_src_apll_list[] = ;
static struct clksrc_sources clk_src_apll = ;
static struct clksrc_clk clk_mout_apll = ;
static struct clk *clk_src_epll_list[] = ;
static struct clksrc_sources clk_src_epll = ;
static struct clksrc_clk clk_mout_epll = ;
static struct clk *clk_src_mpll_list[] = ;
static struct clksrc_sources clk_src_mpll = ;
static struct clksrc_clk clk_mout_mpll = ;
static unsigned int armclk_mask;
static unsigned long s3c64xx_clk_arm_get_rate(struct clk *clk)
static unsigned long s3c64xx_clk_arm_round_rate(struct clk *clk,
unsigned long rate)
static int s3c64xx_clk_arm_set_rate(struct clk *clk, unsigned long rate)
static struct clk clk_arm = ;
static unsigned long s3c64xx_clk_doutmpll_get_rate(struct clk *clk)
static struct clk_ops clk_dout_ops = ;
static struct clk clk_dout_mpll = ;
static struct clk *clkset_spi_mmc_list[] = ;
static struct clksrc_sources clkset_spi_mmc = ;
static struct clk *clkset_irda_list[] = ;
static struct clksrc_sources clkset_irda = ;
static struct clk *clkset_uart_list[] = ;
static struct clksrc_sources clkset_uart = ;
static struct clk *clkset_uhost_list[] = ;
static struct clksrc_sources clkset_uhost = ;
static struct clk clk_iis_cd0 = ;
static struct clk clk_iis_cd1 = ;
static struct clk clk_iisv4_cd = ;
static struct clk clk_pcm_cd = ;
static struct clk *clkset_audio0_list[] = ;
static struct clksrc_sources clkset_audio0 = ;
static struct clk *clkset_audio1_list[] = ;
static struct clksrc_sources clkset_audio1 = ;
static struct clk *clkset_audio2_list[] = ;
static struct clksrc_sources clkset_audio2 = ;
static struct clk *clkset_camif_list[] = ;
static struct clksrc_sources clkset_camif = ;
static struct clksrc_clk clksrcs[] = ;
static struct clksrc_clk *init_parents[] = ;
#define GET_DIV(clk, field) ((((clk) & field##_MASK) >> field##_SHIFT) + 1)
void __init_or_cpufreq s3c6400_setup_clocks(void)
static struct clk *clks1[] __initdata = ;
static struct clk *clks[] __initdata = ;
void __init s3c64xx_register_clocks(unsigned long xtal,
unsigned armclk_divlimit)
