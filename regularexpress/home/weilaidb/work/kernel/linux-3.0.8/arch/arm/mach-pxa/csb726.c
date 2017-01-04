static unsigned long csb726_pin_config[] = ;
static struct pxamci_platform_data csb726_mci = ;
static struct pxaohci_platform_data csb726_ohci_platform_data = ;
static struct mtd_partition csb726_flash_partitions[] = ;
static struct physmap_flash_data csb726_flash_data = ;
static struct resource csb726_flash_resources[] = ;
static struct platform_device csb726_flash = ;
static struct resource csb726_sm501_resources[] = ;
static struct sm501_initdata csb726_sm501_initdata = ;
static struct sm501_platdata csb726_sm501_platdata = ;
static struct platform_device csb726_sm501 = ;
static struct resource csb726_lan_resources[] = ;
struct smsc911x_platform_config csb726_lan_config = ;
static struct platform_device csb726_lan = ;
static struct platform_device *devices[] __initdata = ;
static void __init csb726_init(void)
MACHINE_START(CSB726, "Cogent CSB726")
.boot_params	= 0xa0000100,
.map_io         = pxa27x_map_io,
.init_irq       = pxa27x_init_irq,
.init_machine   = csb726_init,
.timer          = &pxa_timer,
MACHINE_END
