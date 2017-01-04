#define LCD_XRES		800
#define LCD_YRES		480
#define LCD_PIXEL_CLOCK		23800
struct nec_8048_data ;
static const struct  nec_8048_init_seq[] = ;
static struct omap_video_timings nec_8048_panel_timings = ;
static int nec_8048_bl_update_status(struct backlight_device *bl)
static int nec_8048_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops nec_8048_bl_ops = ;
static int nec_8048_panel_probe(struct omap_dss_device *dssdev)
static void nec_8048_panel_remove(struct omap_dss_device *dssdev)
static int nec_8048_panel_enable(struct omap_dss_device *dssdev)
static void nec_8048_panel_disable(struct omap_dss_device *dssdev)
static int nec_8048_panel_suspend(struct omap_dss_device *dssdev)
static int nec_8048_panel_resume(struct omap_dss_device *dssdev)
static int nec_8048_recommended_bpp(struct omap_dss_device *dssdev)
static struct omap_dss_driver nec_8048_driver = ;
static int nec_8048_spi_send(struct spi_device *spi, unsigned char reg_addr,
unsigned char reg_data)
static int init_nec_8048_wvga_lcd(struct spi_device *spi)
static int nec_8048_spi_probe(struct spi_device *spi)
static int nec_8048_spi_remove(struct spi_device *spi)
static int nec_8048_spi_suspend(struct spi_device *spi, pm_message_t mesg)
static int nec_8048_spi_resume(struct spi_device *spi)
static struct spi_driver nec_8048_spi_driver = ;
static int __init nec_8048_lcd_init(void)
static void __exit nec_8048_lcd_exit(void)
module_init(nec_8048_lcd_init);
module_exit(nec_8048_lcd_exit);
MODULE_AUTHOR("Erik Gilling <konkers@android.com>");
MODULE_DESCRIPTION("NEC-nl8048hl11-01b Driver");
MODULE_LICENSE("GPL");
