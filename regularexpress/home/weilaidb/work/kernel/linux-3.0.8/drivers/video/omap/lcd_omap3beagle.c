#define LCD_PANEL_ENABLE_GPIO       170
static int omap3beagle_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void omap3beagle_panel_cleanup(struct lcd_panel *panel)
static int omap3beagle_panel_enable(struct lcd_panel *panel)
static void omap3beagle_panel_disable(struct lcd_panel *panel)
static unsigned long omap3beagle_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel omap3beagle_panel = ;
static int omap3beagle_panel_probe(struct platform_device *pdev)
static int omap3beagle_panel_remove(struct platform_device *pdev)
static int omap3beagle_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int omap3beagle_panel_resume(struct platform_device *pdev)
struct platform_driver omap3beagle_panel_driver = ;
static int __init omap3beagle_panel_drv_init(void)
static void __exit omap3beagle_panel_drv_exit(void)
module_init(omap3beagle_panel_drv_init);
module_exit(omap3beagle_panel_drv_exit);
