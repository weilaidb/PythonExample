static struct mtd_partition shannon_partitions[] = ;
static struct flash_platform_data shannon_flash_data = ;
static struct resource shannon_flash_resource = ;
static struct mcp_plat_data shannon_mcp_data = ;
static void __init shannon_init(void)
static void __init shannon_map_io(void)
MACHINE_START(SHANNON, "Shannon (AKA: Tuxscreen)")
.boot_params	= 0xc0000100,
.map_io		= shannon_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= shannon_init,
MACHINE_END
