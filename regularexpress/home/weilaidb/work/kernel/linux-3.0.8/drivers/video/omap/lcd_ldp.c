#define LCD_PANEL_BACKLIGHT_GPIO	(15 + OMAP_MAX_GPIO_LINES)
#define LCD_PANEL_ENABLE_GPIO		(7 + OMAP_MAX_GPIO_LINES)
#define LCD_PANEL_RESET_GPIO		55
#define LCD_PANEL_QVGA_GPIO		56
#define LCD_XRES		480
#define LCD_YRES		640
#define LCD_PIXCLOCK_MAX	41700
#define LCD_XRES		240
#define LCD_YRES		320
#define LCD_PIXCLOCK_MAX	185186
#define PM_RECEIVER             TWL4030_MODULE_PM_RECEIVER
#define ENABLE_VAUX2_DEDICATED  0x09
#define ENABLE_VAUX2_DEV_GRP    0x20
#define ENABLE_VAUX3_DEDICATED	0x03
#define ENABLE_VAUX3_DEV_GRP	0x20
#define ENABLE_VPLL2_DEDICATED          0x05
#define ENABLE_VPLL2_DEV_GRP            0xE0
#define TWL4030_VPLL2_DEV_GRP           0x33
#define TWL4030_VPLL2_DEDICATED         0x36
#define t2_out(c, r, v) twl_i2c_write_u8(c, r, v)
static int ldp_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void ldp_panel_cleanup(struct lcd_panel *panel)
static int ldp_panel_enable(struct lcd_panel *panel)
static void ldp_panel_disable(struct lcd_panel *panel)
static unsigned long ldp_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel ldp_panel = ;
static int ldp_panel_probe(struct platform_device *pdev)
static int ldp_panel_remove(struct platform_device *pdev)
static int ldp_panel_suspend(struct platform_device *pdev, pm_message_t mesg)
static int ldp_panel_resume(struct platform_device *pdev)
struct platform_driver ldp_panel_driver = ;
static int __init ldp_panel_drv_init(void)
static void __exit ldp_panel_drv_exit(void)
module_init(ldp_panel_drv_init);
module_exit(ldp_panel_drv_exit);
