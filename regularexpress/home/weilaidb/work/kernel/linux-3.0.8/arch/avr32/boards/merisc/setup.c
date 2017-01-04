static int merisc_board_id;
struct tag *bootloader_tags __initdata;
unsigned long at32_board_osc_rates[3] = ;
struct eth_addr ;
static struct eth_addr __initdata hw_addr[2];
static struct eth_platform_data __initdata eth_data[2];
static int ads7846_get_pendown_state_PB26(void)
static int ads7846_get_pendown_state_PB28(void)
static struct ads7846_platform_data __initdata ads7846_data = ;
static struct spi_board_info __initdata spi0_board_info[] = ;
static struct mci_platform_data __initdata mci0_data = ;
static int __init parse_tag_ethernet(struct tag *tag)
__tagtable(ATAG_ETHERNET, parse_tag_ethernet);
static void __init set_hw_addr(struct platform_device *pdev)
static struct i2c_gpio_platform_data i2c_gpio_data = ;
static struct platform_device i2c_gpio_device = ;
static struct i2c_board_info __initdata i2c_info[] = ;
static struct gpio_led stk_pwm_led[] = ;
static struct gpio_led_platform_data stk_pwm_led_data = ;
static struct platform_device stk_pwm_led_dev = ;
const char *merisc_model(void)
const char *merisc_revision(void)
static void detect_merisc_board_id(void)
void __init setup_board(void)
static int __init merisc_init(void)
postcore_initcall(merisc_init);
