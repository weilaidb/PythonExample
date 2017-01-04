static unsigned long palmld_pin_config[] __initdata = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition palmld_partitions[] = ;
static struct physmap_flash_data palmld_flash_data[] = ;
static struct resource palmld_flash_resource = ;
static struct platform_device palmld_flash = ;
static void __init palmld_nor_init(void)
static inline void palmld_nor_init(void)
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int palmld_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data palmld_keypad_platform_data = ;
static void __init palmld_kpc_init(void)
static inline void palmld_kpc_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button palmld_pxa_buttons[] = ;
static struct gpio_keys_platform_data palmld_pxa_keys_data = ;
static struct platform_device palmld_pxa_keys = ;
static void __init palmld_keys_init(void)
static inline void palmld_keys_init(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device palmld_leds = ;
static void __init palmld_leds_init(void)
static inline void palmld_leds_init(void)
#if defined(CONFIG_PATA_PALMLD) || defined(CONFIG_PATA_PALMLD_MODULE)
static struct platform_device palmld_ide_device = ;
static void __init palmld_ide_init(void)
static inline void palmld_ide_init(void)
static struct map_desc palmld_io_desc[] __initdata = ;
static void __init palmld_map_io(void)
static void __init palmld_init(void)
MACHINE_START(PALMLD, "Palm LifeDrive")
.boot_params	= 0xa0000100,
.map_io		= palmld_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= palmld_init
MACHINE_END
