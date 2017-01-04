static int lcdc_panel_on(struct platform_device *pdev)
static int lcdc_panel_off(struct platform_device *pdev)
static int __init lcdc_panel_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data lcdc_panel_data = ;
static int lcdc_dev_id;
int lcdc_device_register(struct msm_panel_info *pinfo)
static int __init lcdc_panel_init(void)
module_init(lcdc_panel_init);
