static int lcdc_probe(struct platform_device *pdev);
static int lcdc_remove(struct platform_device *pdev);
static int lcdc_off(struct platform_device *pdev);
static int lcdc_on(struct platform_device *pdev);
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
static struct clk *mdp_lcdc_pclk_clk;
static struct clk *mdp_lcdc_pad_pclk_clk;
int mdp_lcdc_pclk_clk_rate;
int mdp_lcdc_pad_pclk_clk_rate;
static struct platform_driver lcdc_driver = ;
static struct lcdc_platform_data *lcdc_pdata;
static int lcdc_off(struct platform_device *pdev)
static int lcdc_on(struct platform_device *pdev)
static int lcdc_probe(struct platform_device *pdev)
static int lcdc_remove(struct platform_device *pdev)
static int lcdc_register_driver(void)
static int __init lcdc_driver_init(void)
module_init(lcdc_driver_init);
