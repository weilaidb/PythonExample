static struct clksrc_clk clk_mout_dpll = ;
static u32 epll_div[][5] = ;
static int s5p6450_epll_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops s5p6450_epll_ops = ;
static struct clksrc_clk clk_dout_epll = ;
static struct clksrc_clk clk_mout_hclk_sel = ;
static struct clk *clkset_hclk_list[] = ;
static struct clksrc_sources clkset_hclk = ;
static struct clksrc_clk clk_hclk = ;
static struct clksrc_clk clk_pclk = ;
static struct clksrc_clk clk_dout_pwm_ratio0 = ;
static struct clksrc_clk clk_pclk_to_wdt_pwm = ;
static struct clksrc_clk clk_hclk_low = ;
static struct clksrc_clk clk_pclk_low = ;
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static struct clk *clkset_uart_list[] = ;
static struct clksrc_sources clkset_uart = ;
static struct clk *clkset_mali_list[] = ;
static struct clksrc_sources clkset_mali = ;
static struct clk *clkset_group2_list[] = ;
static struct clksrc_sources clkset_group2 = ;
static struct clk *clkset_dispcon_list[] = ;
static struct clksrc_sources clkset_dispcon = ;
static struct clk *clkset_hsmmc44_list[] = ;
static struct clksrc_sources clkset_hsmmc44 = ;
static struct clk *clkset_sclk_audio0_list[] = ;
static struct clksrc_sources clkset_sclk_audio0 = ;
static struct clksrc_clk clk_sclk_audio0 = ;
static struct clksrc_clk clksrcs[] = ;
static struct clksrc_clk *sysclks[] = ;
void __init_or_cpufreq s5p6450_setup_clocks(void)
void __init s5p6450_register_clocks(void)
