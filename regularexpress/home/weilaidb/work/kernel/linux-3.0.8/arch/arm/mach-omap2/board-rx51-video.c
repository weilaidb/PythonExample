#define RX51_LCD_RESET_GPIO	90
#if defined(CONFIG_FB_OMAP2) || defined(CONFIG_FB_OMAP2_MODULE)
static int rx51_lcd_enable(struct omap_dss_device *dssdev)
static void rx51_lcd_disable(struct omap_dss_device *dssdev)
static struct omap_dss_device rx51_lcd_device = ;
static struct omap_dss_device  rx51_tv_device = ;
static struct omap_dss_device *rx51_dss_devices[] = ;
static struct omap_dss_board_info rx51_dss_board_info = ;
static int __init rx51_video_init(void)
subsys_initcall(rx51_video_init);
void __init rx51_video_mem_init(void)
void __init rx51_video_mem_init(void)
