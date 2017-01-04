#define AB8500_GPIO_SEL1_REG	0x00
#define AB8500_GPIO_SEL2_REG	0x01
#define AB8500_GPIO_SEL3_REG	0x02
#define AB8500_GPIO_SEL4_REG	0x03
#define AB8500_GPIO_SEL5_REG	0x04
#define AB8500_GPIO_SEL6_REG	0x05
#define AB8500_GPIO_DIR1_REG	0x10
#define AB8500_GPIO_DIR2_REG	0x11
#define AB8500_GPIO_DIR3_REG	0x12
#define AB8500_GPIO_DIR4_REG	0x13
#define AB8500_GPIO_DIR5_REG	0x14
#define AB8500_GPIO_DIR6_REG	0x15
#define AB8500_GPIO_OUT1_REG	0x20
#define AB8500_GPIO_OUT2_REG	0x21
#define AB8500_GPIO_OUT3_REG	0x22
#define AB8500_GPIO_OUT4_REG	0x23
#define AB8500_GPIO_OUT5_REG	0x24
#define AB8500_GPIO_OUT6_REG	0x25
#define AB8500_GPIO_PUD1_REG	0x30
#define AB8500_GPIO_PUD2_REG	0x31
#define AB8500_GPIO_PUD3_REG	0x32
#define AB8500_GPIO_PUD4_REG	0x33
#define AB8500_GPIO_PUD5_REG	0x34
#define AB8500_GPIO_PUD6_REG	0x35
#define AB8500_GPIO_IN1_REG	0x40
#define AB8500_GPIO_IN2_REG	0x41
#define AB8500_GPIO_IN3_REG	0x42
#define AB8500_GPIO_IN4_REG	0x43
#define AB8500_GPIO_IN5_REG	0x44
#define AB8500_GPIO_IN6_REG	0x45
#define AB8500_GPIO_ALTFUN_REG	0x45
#define ALTFUN_REG_INDEX	6
#define AB8500_NUM_GPIO		42
#define AB8500_NUM_VIR_GPIO_IRQ	16
enum ab8500_gpio_action ;
struct ab8500_gpio ;
static inline struct ab8500_gpio *to_ab8500_gpio(struct gpio_chip *chip)
static int ab8500_gpio_set_bits(struct gpio_chip *chip, u8 reg,
unsigned offset, int val)
static int ab8500_gpio_get(struct gpio_chip *chip, unsigned offset)
static void ab8500_gpio_set(struct gpio_chip *chip, unsigned offset, int val)
static int ab8500_gpio_direction_output(struct gpio_chip *chip, unsigned offset,
int val)
static int ab8500_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int ab8500_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static struct gpio_chip ab8500gpio_chip = ;
static unsigned int irq_to_rising(unsigned int irq)
static unsigned int irq_to_falling(unsigned int irq)
static unsigned int rising_to_irq(unsigned int irq, void *dev)
static unsigned int falling_to_irq(unsigned int irq, void *dev)
static irqreturn_t handle_rising(int irq, void *dev)
static irqreturn_t handle_falling(int irq, void *dev)
static void ab8500_gpio_irq_lock(unsigned int irq)
static void ab8500_gpio_irq_sync_unlock(unsigned int irq)
static void ab8500_gpio_irq_mask(unsigned int irq)
static void ab8500_gpio_irq_unmask(unsigned int irq)
static int ab8500_gpio_irq_set_type(unsigned int irq, unsigned int type)
unsigned int ab8500_gpio_irq_startup(unsigned int irq)
void ab8500_gpio_irq_shutdown(unsigned int irq)
static struct irq_chip ab8500_gpio_irq_chip = ;
static int ab8500_gpio_irq_init(struct ab8500_gpio *ab8500_gpio)
static void ab8500_gpio_irq_remove(struct ab8500_gpio *ab8500_gpio)
static int __devinit ab8500_gpio_probe(struct platform_device *pdev)
static int __devexit ab8500_gpio_remove(struct platform_device *pdev)
static struct platform_driver ab8500_gpio_driver = ;
static int __init ab8500_gpio_init(void)
arch_initcall(ab8500_gpio_init);
static void __exit ab8500_gpio_exit(void)
module_exit(ab8500_gpio_exit);
MODULE_AUTHOR("BIBEK BASU <bibek.basu@stericsson.com>");
MODULE_DESCRIPTION("Driver allows to use AB8500 unused pins to be used as GPIO");
MODULE_ALIAS("AB8500 GPIO driver");
MODULE_LICENSE("GPL v2");
