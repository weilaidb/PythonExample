#define LPC32XX_GPIO_P3_INP_STATE		_GPREG(0x000)
#define LPC32XX_GPIO_P3_OUTP_SET		_GPREG(0x004)
#define LPC32XX_GPIO_P3_OUTP_CLR		_GPREG(0x008)
#define LPC32XX_GPIO_P3_OUTP_STATE		_GPREG(0x00C)
#define LPC32XX_GPIO_P2_DIR_SET			_GPREG(0x010)
#define LPC32XX_GPIO_P2_DIR_CLR			_GPREG(0x014)
#define LPC32XX_GPIO_P2_DIR_STATE		_GPREG(0x018)
#define LPC32XX_GPIO_P2_INP_STATE		_GPREG(0x01C)
#define LPC32XX_GPIO_P2_OUTP_SET		_GPREG(0x020)
#define LPC32XX_GPIO_P2_OUTP_CLR		_GPREG(0x024)
#define LPC32XX_GPIO_P2_MUX_SET			_GPREG(0x028)
#define LPC32XX_GPIO_P2_MUX_CLR			_GPREG(0x02C)
#define LPC32XX_GPIO_P2_MUX_STATE		_GPREG(0x030)
#define LPC32XX_GPIO_P0_INP_STATE		_GPREG(0x040)
#define LPC32XX_GPIO_P0_OUTP_SET		_GPREG(0x044)
#define LPC32XX_GPIO_P0_OUTP_CLR		_GPREG(0x048)
#define LPC32XX_GPIO_P0_OUTP_STATE		_GPREG(0x04C)
#define LPC32XX_GPIO_P0_DIR_SET			_GPREG(0x050)
#define LPC32XX_GPIO_P0_DIR_CLR			_GPREG(0x054)
#define LPC32XX_GPIO_P0_DIR_STATE		_GPREG(0x058)
#define LPC32XX_GPIO_P1_INP_STATE		_GPREG(0x060)
#define LPC32XX_GPIO_P1_OUTP_SET		_GPREG(0x064)
#define LPC32XX_GPIO_P1_OUTP_CLR		_GPREG(0x068)
#define LPC32XX_GPIO_P1_OUTP_STATE		_GPREG(0x06C)
#define LPC32XX_GPIO_P1_DIR_SET			_GPREG(0x070)
#define LPC32XX_GPIO_P1_DIR_CLR			_GPREG(0x074)
#define LPC32XX_GPIO_P1_DIR_STATE		_GPREG(0x078)
#define GPIO012_PIN_TO_BIT(x)			(1 << (x))
#define GPIO3_PIN_TO_BIT(x)			(1 << ((x) + 25))
#define GPO3_PIN_TO_BIT(x)			(1 << (x))
#define GPIO012_PIN_IN_SEL(x, y)		(((x) >> (y)) & 1)
#define GPIO3_PIN_IN_SHIFT(x)			((x) == 5 ? 24 : 10 + (x))
#define GPIO3_PIN_IN_SEL(x, y)			((x) >> GPIO3_PIN_IN_SHIFT(y))
#define GPIO3_PIN5_IN_SEL(x)			(((x) >> 24) & 1)
#define GPI3_PIN_IN_SEL(x, y)			(((x) >> (y)) & 1)
struct gpio_regs ;
static const char *gpio_p0_names[LPC32XX_GPIO_P0_MAX] = ;
static const char *gpio_p1_names[LPC32XX_GPIO_P1_MAX] = ;
static const char *gpio_p2_names[LPC32XX_GPIO_P2_MAX] = ;
static const char *gpio_p3_names[LPC32XX_GPIO_P3_MAX] = ;
static const char *gpi_p3_names[LPC32XX_GPI_P3_MAX] = ;
static const char *gpo_p3_names[LPC32XX_GPO_P3_MAX] = ;
static struct gpio_regs gpio_grp_regs_p0 = ;
static struct gpio_regs gpio_grp_regs_p1 = ;
static struct gpio_regs gpio_grp_regs_p2 = ;
static struct gpio_regs gpio_grp_regs_p3 = ;
struct lpc32xx_gpio_chip ;
static inline struct lpc32xx_gpio_chip *to_lpc32xx_gpio(
struct gpio_chip *gpc)
static void __set_gpio_dir_p012(struct lpc32xx_gpio_chip *group,
unsigned pin, int input)
static void __set_gpio_dir_p3(struct lpc32xx_gpio_chip *group,
unsigned pin, int input)
static void __set_gpio_level_p012(struct lpc32xx_gpio_chip *group,
unsigned pin, int high)
static void __set_gpio_level_p3(struct lpc32xx_gpio_chip *group,
unsigned pin, int high)
static void __set_gpo_level_p3(struct lpc32xx_gpio_chip *group,
unsigned pin, int high)
static int __get_gpio_state_p012(struct lpc32xx_gpio_chip *group,
unsigned pin)
static int __get_gpio_state_p3(struct lpc32xx_gpio_chip *group,
unsigned pin)
static int __get_gpi_state_p3(struct lpc32xx_gpio_chip *group,
unsigned pin)
static int lpc32xx_gpio_dir_input_p012(struct gpio_chip *chip,
unsigned pin)
static int lpc32xx_gpio_dir_input_p3(struct gpio_chip *chip,
unsigned pin)
static int lpc32xx_gpio_dir_in_always(struct gpio_chip *chip,
unsigned pin)
static int lpc32xx_gpio_get_value_p012(struct gpio_chip *chip, unsigned pin)
static int lpc32xx_gpio_get_value_p3(struct gpio_chip *chip, unsigned pin)
static int lpc32xx_gpi_get_value(struct gpio_chip *chip, unsigned pin)
static int lpc32xx_gpio_dir_output_p012(struct gpio_chip *chip, unsigned pin,
int value)
static int lpc32xx_gpio_dir_output_p3(struct gpio_chip *chip, unsigned pin,
int value)
static int lpc32xx_gpio_dir_out_always(struct gpio_chip *chip, unsigned pin,
int value)
static void lpc32xx_gpio_set_value_p012(struct gpio_chip *chip, unsigned pin,
int value)
static void lpc32xx_gpio_set_value_p3(struct gpio_chip *chip, unsigned pin,
int value)
static void lpc32xx_gpo_set_value(struct gpio_chip *chip, unsigned pin,
int value)
static int lpc32xx_gpio_request(struct gpio_chip *chip, unsigned pin)
static struct lpc32xx_gpio_chip lpc32xx_gpiochip[] = ;
void __init lpc32xx_gpio_init(void)
