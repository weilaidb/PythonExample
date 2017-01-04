struct ar7_gpio_chip ;
static int ar7_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static int titan_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void ar7_gpio_set_value(struct gpio_chip *chip,
unsigned gpio, int value)
static void titan_gpio_set_value(struct gpio_chip *chip,
unsigned gpio, int value)
static int ar7_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int titan_gpio_direction_input(struct gpio_chip *chip, unsigned gpio)
static int ar7_gpio_direction_output(struct gpio_chip *chip,
unsigned gpio, int value)
static int titan_gpio_direction_output(struct gpio_chip *chip,
unsigned gpio, int value)
static struct ar7_gpio_chip ar7_gpio_chip = ;
static struct ar7_gpio_chip titan_gpio_chip = ;
static inline int ar7_gpio_enable_ar7(unsigned gpio)
static inline int ar7_gpio_enable_titan(unsigned gpio)
int ar7_gpio_enable(unsigned gpio)
EXPORT_SYMBOL(ar7_gpio_enable);
static inline int ar7_gpio_disable_ar7(unsigned gpio)
static inline int ar7_gpio_disable_titan(unsigned gpio)
int ar7_gpio_disable(unsigned gpio)
EXPORT_SYMBOL(ar7_gpio_disable);
struct titan_gpio_cfg ;
static struct titan_gpio_cfg titan_gpio_table[] = ;
static int titan_gpio_pinsel(unsigned gpio)
static void titan_gpio_init(void)
int __init ar7_gpio_init(void)
