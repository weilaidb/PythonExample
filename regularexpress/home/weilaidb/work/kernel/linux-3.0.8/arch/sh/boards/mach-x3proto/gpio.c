#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define KEYCTLR	0xb81c0000
#define KEYOUTR	0xb81c0002
#define KEYDETR 0xb81c0004
static DEFINE_SPINLOCK(x3proto_gpio_lock);
static unsigned int x3proto_gpio_irq_map[NR_BASEBOARD_GPIOS] = ;
static int x3proto_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int x3proto_gpio_get(struct gpio_chip *chip, unsigned gpio)
static int x3proto_gpio_to_irq(struct gpio_chip *chip, unsigned gpio)
static void x3proto_gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
struct gpio_chip x3proto_gpio_chip = ;
int __init x3proto_gpio_setup(void)
