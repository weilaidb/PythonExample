static int lcdc_sharp_panel_off(struct platform_device *pdev);
static int spi_cs;
static int spi_sclk;
static int spi_mosi;
static int spi_miso;
static unsigned char bit_shift[8] = ;
struct sharp_state_type ;
struct sharp_spi_data ;
static struct sharp_spi_data init_sequence[] = ;
static struct sharp_state_type sharp_state = ;
static struct msm_panel_common_pdata *lcdc_sharp_pdata;
static void sharp_spi_write_byte(u8 val)
static void serigo(u8 reg, u8 data)
static void sharp_spi_init(void)
static void sharp_disp_powerup(void)
static void sharp_disp_on(void)
static int lcdc_sharp_panel_on(struct platform_device *pdev)
static int lcdc_sharp_panel_off(struct platform_device *pdev)
static int __init sharp_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data sharp_panel_data = ;
static struct platform_device this_device = ;
static int __init lcdc_sharp_panel_init(void)
module_init(lcdc_sharp_panel_init);
