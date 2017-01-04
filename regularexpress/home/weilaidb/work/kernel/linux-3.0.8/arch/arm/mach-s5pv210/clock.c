static unsigned long xtal;
static struct clksrc_clk clk_mout_apll = ;
static struct clksrc_clk clk_mout_epll = ;
static struct clksrc_clk clk_mout_mpll = ;
static struct clk *clkset_armclk_list[] = ;
static struct clksrc_sources clkset_armclk = ;
static struct clksrc_clk clk_armclk = ;
static struct clksrc_clk clk_hclk_msys = ;
static struct clksrc_clk clk_pclk_msys = ;
static struct clksrc_clk clk_sclk_a2m = ;
static struct clk *clkset_hclk_sys_list[] = ;
static struct clksrc_sources clkset_hclk_sys = ;
static struct clksrc_clk clk_hclk_dsys = ;
static struct clksrc_clk clk_pclk_dsys = ;
static struct clksrc_clk clk_hclk_psys = ;
static struct clksrc_clk clk_pclk_psys = ;
static int s5pv210_clk_ip0_ctrl(struct clk *clk, int enable)
static int s5pv210_clk_ip1_ctrl(struct clk *clk, int enable)
static int s5pv210_clk_ip2_ctrl(struct clk *clk, int enable)
static int s5pv210_clk_ip3_ctrl(struct clk *clk, int enable)
static int s5pv210_clk_mask0_ctrl(struct clk *clk, int enable)
static int s5pv210_clk_mask1_ctrl(struct clk *clk, int enable)
static struct clk clk_sclk_hdmi27m = ;
static struct clk clk_sclk_hdmiphy = ;
static struct clk clk_sclk_usbphy0 = ;
static struct clk clk_sclk_usbphy1 = ;
static struct clk clk_pcmcdclk0 = ;
static struct clk clk_pcmcdclk1 = ;
static struct clk clk_pcmcdclk2 = ;
static struct clk *clkset_vpllsrc_list[] = ;
static struct clksrc_sources clkset_vpllsrc = ;
static struct clksrc_clk clk_vpllsrc = ;
static struct clk *clkset_sclk_vpll_list[] = ;
static struct clksrc_sources clkset_sclk_vpll = ;
static struct clksrc_clk clk_sclk_vpll = ;
static struct clk *clkset_moutdmc0src_list[] = ;
static struct clksrc_sources clkset_moutdmc0src = ;
static struct clksrc_clk clk_mout_dmc0 = ;
static struct clksrc_clk clk_sclk_dmc0 = ;
static unsigned long s5pv210_clk_imem_get_rate(struct clk *clk)
static struct clk_ops clk_hclk_imem_ops = ;
static unsigned long s5pv210_clk_fout_apll_get_rate(struct clk *clk)
static struct clk_ops clk_fout_apll_ops = ;
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static struct clk *clkset_uart_list[] = ;
static struct clksrc_sources clkset_uart = ;
static struct clk *clkset_group1_list[] = ;
static struct clksrc_sources clkset_group1 = ;
static struct clk *clkset_sclk_onenand_list[] = ;
static struct clksrc_sources clkset_sclk_onenand = ;
static struct clk *clkset_sclk_dac_list[] = ;
static struct clksrc_sources clkset_sclk_dac = ;
static struct clksrc_clk clk_sclk_dac = ;
static struct clksrc_clk clk_sclk_pixel = ;
static struct clk *clkset_sclk_hdmi_list[] = ;
static struct clksrc_sources clkset_sclk_hdmi = ;
static struct clksrc_clk clk_sclk_hdmi = ;
static struct clk *clkset_sclk_mixer_list[] = ;
static struct clksrc_sources clkset_sclk_mixer = ;
static struct clk *clkset_sclk_audio0_list[] = ;
static struct clksrc_sources clkset_sclk_audio0 = ;
static struct clksrc_clk clk_sclk_audio0 = ;
static struct clk *clkset_sclk_audio1_list[] = ;
static struct clksrc_sources clkset_sclk_audio1 = ;
static struct clksrc_clk clk_sclk_audio1 = ;
static struct clk *clkset_sclk_audio2_list[] = ;
static struct clksrc_sources clkset_sclk_audio2 = ;
static struct clksrc_clk clk_sclk_audio2 = ;
static struct clk *clkset_sclk_spdif_list[] = ;
static struct clksrc_sources clkset_sclk_spdif = ;
static int s5pv210_spdif_set_rate(struct clk *clk, unsigned long rate)
static unsigned long s5pv210_spdif_get_rate(struct clk *clk)
static struct clk_ops s5pv210_sclk_spdif_ops = ;
static struct clksrc_clk clk_sclk_spdif = ;
static struct clk *clkset_group2_list[] = ;
static struct clksrc_sources clkset_group2 = ;
static struct clksrc_clk clksrcs[] = ;
static struct clksrc_clk *sysclks[] = ;
static u32 epll_div[][6] = ;
static int s5pv210_epll_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops s5pv210_epll_ops = ;
void __init_or_cpufreq s5pv210_setup_clocks(void)
static struct clk *clks[] __initdata = ;
void __init s5pv210_register_clocks(void)
