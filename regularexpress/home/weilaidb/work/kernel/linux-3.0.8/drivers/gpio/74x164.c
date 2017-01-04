#define GEN_74X164_GPIO_COUNT	8
struct gen_74x164_chip ;
static void gen_74x164_set_value(struct gpio_chip *, unsigned, int);
static struct gen_74x164_chip *gpio_to_chip(struct gpio_chip *gc)
static int __gen_74x164_write_config(struct gen_74x164_chip *chip)
static int gen_74x164_direction_output(struct gpio_chip *gc,
unsigned offset, int val)
static int gen_74x164_get_value(struct gpio_chip *gc, unsigned offset)
static void gen_74x164_set_value(struct gpio_chip *gc,
unsigned offset, int val)
static int __devinit gen_74x164_probe(struct spi_device *spi)
static int __devexit gen_74x164_remove(struct spi_device *spi)
static struct spi_driver gen_74x164_driver = ;
static int __init gen_74x164_init(void)
subsys_initcall(gen_74x164_init);
static void __exit gen_74x164_exit(void)
module_exit(gen_74x164_exit);
MODULE_AUTHOR("Gabor Juhos <juhosg@openwrt.org>");
MODULE_AUTHOR("Miguel Gaio <miguel.gaio@efixo.com>");
MODULE_DESCRIPTION("GPIO expander driver for 74X164 8-bits shift register");
MODULE_LICENSE("GPL v2");
