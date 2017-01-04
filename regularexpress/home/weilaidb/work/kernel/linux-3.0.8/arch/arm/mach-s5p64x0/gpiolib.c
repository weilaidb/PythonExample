static int s5p64x0_gpiolib_rbank_4bit2_input(struct gpio_chip *chip,
unsigned int offset)
static int s5p64x0_gpiolib_rbank_4bit2_output(struct gpio_chip *chip,
unsigned int offset, int value)
int s5p64x0_gpio_setcfg_4bit_rbank(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg)
static struct s3c_gpio_cfg s5p64x0_gpio_cfgs[] = ;
static struct s3c_gpio_chip s5p6440_gpio_4bit[] = ;
static struct s3c_gpio_chip s5p6440_gpio_4bit2[] = ;
static struct s3c_gpio_chip s5p6440_gpio_rbank_4bit2[] = ;
static struct s3c_gpio_chip s5p6440_gpio_2bit[] = ;
static struct s3c_gpio_chip s5p6450_gpio_4bit[] = ;
static struct s3c_gpio_chip s5p6450_gpio_4bit2[] = ;
static struct s3c_gpio_chip s5p6450_gpio_rbank_4bit2[] = ;
static struct s3c_gpio_chip s5p6450_gpio_2bit[] = ;
void __init s5p64x0_gpiolib_set_cfg(struct s3c_gpio_cfg *chipcfg, int nr_chips)
static void __init s5p64x0_gpio_add_rbank_4bit2(struct s3c_gpio_chip *chip,
int nr_chips)
static int __init s5p64x0_gpiolib_init(void)
core_initcall(s5p64x0_gpiolib_init);
