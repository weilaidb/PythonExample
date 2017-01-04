#define AMS_DELTA_DEFAULT_CONTRAST	112
#define AMS_DELTA_MAX_CONTRAST		0x00FF
#define AMS_DELTA_LCD_POWER		0x0100
static int ams_delta_lcd;
static int ams_delta_lcd_set_power(struct lcd_device *dev, int power)
static int ams_delta_lcd_set_contrast(struct lcd_device *dev, int value)
static int ams_delta_lcd_get_power(struct lcd_device *dev)
static int ams_delta_lcd_get_contrast(struct lcd_device *dev)
static struct lcd_ops ams_delta_lcd_ops = ;
static int ams_delta_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void ams_delta_panel_cleanup(struct lcd_panel *panel)
static int ams_delta_panel_enable(struct lcd_panel *panel)
static void ams_delta_panel_disable(struct lcd_panel *panel)
static unsigned long ams_delta_panel_get_caps(struct lcd_panel *panel)
static struct lcd_panel ams_delta_panel = ;
static int ams_delta_panel_probe(struct platform_device *pdev)
static int ams_delta_panel_remove(struct platform_device *pdev)
static int ams_delta_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int ams_delta_panel_resume(struct platform_device *pdev)
struct platform_driver ams_delta_panel_driver = ;
static int __init ams_delta_panel_drv_init(void)
static void __exit ams_delta_panel_drv_cleanup(void)
module_init(ams_delta_panel_drv_init);
module_exit(ams_delta_panel_drv_cleanup);
