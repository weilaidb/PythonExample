static struct clk s5p_clk_otgphy = ;
static struct clk *clk_src_mout_href_list[] = ;
static struct clksrc_sources clk_src_mout_href = ;
static struct clksrc_clk clk_mout_href = ;
static struct clk *clk_src_mout_48m_list[] = ;
static struct clksrc_sources clk_src_mout_48m = ;
static struct clksrc_clk clk_mout_48m = ;
static struct clksrc_clk clk_mout_mpll = ;
static struct clksrc_clk clk_mout_apll = ;
static struct clksrc_clk clk_mout_epll = ;
static struct clk *clk_src_mout_hpll_list[] = ;
static struct clksrc_sources clk_src_mout_hpll = ;
static struct clksrc_clk clk_mout_hpll = ;
static struct clksrc_clk clk_div_apll = ;
static struct clksrc_clk clk_div_arm = ;
static struct clksrc_clk clk_div_d0_bus = ;
static struct clksrc_clk clk_div_pclkd0 = ;
static struct clksrc_clk clk_div_secss = ;
static struct clksrc_clk clk_div_apll2 = ;
static struct clk *clk_src_mout_am_list[] = ;
struct clksrc_sources clk_src_mout_am = ;
static struct clksrc_clk clk_mout_am = ;
static struct clksrc_clk clk_div_d1_bus = ;
static struct clksrc_clk clk_div_mpll2 = ;
static struct clksrc_clk clk_div_mpll = ;
static struct clk *clk_src_mout_onenand_list[] = ;
struct clksrc_sources clk_src_mout_onenand = ;
static struct clksrc_clk clk_mout_onenand = ;
static struct clksrc_clk clk_div_onenand = ;
static struct clksrc_clk clk_div_pclkd1 = ;
static struct clksrc_clk clk_div_cam = ;
static struct clksrc_clk clk_div_hdmi = ;
static u32 epll_div[][4] = ;
static int s5pc100_epll_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops s5pc100_epll_ops = ;
static int s5pc100_d0_0_ctrl(struct clk *clk, int enable)
static int s5pc100_d0_1_ctrl(struct clk *clk, int enable)
static int s5pc100_d0_2_ctrl(struct clk *clk, int enable)
static int s5pc100_d1_0_ctrl(struct clk *clk, int enable)
static int s5pc100_d1_1_ctrl(struct clk *clk, int enable)
static int s5pc100_d1_2_ctrl(struct clk *clk, int enable)
static int s5pc100_d1_3_ctrl(struct clk *clk, int enable)
static int s5pc100_d1_4_ctrl(struct clk *clk, int enable)
static int s5pc100_d1_5_ctrl(struct clk *clk, int enable)
static int s5pc100_sclk0_ctrl(struct clk *clk, int enable)
static int s5pc100_sclk1_ctrl(struct clk *clk, int enable)
static struct clk init_clocks_off[] = ;
static struct clk clk_vclk54m = ;
static struct clk clk_i2scdclk0 = ;
static struct clk clk_i2scdclk1 = ;
static struct clk clk_i2scdclk2 = ;
static struct clk clk_pcmcdclk0 = ;
static struct clk clk_pcmcdclk1 = ;
static struct clk *clk_src_group1_list[] = ;
struct clksrc_sources clk_src_group1 = ;
static struct clk *clk_src_group2_list[] = ;
struct clksrc_sources clk_src_group2 = ;
static struct clk *clk_src_group3_list[] = ;
struct clksrc_sources clk_src_group3 = ;
static struct clksrc_clk clk_sclk_audio0 = ;
static struct clk *clk_src_group4_list[] = ;
struct clksrc_sources clk_src_group4 = ;
static struct clksrc_clk clk_sclk_audio1 = ;
static struct clk *clk_src_group5_list[] = ;
struct clksrc_sources clk_src_group5 = ;
static struct clksrc_clk clk_sclk_audio2 = ;
static struct clk *clk_src_group6_list[] = ;
struct clksrc_sources clk_src_group6 = ;
static struct clk *clk_src_group7_list[] = ;
struct clksrc_sources clk_src_group7 = ;
static struct clk *clk_src_mmc0_list[] = ;
struct clksrc_sources clk_src_mmc0 = ;
static struct clk *clk_src_mmc12_list[] = ;
struct clksrc_sources clk_src_mmc12 = ;
static struct clk *clk_src_irda_usb_list[] = ;
struct clksrc_sources clk_src_irda_usb = ;
static struct clk *clk_src_pwi_list[] = ;
struct clksrc_sources clk_src_pwi = ;
static struct clk *clk_sclk_spdif_list[] = ;
struct clksrc_sources clk_src_sclk_spdif = ;
static int s5pc100_spdif_set_rate(struct clk *clk, unsigned long rate)
static unsigned long s5pc100_spdif_get_rate(struct clk *clk)
static struct clk_ops s5pc100_sclk_spdif_ops = ;
static struct clksrc_clk clk_sclk_spdif = ;
static struct clksrc_clk clksrcs[] = ;
static struct clksrc_clk *sysclks[] = ;
void __init_or_cpufreq s5pc100_setup_clocks(void)
static struct clk init_clocks[] = ;
static struct clk *clks[] __initdata = ;
void __init s5pc100_register_clocks(void)
