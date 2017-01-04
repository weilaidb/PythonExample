static int mddi_ext_lcd_on(struct platform_device *pdev);
static int mddi_ext_lcd_off(struct platform_device *pdev);
static int mddi_ext_lcd_on(struct platform_device *pdev)
static int mddi_ext_lcd_off(struct platform_device *pdev)
static int __init mddi_ext_lcd_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data mddi_ext_lcd_panel_data = ;
static struct platform_device this_device = ;
static int __init mddi_ext_lcd_init(void)
module_init(mddi_ext_lcd_init);
