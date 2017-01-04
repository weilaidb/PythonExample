static int palmz71_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void palmz71_panel_cleanup(struct lcd_panel *panel)
static int palmz71_panel_enable(struct lcd_panel *panel)
static void palmz71_panel_disable(struct lcd_panel *panel)
static unsigned long palmz71_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel palmz71_panel = ;
static int palmz71_panel_probe(struct platform_device *pdev)
static int palmz71_panel_remove(struct platform_device *pdev)
static int palmz71_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int palmz71_panel_resume(struct platform_device *pdev)
struct platform_driver palmz71_panel_driver = ;
static int __init palmz71_panel_drv_init(void)
static void __exit palmz71_panel_drv_cleanup(void)
module_init(palmz71_panel_drv_init);
module_exit(palmz71_panel_drv_cleanup);
