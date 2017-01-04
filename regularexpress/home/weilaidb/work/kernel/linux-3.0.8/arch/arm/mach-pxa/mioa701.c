static unsigned long mioa701_pin_config[] = ;
#define MIO_GPIO_IN(num, _desc) \
#define MIO_GPIO_OUT(num, _init, _desc) \
struct gpio_ress ;
static int mio_gpio_request(struct gpio_ress *gpios, int size)
static void mio_gpio_free(struct gpio_ress *gpios, int size)
static struct platform_pwm_backlight_data mioa701_backlight_data = ;
static struct pxafb_mode_info mioa701_ltm0305a776c = ;
static void mioa701_lcd_power(int on, struct fb_var_screeninfo *si)
static struct pxafb_mach_info mioa701_pxafb_info = ;
static unsigned int mioa701_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data mioa701_keypad_info = ;
#define MIO_KEY(key, _gpio, _desc, _wakeup) \
static struct gpio_keys_button mioa701_button_table[] = ;
static struct gpio_keys_platform_data mioa701_gpio_keys_data = ;
#define ONE_LED(_gpio, _name) \
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static int is_gsm_on(void)
irqreturn_t gsm_on_irq(int irq, void *p)
struct gpio_ress gsm_gpios[] = ;
static int __init gsm_init(void)
static void gsm_exit(void)
static int is_usb_connected(void)
static struct pxa2xx_udc_mach_info mioa701_udc_info = ;
struct gpio_vbus_mach_info gpio_vbus_data = ;
static struct pxamci_platform_data mioa701_mci_info = ;
static struct resource strataflash_resource = ;
static struct physmap_flash_data strataflash_data = ;
static struct platform_device strataflash = ;
#define RESUME_ENABLE_ADDR	0xa020b000
#define RESUME_ENABLE_VAL	0x0f0f0f0f
#define RESUME_BT_ADDR		0xa020b020
#define RESUME_UNKNOWN_ADDR	0xa020b024
#define RESUME_VECTOR_ADDR	0xa0100000
#define BOOTSTRAP_WORDS		mioa701_bootstrap_lg/4
static u32 *save_buffer;
static void install_bootstrap(void)
static int mioa701_sys_suspend(void)
static void mioa701_sys_resume(void)
static struct syscore_ops mioa701_syscore_ops = ;
static int __init bootstrap_init(void)
static void bootstrap_exit(void)
static char *supplicants[] = ;
static int is_ac_connected(void)
static void mioa701_set_charge(int flags)
static struct pda_power_pdata power_pdata = ;
static struct resource power_resources[] = ;
static struct platform_device power_dev = ;
static struct wm97xx_batt_pdata mioa701_battery_data = ;
static struct wm97xx_pdata mioa701_wm97xx_pdata = ;
static struct regulator_consumer_supply max1586_consumers[] = ;
static struct regulator_init_data max1586_v3_info = ;
static struct max1586_subdev_data max1586_subdevs[] = ;
static struct max1586_platform_data max1586_info = ;
struct pxacamera_platform_data mioa701_pxacamera_platform_data = ;
static struct i2c_board_info __initdata mioa701_pi2c_devices[] = ;
static struct i2c_board_info mioa701_i2c_devices[] = ;
static struct soc_camera_link iclink = ;
struct i2c_pxa_platform_data i2c_pdata = ;
static pxa2xx_audio_ops_t mioa701_ac97_info = ;
#define MIO_PARENT_DEV(var, strname, tparent, pdata)	\
static struct platform_device var = ;
#define MIO_SIMPLE_DEV(var, strname, pdata)	\
MIO_PARENT_DEV(var, strname, NULL, pdata)
MIO_SIMPLE_DEV(mioa701_gpio_keys, "gpio-keys",	    &mioa701_gpio_keys_data)
MIO_PARENT_DEV(mioa701_backlight, "pwm-backlight",  &pxa27x_device_pwm0.dev,
&mioa701_backlight_data);
MIO_SIMPLE_DEV(mioa701_led,	  "leds-gpio",	    &gpio_led_info)
MIO_SIMPLE_DEV(pxa2xx_pcm,	  "pxa2xx-pcm",	    NULL)
MIO_SIMPLE_DEV(mioa701_sound,	  "mioa701-wm9713", NULL)
MIO_SIMPLE_DEV(mioa701_board,	  "mioa701-board",  NULL)
MIO_SIMPLE_DEV(gpio_vbus,	  "gpio-vbus",      &gpio_vbus_data);
MIO_SIMPLE_DEV(mioa701_camera,	  "soc-camera-pdrv",&iclink);
static struct platform_device *devices[] __initdata = ;
static void mioa701_machine_exit(void);
static void mioa701_poweroff(void)
static void mioa701_restart(char c, const char *cmd)
static struct gpio_ress global_gpios[] = ;
static void __init mioa701_machine_init(void)
static void mioa701_machine_exit(void)
MACHINE_START(MIOA701, "MIO A701")
.boot_params	= 0xa0000100,
.map_io		= &pxa27x_map_io,
.init_irq	= &pxa27x_init_irq,
.init_machine	= mioa701_machine_init,
.timer		= &pxa_timer,
MACHINE_END
