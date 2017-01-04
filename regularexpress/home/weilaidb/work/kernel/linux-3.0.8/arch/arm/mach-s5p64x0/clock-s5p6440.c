static u32 epll_div[][5] = ;
static int s5p6440_epll_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops s5p6440_epll_ops = ;
static struct clksrc_clk clk_hclk = ;
static struct clksrc_clk clk_pclk = ;
static struct clksrc_clk clk_hclk_low = ;
static struct clksrc_clk clk_pclk_low = ;
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static struct clk clk_iis_cd_v40 = ;
static struct clk clk_pcm_cd = ;
static struct clk *clkset_group1_list[] = ;
static struct clksrc_sources clkset_group1 = ;
static struct clk *clkset_uart_list[] = ;
static struct clksrc_sources clkset_uart = ;
static struct clk *clkset_audio_list[] = ;
static struct clksrc_sources clkset_audio = ;
static struct clksrc_clk clksrcs[] = ;
static struct clksrc_clk *sysclks[] = ;
void __init_or_cpufreq s5p6440_setup_clocks(void)
static struct clk *clks[] __initdata = ;
void __init s5p6440_register_clocks(void)
