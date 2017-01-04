#define GPIO_OUT_OFF		0x0000
#define GPIO_IO_CONF_OFF	0x0004
#define GPIO_BLINK_EN_OFF	0x0008
#define GPIO_IN_POL_OFF		0x000c
#define GPIO_DATA_IN_OFF	0x0010
#define GPIO_EDGE_CAUSE_OFF	0x0014
#define GPIO_EDGE_MASK_OFF	0x0018
#define GPIO_LEVEL_MASK_OFF	0x001c
struct orion_gpio_chip ;
static void __iomem *GPIO_OUT(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_IO_CONF(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_BLINK_EN(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_IN_POL(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_DATA_IN(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_EDGE_CAUSE(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_EDGE_MASK(struct orion_gpio_chip *ochip)
static void __iomem *GPIO_LEVEL_MASK(struct orion_gpio_chip *ochip)
static struct orion_gpio_chip orion_gpio_chips[2];
static int orion_gpio_chip_count;
static inline void
__set_direction(struct orion_gpio_chip *ochip, unsigned pin, int input)
static void __set_level(struct orion_gpio_chip *ochip, unsigned pin, int high)
static inline void
__set_blinking(struct orion_gpio_chip *ochip, unsigned pin, int blink)
static inline int
orion_gpio_is_valid(struct orion_gpio_chip *ochip, unsigned pin, int mode)
static int orion_gpio_request(struct gpio_chip *chip, unsigned pin)
static int orion_gpio_direction_input(struct gpio_chip *chip, unsigned pin)
static int orion_gpio_get(struct gpio_chip *chip, unsigned pin)
static int
orion_gpio_direction_output(struct gpio_chip *chip, unsigned pin, int value)
static void orion_gpio_set(struct gpio_chip *chip, unsigned pin, int value)
static int orion_gpio_to_irq(struct gpio_chip *chip, unsigned pin)
static struct orion_gpio_chip *orion_gpio_chip_find(int pin)
void __init orion_gpio_set_unused(unsigned pin)
void __init orion_gpio_set_valid(unsigned pin, int mode)
void orion_gpio_set_blink(unsigned pin, int blink)
EXPORT_SYMBOL(orion_gpio_set_blink);
static int gpio_irq_set_type(struct irq_data *d, u32 type)
void __init orion_gpio_init(int gpio_base, int ngpio,
u32 base, int mask_offset, int secondary_irq_base)
void orion_gpio_irq_handler(int pinoff)
