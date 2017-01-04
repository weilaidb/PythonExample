#define DEFINE_REG(reg, off) \
static inline u16 read_##reg(void __iomem *port) \
\
static inline void write_##reg(void __iomem *port, u16 v) \
DEFINE_REG(PORTIO, 0x00)
DEFINE_REG(PORTIO_CLEAR, 0x10)
DEFINE_REG(PORTIO_SET, 0x20)
DEFINE_REG(PORTIO_DIR, 0x40)
DEFINE_REG(PORTIO_INEN, 0x50)
static void __iomem *gpio_chip_to_mmr(struct gpio_chip *chip)
static int bf538_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void bf538_gpio_set_value(struct gpio_chip *chip, unsigned gpio, int value)
static int bf538_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int bf538_gpio_direction_output(struct gpio_chip *chip, unsigned gpio, int value)
static int bf538_gpio_request(struct gpio_chip *chip, unsigned gpio)
static void bf538_gpio_free(struct gpio_chip *chip, unsigned gpio)
static struct gpio_chip bf538_portc_chip = ;
static struct gpio_chip bf538_portd_chip = ;
static struct gpio_chip bf538_porte_chip = ;
static int __init bf538_extgpio_setup(void)
arch_initcall(bf538_extgpio_setup);
