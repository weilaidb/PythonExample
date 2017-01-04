static struct mtd_partition h5000_flash0_partitions[] = ;
static struct mtd_partition h5000_flash1_partitions[] = ;
static struct physmap_flash_data h5000_flash0_data = ;
static struct physmap_flash_data h5000_flash1_data = ;
static struct resource h5000_flash0_resources = ;
static struct resource h5000_flash1_resources = ;
static struct platform_device h5000_flash[] = ;
static struct pxa2xx_udc_mach_info h5000_udc_mach_info __initdata = ;
static unsigned long h5000_pin_config[] __initdata = ;
static void fix_msc(void)
static struct platform_device *devices[] __initdata = ;
static void __init h5000_init(void)
MACHINE_START(H5400, "HP iPAQ H5000")
.boot_params = 0xa0000100,
.map_io = pxa25x_map_io,
.init_irq = pxa25x_init_irq,
.timer = &pxa_timer,
.init_machine = h5000_init,
MACHINE_END
