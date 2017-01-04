static struct s3c_gpio_cfg gpio_cfg = ;
static struct s3c_gpio_cfg gpio_cfg_noint = ;
#define S5PV210_BANK_BASE(bank_nr)	(S5P_VA_GPIO + ((bank_nr) * 0x20))
static struct s3c_gpio_chip s5pv210_gpio_4bit[] = ;
static __init int s5pv210_gpiolib_init(void)
core_initcall(s5pv210_gpiolib_init);
