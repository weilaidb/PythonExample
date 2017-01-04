#define MSP71XX_DATA_OFFSET(gpio)	(2 * (gpio))
#define MSP71XX_READ_OFFSET(gpio)	(MSP71XX_DATA_OFFSET(gpio) + 1)
#define MSP71XX_CFG_OUT_OFFSET(gpio)	(MSP71XX_DATA_OFFSET(gpio) + 16)
#define MSP71XX_CFG_IN_OFFSET(gpio)	(MSP71XX_CFG_OUT_OFFSET(gpio) + 1)
#define MSP71XX_EXD_GPIO_BASE	0x0BC000000L
#define to_msp71xx_exd_gpio_chip(c) \
container_of(c, struct msp71xx_exd_gpio_chip, chip)
struct msp71xx_exd_gpio_chip ;
static int msp71xx_exd_gpio_get(struct gpio_chip *chip, unsigned offset)
static void msp71xx_exd_gpio_set(struct gpio_chip *chip,
unsigned offset, int value)
static int msp71xx_exd_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int msp71xx_exd_direction_input(struct gpio_chip *chip, unsigned offset)
#define MSP71XX_EXD_GPIO_BANK(name, exd_reg, base_gpio, num_gpio) \
static struct msp71xx_exd_gpio_chip msp71xx_exd_gpio_banks[] = ;
void __init msp71xx_init_gpio_extended(void)
