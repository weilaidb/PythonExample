#define LCD_PANEL_RESET_GPIO_PROD	96
#define LCD_PANEL_RESET_GPIO_PILOT	55
#define LCD_PANEL_QVGA_GPIO		56
static struct gpio zoom_lcd_gpios[] __initdata = ;
static void __init zoom_lcd_panel_init(void)
static int zoom_panel_enable_lcd(struct omap_dss_device *dssdev)
static void zoom_panel_disable_lcd(struct omap_dss_device *dssdev)
#define TWL_INTBR_PMBR1	0xD
#define TWL_INTBR_GPBR1	0xC
#define TWL_LED_PWMON	0x0
#define TWL_LED_PWMOFF	0x1
static int zoom_set_bl_intensity(struct omap_dss_device *dssdev, int level)
static struct omap_dss_device zoom_lcd_device = ;
static struct omap_dss_device *zoom_dss_devices[] = ;
static struct omap_dss_board_info zoom_dss_data = ;
static struct omap2_mcspi_device_config dss_lcd_mcspi_config = ;
static struct spi_board_info nec_8048_spi_board_info[] __initdata = ;
void __init zoom_display_init(void)
