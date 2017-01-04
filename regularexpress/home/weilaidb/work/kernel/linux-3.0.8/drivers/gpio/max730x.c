#define PIN_CONFIG_MASK 0x03
#define PIN_CONFIG_IN_PULLUP 0x03
#define PIN_CONFIG_IN_WO_PULLUP 0x02
#define PIN_CONFIG_OUT 0x01
#define PIN_NUMBER 28
static int max7301_direction_input(struct gpio_chip *chip, unsigned offset)
static int __max7301_set(struct max7301 *ts, unsigned offset, int value)
static int max7301_direction_output(struct gpio_chip *chip, unsigned offset,
int value)
static int max7301_get(struct gpio_chip *chip, unsigned offset)
static void max7301_set(struct gpio_chip *chip, unsigned offset, int value)
int __devinit __max730x_probe(struct max7301 *ts)
EXPORT_SYMBOL_GPL(__max730x_probe);
int __devexit __max730x_remove(struct device *dev)
EXPORT_SYMBOL_GPL(__max730x_remove);
MODULE_AUTHOR("Juergen Beisert, Wolfram Sang");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("MAX730x GPIO-Expanders, generic parts");
