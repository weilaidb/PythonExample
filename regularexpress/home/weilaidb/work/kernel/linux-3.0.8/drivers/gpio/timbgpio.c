#define DRIVER_NAME "timb-gpio"
#define TGPIOVAL	0x00
#define TGPIODIR	0x04
#define TGPIO_IER	0x08
#define TGPIO_ISR	0x0c
#define TGPIO_IPR	0x10
#define TGPIO_ICR	0x14
#define TGPIO_FLR	0x18
#define TGPIO_LVR	0x1c
#define TGPIO_VER	0x20
#define TGPIO_BFLR	0x24
struct timbgpio ;
static int timbgpio_update_bit(struct gpio_chip *gpio, unsigned index,
unsigned offset, bool enabled)
static int timbgpio_gpio_direction_input(struct gpio_chip *gpio, unsigned nr)
static int timbgpio_gpio_get(struct gpio_chip *gpio, unsigned nr)
static int timbgpio_gpio_direction_output(struct gpio_chip *gpio,
unsigned nr, int val)
static void timbgpio_gpio_set(struct gpio_chip *gpio,
unsigned nr, int val)
static int timbgpio_to_irq(struct gpio_chip *gpio, unsigned offset)
static void timbgpio_irq_disable(struct irq_data *d)
static void timbgpio_irq_enable(struct irq_data *d)
static int timbgpio_irq_type(struct irq_data *d, unsigned trigger)
static void timbgpio_irq(unsigned int irq, struct irq_desc *desc)
static struct irq_chip timbgpio_irqchip = ;
static int __devinit timbgpio_probe(struct platform_device *pdev)
static int __devexit timbgpio_remove(struct platform_device *pdev)
static struct platform_driver timbgpio_platform_driver = ;
static int __init timbgpio_init(void)
static void __exit timbgpio_exit(void)
module_init(timbgpio_init);
module_exit(timbgpio_exit);
MODULE_DESCRIPTION("Timberdale GPIO driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Mocean Laboratories");
MODULE_ALIAS("platform:"DRIVER_NAME);
