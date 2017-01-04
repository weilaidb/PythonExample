static struct mtd_partition nanoengine_partitions[] = ;
static struct flash_platform_data nanoengine_flash_data = ;
static struct resource nanoengine_flash_resources[] = ;
static struct map_desc nanoengine_io_desc[] __initdata = ;
static void __init nanoengine_map_io(void)
static void __init nanoengine_init(void)
MACHINE_START(NANOENGINE, "BSE nanoEngine")
.boot_params	= 0xc0000000,
.map_io		= nanoengine_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= nanoengine_init,
MACHINE_END
