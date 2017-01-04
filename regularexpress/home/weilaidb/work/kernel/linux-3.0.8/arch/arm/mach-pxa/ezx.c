#define EZX_NR_IRQS			(IRQ_BOARD_START + 24)
#define GPIO12_A780_FLIP_LID 		12
#define GPIO15_A1200_FLIP_LID 		15
#define GPIO15_A910_FLIP_LID 		15
#define GPIO12_E680_LOCK_SWITCH 	12
#define GPIO15_E6_LOCK_SWITCH 		15
#define GPIO50_nCAM_EN			50
#define GPIO19_GEN1_CAM_RST		19
#define GPIO28_GEN2_CAM_RST		28
static struct platform_pwm_backlight_data ezx_backlight_data = ;
static struct platform_device ezx_backlight_device = ;
static struct pxafb_mode_info mode_ezx_old = ;
static struct pxafb_mach_info ezx_fb_info_1 = ;
static struct pxafb_mode_info mode_72r89803y01 = ;
static struct pxafb_mach_info ezx_fb_info_2 = ;
static struct platform_device *ezx_devices[] __initdata = ;
static unsigned long ezx_pin_config[] __initdata = ;
#if defined(CONFIG_MACH_EZX_A780) || defined(CONFIG_MACH_EZX_E680)
static unsigned long gen1_pin_config[] __initdata = ;
#if defined(CONFIG_MACH_EZX_A1200) || defined(CONFIG_MACH_EZX_A910) || \
defined(CONFIG_MACH_EZX_E2) || defined(CONFIG_MACH_EZX_E6)
static unsigned long gen2_pin_config[] __initdata = ;
static unsigned long a780_pin_config[] __initdata = ;
static unsigned long e680_pin_config[] __initdata = ;
static unsigned long a1200_pin_config[] __initdata = ;
static unsigned long a910_pin_config[] __initdata = ;
static unsigned long e2_pin_config[] __initdata = ;
static unsigned long e6_pin_config[] __initdata = ;
static unsigned int a780_key_map[] = ;
static struct pxa27x_keypad_platform_data a780_keypad_platform_data = ;
static unsigned int e680_key_map[] = ;
static struct pxa27x_keypad_platform_data e680_keypad_platform_data = ;
static unsigned int a1200_key_map[] = ;
static struct pxa27x_keypad_platform_data a1200_keypad_platform_data = ;
static unsigned int e6_key_map[] = ;
static struct pxa27x_keypad_platform_data e6_keypad_platform_data = ;
static unsigned int a910_key_map[] = ;
static struct pxa27x_keypad_platform_data a910_keypad_platform_data = ;
static unsigned int e2_key_map[] = ;
static struct pxa27x_keypad_platform_data e2_keypad_platform_data = ;
static struct gpio_keys_button a780_buttons[] = ;
static struct gpio_keys_platform_data a780_gpio_keys_platform_data = ;
static struct platform_device a780_gpio_keys = ;
static int a780_camera_init(void)
static int a780_camera_power(struct device *dev, int on)
static int a780_camera_reset(struct device *dev)
struct pxacamera_platform_data a780_pxacamera_platform_data = ;
static struct i2c_board_info a780_camera_i2c_board_info = ;
static struct soc_camera_link a780_iclink = ;
static struct platform_device a780_camera = ;
static struct platform_device *a780_devices[] __initdata = ;
static void __init a780_init(void)
MACHINE_START(EZX_A780, "Motorola EZX A780")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.nr_irqs	= EZX_NR_IRQS,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = a780_init,
MACHINE_END
static struct gpio_keys_button e680_buttons[] = ;
static struct gpio_keys_platform_data e680_gpio_keys_platform_data = ;
static struct platform_device e680_gpio_keys = ;
static struct i2c_board_info __initdata e680_i2c_board_info[] = ;
static struct platform_device *e680_devices[] __initdata = ;
static void __init e680_init(void)
MACHINE_START(EZX_E680, "Motorola EZX E680")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.nr_irqs	= EZX_NR_IRQS,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = e680_init,
MACHINE_END
static struct gpio_keys_button a1200_buttons[] = ;
static struct gpio_keys_platform_data a1200_gpio_keys_platform_data = ;
static struct platform_device a1200_gpio_keys = ;
static struct i2c_board_info __initdata a1200_i2c_board_info[] = ;
static struct platform_device *a1200_devices[] __initdata = ;
static void __init a1200_init(void)
MACHINE_START(EZX_A1200, "Motorola EZX A1200")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.nr_irqs	= EZX_NR_IRQS,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = a1200_init,
MACHINE_END
static struct gpio_keys_button a910_buttons[] = ;
static struct gpio_keys_platform_data a910_gpio_keys_platform_data = ;
static struct platform_device a910_gpio_keys = ;
static int a910_camera_init(void)
static int a910_camera_power(struct device *dev, int on)
static int a910_camera_reset(struct device *dev)
struct pxacamera_platform_data a910_pxacamera_platform_data = ;
static struct i2c_board_info a910_camera_i2c_board_info = ;
static struct soc_camera_link a910_iclink = ;
static struct platform_device a910_camera = ;
static struct lp3944_platform_data a910_lp3944_leds = ;
static struct i2c_board_info __initdata a910_i2c_board_info[] = ;
static struct platform_device *a910_devices[] __initdata = ;
static void __init a910_init(void)
MACHINE_START(EZX_A910, "Motorola EZX A910")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.nr_irqs	= EZX_NR_IRQS,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = a910_init,
MACHINE_END
static struct gpio_keys_button e6_buttons[] = ;
static struct gpio_keys_platform_data e6_gpio_keys_platform_data = ;
static struct platform_device e6_gpio_keys = ;
static struct i2c_board_info __initdata e6_i2c_board_info[] = ;
static struct platform_device *e6_devices[] __initdata = ;
static void __init e6_init(void)
MACHINE_START(EZX_E6, "Motorola EZX E6")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.nr_irqs	= EZX_NR_IRQS,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = e6_init,
MACHINE_END
static struct i2c_board_info __initdata e2_i2c_board_info[] = ;
static struct platform_device *e2_devices[] __initdata = ;
static void __init e2_init(void)
MACHINE_START(EZX_E2, "Motorola EZX E2")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.nr_irqs	= EZX_NR_IRQS,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = e2_init,
MACHINE_END
