static struct s3c_gpio_cfg gpio_cfg = ;
static struct s3c_gpio_cfg gpio_cfg_eint = ;
static struct s3c_gpio_cfg gpio_cfg_noint = ;
#define S5PC100_BANK_BASE(bank_nr)	(S5P_VA_GPIO + ((bank_nr) * 0x20))
static struct s3c_gpio_chip s5pc100_gpio_chips[] = ;
static __init int s5pc100_gpiolib_init(void)
core_initcall(s5pc100_gpiolib_init);
