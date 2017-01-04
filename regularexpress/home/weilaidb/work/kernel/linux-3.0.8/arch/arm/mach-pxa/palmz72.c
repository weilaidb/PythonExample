static unsigned long palmz72_pin_config[] __initdata = ;
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int palmz72_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data palmz72_keypad_platform_data = ;
static void __init palmz72_kpc_init(void)
static inline void palmz72_kpc_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device palmz72_leds = ;
static void __init palmz72_leds_init(void)
static inline void palmz72_leds_init(void)
#define PALMZ72_SAVE_DWORD ((unsigned long *)0xc0000050)
static struct palmz72_resume_info palmz72_resume_info = ;
static unsigned long store_ptr;
static int palmz72_pm_suspend(void)
static void palmz72_pm_resume(void)
static struct syscore_ops palmz72_pm_syscore_ops = ;
static int __init palmz72_pm_init(void)
device_initcall(palmz72_pm_init);
#if defined(CONFIG_SOC_CAMERA_OV9640) || \
defined(CONFIG_SOC_CAMERA_OV9640_MODULE)
static struct pxacamera_platform_data palmz72_pxacamera_platform_data = ;
static struct i2c_board_info palmz72_i2c_device[] = ;
static int palmz72_camera_power(struct device *dev, int power)
static int palmz72_camera_reset(struct device *dev)
static struct soc_camera_link palmz72_iclink = ;
static struct i2c_gpio_platform_data palmz72_i2c_bus_data = ;
static struct platform_device palmz72_i2c_bus_device = ;
static struct platform_device palmz72_camera = ;
static struct gpio palmz72_camera_gpios[] = ;
static inline void __init palmz72_cam_gpio_init(void)
static void __init palmz72_camera_init(void)
static inline void palmz72_camera_init(void)
static void __init palmz72_init(void)
MACHINE_START(PALMZ72, "Palm Zire72")
.boot_params	= 0xa0000100,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= palmz72_init
MACHINE_END
