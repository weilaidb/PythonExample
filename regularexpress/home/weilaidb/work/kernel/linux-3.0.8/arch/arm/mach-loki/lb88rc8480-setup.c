#define LB88RC8480_FLASH_BOOT_CS_BASE	0xf8000000
#define LB88RC8480_FLASH_BOOT_CS_SIZE	SZ_128M
#define LB88RC8480_NOR_BOOT_BASE	0xff000000
#define LB88RC8480_NOR_BOOT_SIZE	SZ_16M
static struct mtd_partition lb88rc8480_boot_flash_parts[] = ;
static struct physmap_flash_data lb88rc8480_boot_flash_data = ;
static struct resource lb88rc8480_boot_flash_resource = ;
static struct platform_device lb88rc8480_boot_flash = ;
static struct mv643xx_eth_platform_data lb88rc8480_ge0_data = ;
static void __init lb88rc8480_init(void)
MACHINE_START(LB88RC8480, "Marvell LB88RC8480 Development Board")
.boot_params	= 0x00000100,
.init_machine	= lb88rc8480_init,
.map_io		= loki_map_io,
.init_early	= loki_init_early,
.init_irq	= loki_init_irq,
.timer		= &loki_timer,
MACHINE_END
