static int innovator1510_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void innovator1510_panel_cleanup(struct lcd_panel *panel)
static int innovator1510_panel_enable(struct lcd_panel *panel)
static void innovator1510_panel_disable(struct lcd_panel *panel)
static unsigned long innovator1510_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel innovator1510_panel = ;
static int innovator1510_panel_probe(struct platform_device *pdev)
static int innovator1510_panel_remove(struct platform_device *pdev)
static int innovator1510_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int innovator1510_panel_resume(struct platform_device *pdev)
struct platform_driver innovator1510_panel_driver = ;
static int __init innovator1510_panel_drv_init(void)
static void __exit innovator1510_panel_drv_cleanup(void)
module_init(innovator1510_panel_drv_init);
module_exit(innovator1510_panel_drv_cleanup);
