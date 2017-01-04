static int prism_lcd_on(struct platform_device *pdev);
static int prism_lcd_off(struct platform_device *pdev);
static int prism_lcd_on(struct platform_device *pdev)
static int prism_lcd_off(struct platform_device *pdev)
static int __init prism_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data prism_panel_data = ;
static struct platform_device this_device = ;
static int __init prism_init(void)
module_init(prism_init);
