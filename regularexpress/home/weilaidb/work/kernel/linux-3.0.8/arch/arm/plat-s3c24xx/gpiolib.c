static int s3c24xx_gpiolib_banka_input(struct gpio_chip *chip, unsigned offset)
static int s3c24xx_gpiolib_banka_output(struct gpio_chip *chip,
unsigned offset, int value)
static int s3c24xx_gpiolib_bankf_toirq(struct gpio_chip *chip, unsigned offset)
static struct s3c_gpio_cfg s3c24xx_gpiocfg_banka = ;
struct s3c_gpio_cfg s3c24xx_gpiocfg_default = ;
struct s3c_gpio_chip s3c24xx_gpios[] = ;
static __init int s3c24xx_gpiolib_init(void)
core_initcall(s3c24xx_gpiolib_init);
