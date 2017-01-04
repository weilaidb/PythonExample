static struct s3c_gpio_cfg gpio_4bit_cfg_noint = ;
static struct s3c_gpio_cfg gpio_4bit_cfg_eint0111 = ;
static struct s3c_gpio_cfg gpio_4bit_cfg_eint0011 = ;
static int s3c64xx_gpio2int_gpm(struct gpio_chip *chip, unsigned pin)
static struct s3c_gpio_chip gpio_4bit[] = ;
static int s3c64xx_gpio2int_gpl(struct gpio_chip *chip, unsigned pin)
static struct s3c_gpio_chip gpio_4bit2[] = ;
static struct s3c_gpio_cfg gpio_2bit_cfg_noint = ;
static struct s3c_gpio_cfg gpio_2bit_cfg_eint10 = ;
static struct s3c_gpio_cfg gpio_2bit_cfg_eint11 = ;
static struct s3c_gpio_chip gpio_2bit[] = ;
static __init void s3c64xx_gpiolib_add_2bit(struct s3c_gpio_chip *chip)
static __init void s3c64xx_gpiolib_add(struct s3c_gpio_chip *chips,
int nr_chips,
void (*fn)(struct s3c_gpio_chip *))
static __init int s3c64xx_gpiolib_init(void)
core_initcall(s3c64xx_gpiolib_init);
