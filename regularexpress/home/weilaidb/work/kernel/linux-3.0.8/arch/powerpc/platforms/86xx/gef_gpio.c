#define GEF_GPIO_DIRECT		0x00
#define GEF_GPIO_IN		0x04
#define GEF_GPIO_OUT		0x08
#define GEF_GPIO_TRIG		0x0C
#define GEF_GPIO_POLAR_A	0x10
#define GEF_GPIO_POLAR_B	0x14
#define GEF_GPIO_INT_STAT	0x18
#define GEF_GPIO_OVERRUN	0x1C
#define GEF_GPIO_MODE		0x20
static void _gef_gpio_set(void __iomem *reg, unsigned int offset, int value)
static int gef_gpio_dir_in(struct gpio_chip *chip, unsigned offset)
static int gef_gpio_dir_out(struct gpio_chip *chip, unsigned offset, int value)
static int gef_gpio_get(struct gpio_chip *chip, unsigned offset)
static void gef_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int __init gef_gpio_init(void)
;
arch_initcall(gef_gpio_init);
MODULE_DESCRIPTION("GE I/O FPGA GPIO driver");
MODULE_AUTHOR("Martyn Welch <martyn.welch@ge.com");
MODULE_LICENSE("GPL");
