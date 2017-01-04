int s3c_gpio_cfgpin(unsigned int pin, unsigned int config)
EXPORT_SYMBOL(s3c_gpio_cfgpin);
int s3c_gpio_cfgpin_range(unsigned int start, unsigned int nr,
unsigned int cfg)
EXPORT_SYMBOL_GPL(s3c_gpio_cfgpin_range);
int s3c_gpio_cfgall_range(unsigned int start, unsigned int nr,
unsigned int cfg, s3c_gpio_pull_t pull)
EXPORT_SYMBOL_GPL(s3c_gpio_cfgall_range);
unsigned s3c_gpio_getcfg(unsigned int pin)
EXPORT_SYMBOL(s3c_gpio_getcfg);
int s3c_gpio_setpull(unsigned int pin, s3c_gpio_pull_t pull)
EXPORT_SYMBOL(s3c_gpio_setpull);
s3c_gpio_pull_t s3c_gpio_getpull(unsigned int pin)
EXPORT_SYMBOL(s3c_gpio_getpull);
int s3c_gpio_setcfg_s3c24xx_a(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg)
unsigned s3c_gpio_getcfg_s3c24xx_a(struct s3c_gpio_chip *chip,
unsigned int off)
int s3c_gpio_setcfg_s3c24xx(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg)
unsigned int s3c_gpio_getcfg_s3c24xx(struct s3c_gpio_chip *chip,
unsigned int off)
int s3c_gpio_setcfg_s3c64xx_4bit(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg)
unsigned s3c_gpio_getcfg_s3c64xx_4bit(struct s3c_gpio_chip *chip,
unsigned int off)
int s3c_gpio_setpull_updown(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull)
s3c_gpio_pull_t s3c_gpio_getpull_updown(struct s3c_gpio_chip *chip,
unsigned int off)
int s3c_gpio_setpull_s3c2443(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull)
s3c_gpio_pull_t s3c_gpio_getpull_s3c2443(struct s3c_gpio_chip *chip,
unsigned int off)
#if defined(CONFIG_S3C_GPIO_PULL_UP) || defined(CONFIG_S3C_GPIO_PULL_DOWN)
static int s3c_gpio_setpull_1(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull,
s3c_gpio_pull_t updown)
static s3c_gpio_pull_t s3c_gpio_getpull_1(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t updown)
s3c_gpio_pull_t s3c_gpio_getpull_1up(struct s3c_gpio_chip *chip,
unsigned int off)
int s3c_gpio_setpull_1up(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull)
s3c_gpio_pull_t s3c_gpio_getpull_1down(struct s3c_gpio_chip *chip,
unsigned int off)
int s3c_gpio_setpull_1down(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull)
s5p_gpio_drvstr_t s5p_gpio_get_drvstr(unsigned int pin)
EXPORT_SYMBOL(s5p_gpio_get_drvstr);
int s5p_gpio_set_drvstr(unsigned int pin, s5p_gpio_drvstr_t drvstr)
EXPORT_SYMBOL(s5p_gpio_set_drvstr);
