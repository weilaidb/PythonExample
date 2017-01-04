static struct clk clk_sclk_hdmi27m = ;
static struct clk clk_sclk_hdmiphy = ;
static struct clk clk_sclk_usbphy0 = ;
static struct clk clk_sclk_usbphy1 = ;
static int exynos4_clksrc_mask_top_ctrl(struct clk *clk, int enable)
static int exynos4_clksrc_mask_cam_ctrl(struct clk *clk, int enable)
static int exynos4_clksrc_mask_lcd0_ctrl(struct clk *clk, int enable)
static int exynos4_clksrc_mask_lcd1_ctrl(struct clk *clk, int enable)
static int exynos4_clksrc_mask_fsys_ctrl(struct clk *clk, int enable)
static int exynos4_clksrc_mask_peril0_ctrl(struct clk *clk, int enable)
static int exynos4_clksrc_mask_peril1_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_mfc_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_cam_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_tv_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_image_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_lcd0_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_lcd1_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_fsys_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_peril_ctrl(struct clk *clk, int enable)
static int exynos4_clk_ip_perir_ctrl(struct clk *clk, int enable)
static struct clksrc_clk clk_mout_apll = ;
static struct clksrc_clk clk_sclk_apll = ;
static struct clksrc_clk clk_mout_epll = ;
static struct clksrc_clk clk_mout_mpll = ;
static struct clk *clkset_moutcore_list[] = ;
static struct clksrc_sources clkset_moutcore = ;
static struct clksrc_clk clk_moutcore = ;
static struct clksrc_clk clk_coreclk = ;
static struct clksrc_clk clk_armclk = ;
static struct clksrc_clk clk_aclk_corem0 = ;
static struct clksrc_clk clk_aclk_cores = ;
static struct clksrc_clk clk_aclk_corem1 = ;
static struct clksrc_clk clk_periphclk = ;
static struct clk *clkset_corebus_list[] = ;
static struct clksrc_sources clkset_mout_corebus = ;
static struct clksrc_clk clk_mout_corebus = ;
static struct clksrc_clk clk_sclk_dmc = ;
static struct clksrc_clk clk_aclk_cored = ;
static struct clksrc_clk clk_aclk_corep = ;
static struct clksrc_clk clk_aclk_acp = ;
static struct clksrc_clk clk_pclk_acp = ;
static struct clk *clkset_aclk_top_list[] = ;
static struct clksrc_sources clkset_aclk = ;
static struct clksrc_clk clk_aclk_200 = ;
static struct clksrc_clk clk_aclk_100 = ;
static struct clksrc_clk clk_aclk_160 = ;
static struct clksrc_clk clk_aclk_133 = ;
static struct clk *clkset_vpllsrc_list[] = ;
static struct clksrc_sources clkset_vpllsrc = ;
static struct clksrc_clk clk_vpllsrc = ;
static struct clk *clkset_sclk_vpll_list[] = ;
static struct clksrc_sources clkset_sclk_vpll = ;
static struct clksrc_clk clk_sclk_vpll = ;
static struct clk init_clocks_off[] = ;
static struct clk init_clocks[] = ;
static struct clk *clkset_group_list[] = ;
static struct clksrc_sources clkset_group = ;
static struct clk *clkset_mout_g2d0_list[] = ;
static struct clksrc_sources clkset_mout_g2d0 = ;
static struct clksrc_clk clk_mout_g2d0 = ;
static struct clk *clkset_mout_g2d1_list[] = ;
static struct clksrc_sources clkset_mout_g2d1 = ;
static struct clksrc_clk clk_mout_g2d1 = ;
static struct clk *clkset_mout_g2d_list[] = ;
static struct clksrc_sources clkset_mout_g2d = ;
static struct clksrc_clk clk_dout_mmc0 = ;
static struct clksrc_clk clk_dout_mmc1 = ;
static struct clksrc_clk clk_dout_mmc2 = ;
static struct clksrc_clk clk_dout_mmc3 = ;
static struct clksrc_clk clk_dout_mmc4 = ;
static struct clksrc_clk clksrcs[] = ;
static struct clksrc_clk *sysclks[] = ;
static int xtal_rate;
static unsigned long exynos4_fout_apll_get_rate(struct clk *clk)
static struct clk_ops exynos4_fout_apll_ops = ;
void __init_or_cpufreq exynos4_setup_clocks(void)
static struct clk *clks[] __initdata = ;
void __init exynos4_register_clocks(void)
