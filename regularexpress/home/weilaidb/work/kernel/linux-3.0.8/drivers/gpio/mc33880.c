#define DRIVER_NAME "mc33880"
#define PIN_CONFIG_MASK 0x03
#define PIN_CONFIG_IN_PULLUP 0x03
#define PIN_CONFIG_IN_WO_PULLUP 0x02
#define PIN_CONFIG_OUT 0x01
#define PIN_NUMBER 8
struct mc33880 ;
static int mc33880_write_config(struct mc33880 *mc)
static int __mc33880_set(struct mc33880 *mc, unsigned offset, int value)
static void mc33880_set(struct gpio_chip *chip, unsigned offset, int value)
static int __devinit mc33880_probe(struct spi_device *spi)
static int __devexit mc33880_remove(struct spi_device *spi)
static struct spi_driver mc33880_driver = ;
static int __init mc33880_init(void)
subsys_initcall(mc33880_init);
static void __exit mc33880_exit(void)
module_exit(mc33880_exit);
MODULE_AUTHOR("Mocean Laboratories <info@mocean-labs.com>");
MODULE_LICENSE("GPL v2");
