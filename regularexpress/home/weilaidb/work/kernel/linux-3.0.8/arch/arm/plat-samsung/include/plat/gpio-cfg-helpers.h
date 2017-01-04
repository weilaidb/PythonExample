#define __PLAT_GPIO_CFG_HELPERS_H __FILE__
static inline int s3c_gpio_do_setcfg(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int config)
static inline unsigned s3c_gpio_do_getcfg(struct s3c_gpio_chip *chip,
unsigned int off)
static inline int s3c_gpio_do_setpull(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull)
static inline s3c_gpio_pull_t s3c_gpio_do_getpull(struct s3c_gpio_chip *chip,
unsigned int off)
extern int s3c_gpio_setcfg_s3c24xx(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg);
unsigned int s3c_gpio_getcfg_s3c24xx(struct s3c_gpio_chip *chip,
unsigned int off);
extern int s3c_gpio_setcfg_s3c24xx_a(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg);
extern unsigned s3c_gpio_getcfg_s3c24xx_a(struct s3c_gpio_chip *chip,
unsigned int off);
extern int s3c_gpio_setcfg_s3c64xx_4bit(struct s3c_gpio_chip *chip,
unsigned int off, unsigned int cfg);
extern unsigned s3c_gpio_getcfg_s3c64xx_4bit(struct s3c_gpio_chip *chip,
unsigned int off);
extern int s3c_gpio_setpull_1up(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull);
extern int s3c_gpio_setpull_1down(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull);
extern int s3c_gpio_setpull_updown(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull);
extern s3c_gpio_pull_t s3c_gpio_getpull_updown(struct s3c_gpio_chip *chip,
unsigned int off);
extern s3c_gpio_pull_t s3c_gpio_getpull_1up(struct s3c_gpio_chip *chip,
unsigned int off);
extern s3c_gpio_pull_t s3c_gpio_getpull_1down(struct s3c_gpio_chip *chip,
unsigned int off);
extern int s3c_gpio_setpull_s3c2443(struct s3c_gpio_chip *chip,
unsigned int off, s3c_gpio_pull_t pull);
extern s3c_gpio_pull_t s3c_gpio_getpull_s3c2443(struct s3c_gpio_chip *chip,
unsigned int off);
