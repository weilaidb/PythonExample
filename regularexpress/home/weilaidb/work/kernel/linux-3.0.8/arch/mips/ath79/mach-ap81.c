#define AP81_GPIO_LED_STATUS	1
#define AP81_GPIO_LED_AOSS	3
#define AP81_GPIO_LED_WLAN	6
#define AP81_GPIO_LED_POWER	14
#define AP81_GPIO_BTN_SW4	12
#define AP81_GPIO_BTN_SW1	21
#define AP81_KEYS_POLL_INTERVAL		20
#define AP81_KEYS_DEBOUNCE_INTERVAL	(3 * AP81_KEYS_POLL_INTERVAL)
#define AP81_CAL_DATA_ADDR	0x1fff1000
static struct gpio_led ap81_leds_gpio[] __initdata = ;
static struct gpio_keys_button ap81_gpio_keys[] __initdata = ;
static struct spi_board_info ap81_spi_info[] = ;
static struct ath79_spi_platform_data ap81_spi_data = ;
static void __init ap81_setup(void)
MIPS_MACHINE(ATH79_MACH_AP81, "AP81", "Atheros AP81 reference board",
ap81_setup);
