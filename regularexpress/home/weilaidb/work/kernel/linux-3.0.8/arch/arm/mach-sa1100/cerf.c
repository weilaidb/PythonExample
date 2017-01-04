static struct resource cerfuart2_resources[] = ;
static struct platform_device cerfuart2_device = ;
static struct platform_device *cerf_devices[] __initdata = ;
#  define CERF_FLASH_SIZE	0x02000000
#elif defined CONFIG_SA1100_CERF_FLASH_16MB
#  define CERF_FLASH_SIZE	0x01000000
#elif defined CONFIG_SA1100_CERF_FLASH_8MB
#  define CERF_FLASH_SIZE	0x00800000
#  error "Undefined flash size for CERF"
static struct mtd_partition cerf_partitions[] = ;
static struct flash_platform_data cerf_flash_data = ;
static struct resource cerf_flash_resource = ;
static void __init cerf_init_irq(void)
static struct map_desc cerf_io_desc[] __initdata = ;
static void __init cerf_map_io(void)
static struct mcp_plat_data cerf_mcp_data = ;
static void __init cerf_init(void)
MACHINE_START(CERF, "Intrinsyc CerfBoard/CerfCube")
.map_io		= cerf_map_io,
.init_irq	= cerf_init_irq,
.timer		= &sa1100_timer,
.init_machine	= cerf_init,
MACHINE_END
