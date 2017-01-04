#define MSP71XX_CFG_OFFSET(gpio)	(4 * (gpio))
#define CONF_MASK			0x0F
#define MSP71XX_GPIO_INPUT		0x01
#define MSP71XX_GPIO_OUTPUT		0x08
#define MSP71XX_GPIO_BASE		0x0B8400000L
#define to_msp71xx_gpio_chip(c) container_of(c, struct msp71xx_gpio_chip, chip)
static spinlock_t gpio_lock;
struct msp71xx_gpio_chip ;
static int msp71xx_gpio_get(struct gpio_chip *chip, unsigned offset)
static void msp71xx_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int msp71xx_set_gpio_mode(struct gpio_chip *chip,
unsigned offset, int mode)
static int msp71xx_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int msp71xx_direction_input(struct gpio_chip *chip, unsigned offset)
int msp71xx_set_output_drive(unsigned gpio, int value)
EXPORT_SYMBOL(msp71xx_set_output_drive);
#define MSP71XX_GPIO_BANK(name, dr, cr, base_gpio, num_gpio) \
static struct msp71xx_gpio_chip msp71xx_gpio_banks[] = ;
void __init msp71xx_init_gpio(void)
