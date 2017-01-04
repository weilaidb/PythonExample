static unsigned long treo_pin_config[] __initdata = ;
static unsigned long treo680_pin_config[] __initdata = ;
static unsigned long centro685_pin_config[] __initdata = ;
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int treo680_matrix_keys[] = ;
static unsigned int centro_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data treo680_keypad_pdata = ;
static void __init palmtreo_kpc_init(void)
static inline void palmtreo_kpc_init(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static struct pxaohci_platform_data treo680_ohci_info = ;
static void __init palmtreo_uhc_init(void)
static inline void palmtreo_uhc_init(void)
static struct gpio_led treo680_gpio_leds[] = ;
static struct gpio_led_platform_data treo680_gpio_led_info = ;
static struct gpio_led centro_gpio_leds[] = ;
static struct gpio_led_platform_data centro_gpio_led_info = ;
static struct platform_device palmtreo_leds = ;
static void __init palmtreo_leds_init(void)
static inline void palmtreo_leds_init(void)
static void __init treo_reserve(void)
static void __init palmphone_common_init(void)
static void __init treo680_init(void)
static void __init centro_init(void)
MACHINE_START(TREO680, "Palm Treo 680")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.reserve	= treo_reserve,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine   = treo680_init,
MACHINE_END
MACHINE_START(CENTRO, "Palm Centro 685")
.boot_params    = 0xa0000100,
.map_io         = pxa27x_map_io,
.reserve	= treo_reserve,
.init_irq       = pxa27x_init_irq,
.timer          = &pxa_timer,
.init_machine	= centro_init,
MACHINE_END
