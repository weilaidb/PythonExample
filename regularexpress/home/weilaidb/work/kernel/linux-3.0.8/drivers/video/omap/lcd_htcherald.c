static int htcherald_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void htcherald_panel_cleanup(struct lcd_panel *panel)
static int htcherald_panel_enable(struct lcd_panel *panel)
static void htcherald_panel_disable(struct lcd_panel *panel)
static unsigned long htcherald_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel htcherald_panel_1 = ;
static int htcherald_panel_probe(struct platform_device *pdev)
static int htcherald_panel_remove(struct platform_device *pdev)
static int htcherald_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int htcherald_panel_resume(struct platform_device *pdev)
struct platform_driver htcherald_panel_driver = ;
static int __init htcherald_panel_drv_init(void)
static void __exit htcherald_panel_drv_cleanup(void)
module_init(htcherald_panel_drv_init);
module_exit(htcherald_panel_drv_cleanup);
