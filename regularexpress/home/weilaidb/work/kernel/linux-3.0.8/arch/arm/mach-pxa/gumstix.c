static struct resource flash_resource = ;
static struct mtd_partition gumstix_partitions[] = ;
static struct flash_platform_data gumstix_flash_data = ;
static struct platform_device gumstix_flash_device = ;
static struct platform_device *devices[] __initdata = ;
static struct pxamci_platform_data gumstix_mci_platform_data = ;
static void __init gumstix_mmc_init(void)
static void __init gumstix_mmc_init(void)
static struct gpio_vbus_mach_info gumstix_udc_info = ;
static struct platform_device gumstix_gpio_vbus = ;
static void __init gumstix_udc_init(void)
static void gumstix_udc_init(void)
static void gumstix_setup_bt_clock(void)
static void __init gumstix_bluetooth_init(void)
static void gumstix_bluetooth_init(void)
static unsigned long gumstix_pin_config[] __initdata = ;
int __attribute__((weak)) am200_init(void)
int __attribute__((weak)) am300_init(void)
static void __init carrier_board_init(void)
static void __init gumstix_init(void)
MACHINE_START(GUMSTIX, "Gumstix")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.timer		= &pxa_timer,
.init_machine	= gumstix_init,
MACHINE_END
