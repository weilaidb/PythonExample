unsigned long at32_board_osc_rates[3] = ;
struct tag *bootloader_tags __initdata;
static struct atmel_abdac_pdata __initdata abdac0_data = ;
struct eth_addr ;
static struct eth_addr __initdata hw_addr[1];
static struct eth_platform_data __initdata eth_data[1] = ;
static int ads7843_get_pendown_state(void)
static struct ads7846_platform_data ads7843_data = ;
static struct spi_board_info __initdata spi1_board_info[] = ;
static struct mci_platform_data __initdata mci0_data = ;
static struct fb_videomode __initdata lb104v03_modes[] = ;
static struct fb_monspecs __initdata favr32_default_monspecs = ;
struct atmel_lcdfb_info __initdata favr32_lcdc_data = ;
static struct gpio_led favr32_leds[] = ;
static struct gpio_led_platform_data favr32_led_data = ;
static struct platform_device favr32_led_dev = ;
static int __init parse_tag_ethernet(struct tag *tag)
__tagtable(ATAG_ETHERNET, parse_tag_ethernet);
static void __init set_hw_addr(struct platform_device *pdev)
void __init favr32_setup_leds(void)
static struct atmel_pwm_bl_platform_data atmel_pwm_bl_pdata = ;
static struct platform_device atmel_pwm_bl_dev = ;
static void __init favr32_setup_atmel_pwm_bl(void)
void __init setup_board(void)
static int __init set_abdac_rate(struct platform_device *pdev)
static int __init favr32_init(void)
postcore_initcall(favr32_init);
