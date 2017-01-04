static int max3107_gpio_direction_in(struct gpio_chip *chip, unsigned offset)
static int max3107_gpio_direction_out(struct gpio_chip *chip, unsigned offset,
int value)
static int max3107_gpio_get(struct gpio_chip *chip, unsigned offset)
static void max3107_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static struct gpio_chip max3107_gpio_chip = ;
static int max3107_aava_reset(struct spi_device *spi)
static int max3107_aava_configure(struct max3107_port *s)
static int __devexit max3107_aava_remove(struct spi_device *spi)
static struct max3107_plat aava_plat_data = ;
static int __devinit max3107_probe_aava(struct spi_device *spi)
static struct spi_driver max3107_driver = ;
static int __init max3107_init(void)
static void __exit max3107_exit(void)
module_init(max3107_init);
module_exit(max3107_exit);
MODULE_DESCRIPTION("MAX3107 driver");
MODULE_AUTHOR("Aavamobile");
MODULE_ALIAS("spi:aava-max3107");
MODULE_LICENSE("GPL v2");
