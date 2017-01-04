#define SLEEPMSEC		0x1000
#define ENDDEF			0x2000
#define	DEFMASK			0xFF00
#define COMMAND_ONLY		0xFE
#define DATA_ONLY		0xFF
#define MIN_BRIGHTNESS		0
#define MAX_BRIGHTNESS		10
#define POWER_IS_ON(pwr)	((pwr) <= FB_BLANK_NORMAL)
struct s6e63m0 ;
static const unsigned short SEQ_PANEL_CONDITION_SET[] = ;
static const unsigned short SEQ_DISPLAY_CONDITION_SET[] = ;
static const unsigned short SEQ_GAMMA_SETTING[] = ;
static const unsigned short SEQ_ETC_CONDITION_SET[] = ;
static const unsigned short SEQ_ACL_ON[] = ;
static const unsigned short SEQ_ACL_OFF[] = ;
static const unsigned short SEQ_ELVSS_ON[] = ;
static const unsigned short SEQ_ELVSS_OFF[] = ;
static const unsigned short SEQ_STAND_BY_OFF[] = ;
static const unsigned short SEQ_STAND_BY_ON[] = ;
static const unsigned short SEQ_DISPLAY_ON[] = ;
static int s6e63m0_spi_write_byte(struct s6e63m0 *lcd, int addr, int data)
static int s6e63m0_spi_write(struct s6e63m0 *lcd, unsigned char address,
unsigned char command)
static int s6e63m0_panel_send_sequence(struct s6e63m0 *lcd,
const unsigned short *wbuf)
static int _s6e63m0_gamma_ctl(struct s6e63m0 *lcd, const unsigned int *gamma)
static int s6e63m0_gamma_ctl(struct s6e63m0 *lcd, int gamma)
static int s6e63m0_ldi_init(struct s6e63m0 *lcd)
static int s6e63m0_ldi_enable(struct s6e63m0 *lcd)
static int s6e63m0_ldi_disable(struct s6e63m0 *lcd)
static int s6e63m0_power_on(struct s6e63m0 *lcd)
static int s6e63m0_power_off(struct s6e63m0 *lcd)
static int s6e63m0_power(struct s6e63m0 *lcd, int power)
static int s6e63m0_set_power(struct lcd_device *ld, int power)
static int s6e63m0_get_power(struct lcd_device *ld)
static int s6e63m0_get_brightness(struct backlight_device *bd)
static int s6e63m0_set_brightness(struct backlight_device *bd)
static struct lcd_ops s6e63m0_lcd_ops = ;
static const struct backlight_ops s6e63m0_backlight_ops  = ;
static ssize_t s6e63m0_sysfs_show_gamma_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t s6e63m0_sysfs_store_gamma_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(gamma_mode, 0644,
s6e63m0_sysfs_show_gamma_mode, s6e63m0_sysfs_store_gamma_mode);
static ssize_t s6e63m0_sysfs_show_gamma_table(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(gamma_table, 0444,
s6e63m0_sysfs_show_gamma_table, NULL);
static int __devinit s6e63m0_probe(struct spi_device *spi)
static int __devexit s6e63m0_remove(struct spi_device *spi)
#if defined(CONFIG_PM)
unsigned int before_power;
static int s6e63m0_suspend(struct spi_device *spi, pm_message_t mesg)
static int s6e63m0_resume(struct spi_device *spi)
#define s6e63m0_suspend		NULL
#define s6e63m0_resume		NULL
static void s6e63m0_shutdown(struct spi_device *spi)
static struct spi_driver s6e63m0_driver = ;
static int __init s6e63m0_init(void)
static void __exit s6e63m0_exit(void)
module_init(s6e63m0_init);
module_exit(s6e63m0_exit);
MODULE_AUTHOR("InKi Dae <inki.dae@samsung.com>");
MODULE_DESCRIPTION("S6E63M0 LCD Driver");
MODULE_LICENSE("GPL");
