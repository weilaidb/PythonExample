struct tnetv107x_gpio_regs ;
#define gpio_reg_index(gpio)	((gpio) >> 5)
#define gpio_reg_bit(gpio)	BIT((gpio) & 0x1f)
#define gpio_reg_rmw(reg, mask, val)	\
__raw_writel((__raw_readl(reg) & ~(mask)) | (val), (reg))
#define gpio_reg_set_bit(reg, gpio)	\
gpio_reg_rmw((reg) + gpio_reg_index(gpio), 0, gpio_reg_bit(gpio))
#define gpio_reg_clear_bit(reg, gpio)	\
gpio_reg_rmw((reg) + gpio_reg_index(gpio), gpio_reg_bit(gpio), 0)
#define gpio_reg_get_bit(reg, gpio)	\
(__raw_readl((reg) + gpio_reg_index(gpio)) & gpio_reg_bit(gpio))
#define chip2controller(chip)		\
container_of(chip, struct davinci_gpio_controller, chip)
#define TNETV107X_GPIO_CTLRS	DIV_ROUND_UP(TNETV107X_N_GPIO, 32)
static struct davinci_gpio_controller chips[TNETV107X_GPIO_CTLRS];
static int tnetv107x_gpio_request(struct gpio_chip *chip, unsigned offset)
static void tnetv107x_gpio_free(struct gpio_chip *chip, unsigned offset)
static int tnetv107x_gpio_dir_in(struct gpio_chip *chip, unsigned offset)
static int tnetv107x_gpio_dir_out(struct gpio_chip *chip,
unsigned offset, int value)
static int tnetv107x_gpio_get(struct gpio_chip *chip, unsigned offset)
static void tnetv107x_gpio_set(struct gpio_chip *chip,
unsigned offset, int value)
static int __init tnetv107x_gpio_setup(void)
pure_initcall(tnetv107x_gpio_setup);
