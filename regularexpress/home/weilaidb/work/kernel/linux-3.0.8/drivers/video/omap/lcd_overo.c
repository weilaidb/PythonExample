#define LCD_ENABLE       144
static int overo_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void overo_panel_cleanup(struct lcd_panel *panel)
static int overo_panel_enable(struct lcd_panel *panel)
static void overo_panel_disable(struct lcd_panel *panel)
static unsigned long overo_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel overo_panel = ;
static int overo_panel_probe(struct platform_device *pdev)
static int overo_panel_remove(struct platform_device *pdev)
static struct platform_driver overo_panel_driver = ;
static int __init overo_panel_drv_init(void)
static void __exit overo_panel_drv_exit(void)
module_init(overo_panel_drv_init);
module_exit(overo_panel_drv_exit);
