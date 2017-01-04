static int palmte_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void palmte_panel_cleanup(struct lcd_panel *panel)
static int palmte_panel_enable(struct lcd_panel *panel)
static void palmte_panel_disable(struct lcd_panel *panel)
static unsigned long palmte_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel palmte_panel = ;
static int palmte_panel_probe(struct platform_device *pdev)
static int palmte_panel_remove(struct platform_device *pdev)
static int palmte_panel_suspend(struct platform_device *pdev, pm_message_t mesg)
static int palmte_panel_resume(struct platform_device *pdev)
struct platform_driver palmte_panel_driver = ;
static int __init palmte_panel_drv_init(void)
static void __exit palmte_panel_drv_cleanup(void)
module_init(palmte_panel_drv_init);
module_exit(palmte_panel_drv_cleanup);
