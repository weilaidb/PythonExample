#define SLEEPMSEC		0x1000
#define ENDDEF			0x2000
#define	DEFMASK			0xFF00
#define COMMAND_ONLY		0xFE
#define DATA_ONLY		0xFF
#define MIN_BRIGHTNESS		0
#define MAX_BRIGHTNESS		24
#define power_is_on(pwr)	((pwr) <= FB_BLANK_NORMAL)
struct ld9040 ;
static const unsigned short seq_swreset[] = ;
static const unsigned short seq_user_setting[] = ;
static const unsigned short seq_elvss_on[] = ;
static const unsigned short seq_gtcon[] = ;
static const unsigned short seq_panel_condition[] = ;
static const unsigned short seq_gamma_set1[] = ;
static const unsigned short seq_gamma_ctrl[] = ;
static const unsigned short seq_gamma_start[] = ;
static const unsigned short seq_apon[] = ;
static const unsigned short seq_display_ctrl[] = ;
static const unsigned short seq_manual_pwr[] = ;
static const unsigned short seq_pwr_ctrl[] = ;
static const unsigned short seq_sleep_out[] = ;
static const unsigned short seq_sleep_in[] = ;
static const unsigned short seq_display_on[] = ;
static const unsigned short seq_display_off[] = ;
static const unsigned short seq_vci1_1st_en[] = ;
static const unsigned short seq_vl1_en[] = ;
static const unsigned short seq_vl2_en[] = ;
static const unsigned short seq_vci1_2nd_en[] = ;
static const unsigned short seq_vl3_en[] = ;
static const unsigned short seq_vreg1_amp_en[] = ;
static const unsigned short seq_vgh_amp_en[] = ;
static const unsigned short seq_vgl_amp_en[] = ;
static const unsigned short seq_vmos_amp_en[] = ;
static const unsigned short seq_vint_amp_en[] = ;
static const unsigned short seq_vbh_amp_en[] = ;
static const unsigned short seq_vbl_amp_en[] = ;
static const unsigned short seq_gam_amp_en[] = ;
static const unsigned short seq_sd_amp_en[] = ;
static const unsigned short seq_gls_en[] = ;
static const unsigned short seq_els_en[] = ;
static const unsigned short seq_el_on[] = ;
static int ld9040_spi_write_byte(struct ld9040 *lcd, int addr, int data)
static int ld9040_spi_write(struct ld9040 *lcd, unsigned char address,
unsigned char command)
static int ld9040_panel_send_sequence(struct ld9040 *lcd,
const unsigned short *wbuf)
static int _ld9040_gamma_ctl(struct ld9040 *lcd, const unsigned int *gamma)
static int ld9040_gamma_ctl(struct ld9040 *lcd, int gamma)
static int ld9040_ldi_init(struct ld9040 *lcd)
static int ld9040_ldi_enable(struct ld9040 *lcd)
static int ld9040_ldi_disable(struct ld9040 *lcd)
static int ld9040_power_on(struct ld9040 *lcd)
static int ld9040_power_off(struct ld9040 *lcd)
static int ld9040_power(struct ld9040 *lcd, int power)
static int ld9040_set_power(struct lcd_device *ld, int power)
static int ld9040_get_power(struct lcd_device *ld)
static int ld9040_get_brightness(struct backlight_device *bd)
static int ld9040_set_brightness(struct backlight_device *bd)
static struct lcd_ops ld9040_lcd_ops = ;
static const struct backlight_ops ld9040_backlight_ops  = ;
static int ld9040_probe(struct spi_device *spi)
static int __devexit ld9040_remove(struct spi_device *spi)
#if defined(CONFIG_PM)
static int ld9040_suspend(struct spi_device *spi, pm_message_t mesg)
static int ld9040_resume(struct spi_device *spi)
#define ld9040_suspend		NULL
#define ld9040_resume		NULL
static void ld9040_shutdown(struct spi_device *spi)
static struct spi_driver ld9040_driver = ;
static int __init ld9040_init(void)
static void __exit ld9040_exit(void)
module_init(ld9040_init);
module_exit(ld9040_exit);
MODULE_AUTHOR("Donghwa Lee <dh09.lee@samsung.com>");
MODULE_DESCRIPTION("ld9040 LCD Driver");
MODULE_LICENSE("GPL");
