static int osk_panel_init(struct lcd_panel *panel, struct omapfb_device *fbdev)
static void osk_panel_cleanup(struct lcd_panel *panel)
static int osk_panel_enable(struct lcd_panel *panel)
static void osk_panel_disable(struct lcd_panel *panel)
static unsigned long osk_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel osk_panel = ;
static int osk_panel_probe(struct platform_device *pdev)
static int osk_panel_remove(struct platform_device *pdev)
static int osk_panel_suspend(struct platform_device *pdev, pm_message_t mesg)
static int osk_panel_resume(struct platform_device *pdev)
struct platform_driver osk_panel_driver = ;
static int __init osk_panel_drv_init(void)
static void __exit osk_panel_drv_cleanup(void)
module_init(osk_panel_drv_init);
module_exit(osk_panel_drv_cleanup);
