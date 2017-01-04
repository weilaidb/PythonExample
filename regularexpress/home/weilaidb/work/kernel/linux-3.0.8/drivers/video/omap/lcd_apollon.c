static int apollon_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void apollon_panel_cleanup(struct lcd_panel *panel)
static int apollon_panel_enable(struct lcd_panel *panel)
static void apollon_panel_disable(struct lcd_panel *panel)
static unsigned long apollon_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel apollon_panel = ;
static int apollon_panel_probe(struct platform_device *pdev)
static int apollon_panel_remove(struct platform_device *pdev)
static int apollon_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int apollon_panel_resume(struct platform_device *pdev)
struct platform_driver apollon_panel_driver = ;
static int __init apollon_panel_drv_init(void)
static void __exit apollon_panel_drv_exit(void)
module_init(apollon_panel_drv_init);
module_exit(apollon_panel_drv_exit);
