struct l4f00242t03_priv ;
static void l4f00242t03_reset(unsigned int gpio)
#define param(x) ((x) | 0x100)
static void l4f00242t03_lcd_init(struct spi_device *spi)
static void l4f00242t03_lcd_powerdown(struct spi_device *spi)
static int l4f00242t03_lcd_power_get(struct lcd_device *ld)
static int l4f00242t03_lcd_power_set(struct lcd_device *ld, int power)
static struct lcd_ops l4f_ops = ;
static int __devinit l4f00242t03_probe(struct spi_device *spi)
static int __devexit l4f00242t03_remove(struct spi_device *spi)
static void l4f00242t03_shutdown(struct spi_device *spi)
static struct spi_driver l4f00242t03_driver = ;
static __init int l4f00242t03_init(void)
static __exit void l4f00242t03_exit(void)
module_init(l4f00242t03_init);
module_exit(l4f00242t03_exit);
MODULE_AUTHOR("Alberto Panizzo <maramaopercheseimorto@gmail.com>");
MODULE_DESCRIPTION("EPSON L4F00242T03 LCD");
MODULE_LICENSE("GPL v2");
