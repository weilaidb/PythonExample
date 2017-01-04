#define LS_HGL_NOR_BOOT_BASE	0xf4000000
#define LS_HGL_NOR_BOOT_SIZE	SZ_256K
static struct physmap_flash_data ls_hgl_nor_flash_data = ;
static struct resource ls_hgl_nor_flash_resource = ;
static struct platform_device ls_hgl_nor_flash = ;
static struct mv643xx_eth_platform_data ls_hgl_eth_data = ;
static struct i2c_board_info __initdata ls_hgl_i2c_rtc = ;
#define LS_HGL_GPIO_LED_ALARM   2
#define LS_HGL_GPIO_LED_INFO    3
#define LS_HGL_GPIO_LED_FUNC    17
#define LS_HGL_GPIO_LED_PWR     0
static struct gpio_led ls_hgl_led_pins[] = ;
static struct gpio_led_platform_data ls_hgl_led_data = ;
static struct platform_device ls_hgl_leds = ;
#define LS_HGL_GPIO_KEY_FUNC       15
#define LS_HGL_GPIO_KEY_POWER      8
#define LS_HGL_GPIO_KEY_AUTOPOWER  10
#define LS_HGL_SW_POWER     0x00
#define LS_HGL_SW_AUTOPOWER 0x01
static struct gpio_keys_button ls_hgl_buttons[] = ;
static struct gpio_keys_platform_data ls_hgl_button_data = ;
static struct platform_device ls_hgl_button_device = ;
static struct mv_sata_platform_data ls_hgl_sata_data = ;
static void ls_hgl_power_off(void)
#define LS_HGL_GPIO_USB_POWER	9
#define LS_HGL_GPIO_AUTO_POWER	10
#define LS_HGL_GPIO_POWER	    8
#define LS_HGL_GPIO_HDD_POWER	1
static unsigned int ls_hgl_mpp_modes[] __initdata = ;
static void __init ls_hgl_init(void)
MACHINE_START(LINKSTATION_LS_HGL, "Buffalo Linkstation LS-HGL")
.boot_params	= 0x00000100,
.init_machine	= ls_hgl_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
