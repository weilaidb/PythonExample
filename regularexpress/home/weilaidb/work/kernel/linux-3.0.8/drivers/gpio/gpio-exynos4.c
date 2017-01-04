int s3c_gpio_setpull_exynos4(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull)
s3c_gpio_pull_t s3c_gpio_getpull_exynos4(struct s3c_gpio_chip *chip,
unsigned int off)
static struct s3c_gpio_cfg gpio_cfg = ;
static struct s3c_gpio_cfg gpio_cfg_noint = ;
static struct s3c_gpio_chip exynos4_gpio_part1_4bit[] = ;
static struct s3c_gpio_chip exynos4_gpio_part2_4bit[] = ;
static struct s3c_gpio_chip exynos4_gpio_part3_4bit[] = ;
static __init int exynos4_gpiolib_init(void)
core_initcall(exynos4_gpiolib_init);
