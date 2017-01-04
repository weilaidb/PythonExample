struct s3c_gpio_chip *s3c_gpios[S3C_GPIO_END];
static __init void s3c_gpiolib_track(struct s3c_gpio_chip *chip)
static int s3c_gpiolib_input(struct gpio_chip *chip, unsigned offset)
static int s3c_gpiolib_output(struct gpio_chip *chip,
unsigned offset, int value)
static void s3c_gpiolib_set(struct gpio_chip *chip,
unsigned offset, int value)
static int s3c_gpiolib_get(struct gpio_chip *chip, unsigned offset)
__init void s3c_gpiolib_add(struct s3c_gpio_chip *chip)
int samsung_gpiolib_to_irq(struct gpio_chip *chip, unsigned int offset)
