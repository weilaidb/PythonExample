#define gpio_dbg(x...) do  while (0)
#define gpio_dbg(x...) printk(KERN_DEBUG x)
static int samsung_gpiolib_4bit_input(struct gpio_chip *chip,
unsigned int offset)
static int samsung_gpiolib_4bit_output(struct gpio_chip *chip,
unsigned int offset, int value)
static int samsung_gpiolib_4bit2_input(struct gpio_chip *chip,
unsigned int offset)
static int samsung_gpiolib_4bit2_output(struct gpio_chip *chip,
unsigned int offset, int value)
void __init samsung_gpiolib_add_4bit(struct s3c_gpio_chip *chip)
void __init samsung_gpiolib_add_4bit2(struct s3c_gpio_chip *chip)
void __init samsung_gpiolib_add_4bit_chips(struct s3c_gpio_chip *chip,
int nr_chips)
void __init samsung_gpiolib_add_4bit2_chips(struct s3c_gpio_chip *chip,
int nr_chips)
void __init samsung_gpiolib_add_2bit_chips(struct s3c_gpio_chip *chip,
int nr_chips)
