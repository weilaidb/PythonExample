#define POWER_IS_ON(pwr)	((pwr) <= FB_BLANK_NORMAL)
#define RESCTL_ADRS     0x00
#define PHACTRL_ADRS    0x01
#define DUTYCTRL_ADRS   0x02
#define POWERREG0_ADRS  0x03
#define POWERREG1_ADRS  0x04
#define GPOR3_ADRS      0x05
#define PICTRL_ADRS     0x06
#define POLCTRL_ADRS    0x07
#define RESCTL_QVGA     0x01
#define RESCTL_VGA      0x00
#define POWER1_VW_ON    0x01
#define POWER1_GVSS_ON  0x02
#define POWER1_VDD_ON   0x04
#define POWER1_VW_OFF   0x00
#define POWER1_GVSS_OFF 0x00
#define POWER1_VDD_OFF  0x00
#define POWER0_COM_DCLK 0x01
#define POWER0_COM_DOUT 0x02
#define POWER0_DAC_ON   0x04
#define POWER0_COM_ON   0x08
#define POWER0_VCC5_ON  0x10
#define POWER0_DAC_OFF  0x00
#define POWER0_COM_OFF  0x00
#define POWER0_VCC5_OFF 0x00
#define PICTRL_INIT_STATE      0x01
#define PICTRL_INIOFF          0x02
#define PICTRL_POWER_DOWN      0x04
#define PICTRL_COM_SIGNAL_OFF  0x08
#define PICTRL_DAC_SIGNAL_OFF  0x10
#define POLCTRL_SYNC_POL_FALL  0x01
#define POLCTRL_EN_POL_FALL    0x02
#define POLCTRL_DATA_POL_FALL  0x04
#define POLCTRL_SYNC_ACT_H     0x08
#define POLCTRL_EN_ACT_L       0x10
#define POLCTRL_SYNC_POL_RISE  0x00
#define POLCTRL_EN_POL_RISE    0x00
#define POLCTRL_DATA_POL_RISE  0x00
#define POLCTRL_SYNC_ACT_L     0x00
#define POLCTRL_EN_ACT_H       0x00
#define PHACTRL_PHASE_MANUAL   0x01
#define DEFAULT_PHAD_QVGA     (9)
#define DEFAULT_COMADJ        (125)
struct corgi_lcd ;
static int corgi_ssp_lcdtg_send(struct corgi_lcd *lcd, int reg, uint8_t val);
static struct corgi_lcd *the_corgi_lcd;
static unsigned long corgibl_flags;
#define CORGIBL_SUSPENDED     0x01
#define CORGIBL_BATTLOW       0x02
static void lcdtg_ssp_i2c_send(struct corgi_lcd *lcd, uint8_t data)
static void lcdtg_i2c_send_bit(struct corgi_lcd *lcd, uint8_t data)
static void lcdtg_i2c_send_start(struct corgi_lcd *lcd, uint8_t base)
static void lcdtg_i2c_send_stop(struct corgi_lcd *lcd, uint8_t base)
static void lcdtg_i2c_send_byte(struct corgi_lcd *lcd,
uint8_t base, uint8_t data)
static void lcdtg_i2c_wait_ack(struct corgi_lcd *lcd, uint8_t base)
static void lcdtg_set_common_voltage(struct corgi_lcd *lcd,
uint8_t base_data, uint8_t data)
static int corgi_ssp_lcdtg_send(struct corgi_lcd *lcd, int adrs, uint8_t data)
static void lcdtg_set_phadadj(struct corgi_lcd *lcd, int mode)
static void corgi_lcd_power_on(struct corgi_lcd *lcd)
static void corgi_lcd_power_off(struct corgi_lcd *lcd)
static int corgi_lcd_set_mode(struct lcd_device *ld, struct fb_videomode *m)
static int corgi_lcd_set_power(struct lcd_device *ld, int power)
static int corgi_lcd_get_power(struct lcd_device *ld)
static struct lcd_ops corgi_lcd_ops = ;
static int corgi_bl_get_intensity(struct backlight_device *bd)
static int corgi_bl_set_intensity(struct corgi_lcd *lcd, int intensity)
static int corgi_bl_update_status(struct backlight_device *bd)
void corgi_lcd_limit_intensity(int limit)
EXPORT_SYMBOL(corgi_lcd_limit_intensity);
static const struct backlight_ops corgi_bl_ops = ;
static int corgi_lcd_suspend(struct spi_device *spi, pm_message_t state)
static int corgi_lcd_resume(struct spi_device *spi)
#define corgi_lcd_suspend	NULL
#define corgi_lcd_resume	NULL
static int setup_gpio_backlight(struct corgi_lcd *lcd,
struct corgi_lcd_platform_data *pdata)
static int __devinit corgi_lcd_probe(struct spi_device *spi)
static int __devexit corgi_lcd_remove(struct spi_device *spi)
static struct spi_driver corgi_lcd_driver = ;
static int __init corgi_lcd_init(void)
module_init(corgi_lcd_init);
static void __exit corgi_lcd_exit(void)
module_exit(corgi_lcd_exit);
MODULE_DESCRIPTION("LCD and backlight driver for SHARP C7x0/Cxx00");
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:corgi-lcd");
