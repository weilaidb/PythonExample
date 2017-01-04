static int spi_cs;
static int spi_sclk;
static int spi_mosi;
static int spi_miso;
struct toshiba_state_type;
static struct toshiba_state_type toshiba_state = ;
static struct msm_panel_common_pdata *lcdc_toshiba_pdata;
static void toshiba_spi_write_byte(char dc, uint8 data)
static void toshiba_spi_write(char cmd, uint32 data, int num)
void toshiba_spi_read_bytes(char cmd, uint32 *data, int num)
static void spi_pin_assign(void)
static void toshiba_disp_powerup(void)
static void toshiba_disp_on(void)
static int lcdc_toshiba_panel_on(struct platform_device *pdev)
static int lcdc_toshiba_panel_off(struct platform_device *pdev)
static void lcdc_toshiba_set_backlight(struct msm_fb_data_type *mfd)
static int __init toshiba_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data toshiba_panel_data = ;
static struct platform_device this_device = ;
static int __init lcdc_toshiba_panel_init(void)
device_initcall(lcdc_toshiba_panel_init);
