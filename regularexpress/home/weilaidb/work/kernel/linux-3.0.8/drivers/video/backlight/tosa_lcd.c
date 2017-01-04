#define POWER_IS_ON(pwr)	((pwr) <= FB_BLANK_NORMAL)
#define TG_REG0_VQV	0x0001
#define TG_REG0_COLOR	0x0002
#define TG_REG0_UD	0x0004
#define TG_REG0_LR	0x0008
#define	DAC_BASE	0x4e
struct tosa_lcd_data ;
static int tosa_tg_send(struct spi_device *spi, int adrs, uint8_t data)
int tosa_bl_enable(struct spi_device *spi, int enable)
EXPORT_SYMBOL(tosa_bl_enable);
static void tosa_lcd_tg_init(struct tosa_lcd_data *data)
static void tosa_lcd_tg_on(struct tosa_lcd_data *data)
static void tosa_lcd_tg_off(struct tosa_lcd_data *data)
int tosa_lcd_set_power(struct lcd_device *lcd, int power)
static int tosa_lcd_get_power(struct lcd_device *lcd)
static int tosa_lcd_set_mode(struct lcd_device *lcd, struct fb_videomode *mode)
static struct lcd_ops tosa_lcd_ops = ;
static int __devinit tosa_lcd_probe(struct spi_device *spi)
static int __devexit tosa_lcd_remove(struct spi_device *spi)
static int tosa_lcd_suspend(struct spi_device *spi, pm_message_t state)
static int tosa_lcd_resume(struct spi_device *spi)
#define tosa_lcd_suspend	NULL
#define tosa_lcd_reume NULL
static struct spi_driver tosa_lcd_driver = ;
static int __init tosa_lcd_init(void)
static void __exit tosa_lcd_exit(void)
module_init(tosa_lcd_init);
module_exit(tosa_lcd_exit);
MODULE_AUTHOR("Dmitry Baryshkov");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("LCD/Backlight control for Sharp SL-6000 PDA");
MODULE_ALIAS("spi:tosa-lcd");
