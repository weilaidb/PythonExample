#define PB44_GPIO_I2C_SCL	0
#define PB44_GPIO_I2C_SDA	1
#define PB44_GPIO_EXP_BASE	16
#define PB44_GPIO_SW_RESET	(PB44_GPIO_EXP_BASE + 6)
#define PB44_GPIO_SW_JUMP	(PB44_GPIO_EXP_BASE + 8)
#define PB44_GPIO_LED_JUMP1	(PB44_GPIO_EXP_BASE + 9)
#define PB44_GPIO_LED_JUMP2	(PB44_GPIO_EXP_BASE + 10)
#define PB44_KEYS_POLL_INTERVAL		20
#define PB44_KEYS_DEBOUNCE_INTERVAL	(3 * PB44_KEYS_POLL_INTERVAL)
static struct i2c_gpio_platform_data pb44_i2c_gpio_data = ;
static struct platform_device pb44_i2c_gpio_device = ;
static struct pcf857x_platform_data pb44_pcf857x_data = ;
static struct i2c_board_info pb44_i2c_board_info[] __initdata = ;
static struct gpio_led pb44_leds_gpio[] __initdata = ;
static struct gpio_keys_button pb44_gpio_keys[] __initdata = ;
static struct spi_board_info pb44_spi_info[] = ;
static struct ath79_spi_platform_data pb44_spi_data = ;
static void __init pb44_init(void)
MIPS_MACHINE(ATH79_MACH_PB44, "PB44", "Atheros PB44 reference board",
pb44_init);
