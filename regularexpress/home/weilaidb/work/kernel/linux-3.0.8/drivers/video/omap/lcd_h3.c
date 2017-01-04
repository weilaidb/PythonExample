#define MODULE_NAME	"omapfb-lcd_h3"
static int h3_panel_init(struct lcd_panel *panel, struct omapfb_device *fbdev)
static void h3_panel_cleanup(struct lcd_panel *panel)
static int h3_panel_enable(struct lcd_panel *panel)
static void h3_panel_disable(struct lcd_panel *panel)
static unsigned long h3_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel h3_panel = ;
static int h3_panel_probe(struct platform_device *pdev)
static int h3_panel_remove(struct platform_device *pdev)
static int h3_panel_suspend(struct platform_device *pdev, pm_message_t mesg)
static int h3_panel_resume(struct platform_device *pdev)
struct platform_driver h3_panel_driver = ;
static int __init h3_panel_drv_init(void)
static void __exit h3_panel_drv_cleanup(void)
module_init(h3_panel_drv_init);
module_exit(h3_panel_drv_cleanup);
