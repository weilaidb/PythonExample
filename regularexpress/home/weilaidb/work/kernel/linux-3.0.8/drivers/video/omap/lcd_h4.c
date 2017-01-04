static int h4_panel_init(struct lcd_panel *panel, struct omapfb_device *fbdev)
static void h4_panel_cleanup(struct lcd_panel *panel)
static int h4_panel_enable(struct lcd_panel *panel)
static void h4_panel_disable(struct lcd_panel *panel)
static unsigned long h4_panel_get_caps(struct lcd_panel *panel)
static struct lcd_panel h4_panel = ;
static int h4_panel_probe(struct platform_device *pdev)
static int h4_panel_remove(struct platform_device *pdev)
static int h4_panel_suspend(struct platform_device *pdev, pm_message_t mesg)
static int h4_panel_resume(struct platform_device *pdev)
static struct platform_driver h4_panel_driver = ;
static int __init h4_panel_drv_init(void)
static void __exit h4_panel_drv_cleanup(void)
module_init(h4_panel_drv_init);
module_exit(h4_panel_drv_cleanup);
