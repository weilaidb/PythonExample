#define SDP2430_LCD_PANEL_BACKLIGHT_GPIO	91
#define SDP2430_LCD_PANEL_ENABLE_GPIO		154
#define SDP3430_LCD_PANEL_BACKLIGHT_GPIO	24
#define SDP3430_LCD_PANEL_ENABLE_GPIO		28
static unsigned backlight_gpio;
static unsigned enable_gpio;
#define LCD_PIXCLOCK_MAX		5400
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
static int sdp2430_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void sdp2430_panel_cleanup(struct lcd_panel *panel)
static int sdp2430_panel_enable(struct lcd_panel *panel)
static void sdp2430_panel_disable(struct lcd_panel *panel)
static unsigned long sdp2430_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel sdp2430_panel = ;
static int sdp2430_panel_probe(struct platform_device *pdev)
static int sdp2430_panel_remove(struct platform_device *pdev)
static int sdp2430_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int sdp2430_panel_resume(struct platform_device *pdev)
struct platform_driver sdp2430_panel_driver = ;
static int __init sdp2430_panel_drv_init(void)
static void __exit sdp2430_panel_drv_exit(void)
module_init(sdp2430_panel_drv_init);
module_exit(sdp2430_panel_drv_exit);
