#define XCEP_ETH_PHYS		(PXA_CS3_PHYS + 0x00000300)
#define XCEP_ETH_PHYS_END	(PXA_CS3_PHYS + 0x000fffff)
#define XCEP_ETH_ATTR		(PXA_CS3_PHYS + 0x02000000)
#define XCEP_ETH_ATTR_END	(PXA_CS3_PHYS + 0x020fffff)
#define XCEP_ETH_IRQ		IRQ_GPIO0
#define XCEP_CPLD_BASE		0xf0000000
static struct mtd_partition xcep_partitions[] = ;
static struct physmap_flash_data xcep_flash_data[] = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata xcep_smc91x_info = ;
static struct platform_device smc91x_device = ;
static struct platform_device *devices[] __initdata = ;
static struct i2c_pxa_platform_data xcep_i2c_platform_data  = ;
static mfp_cfg_t xcep_pin_config[] __initdata = ;
static void __init xcep_init(void)
MACHINE_START(XCEP, "Iskratel XCEP")
.boot_params	= 0xa0000100,
.init_machine	= xcep_init,
.map_io		= pxa25x_map_io,
.init_irq	= pxa25x_init_irq,
.timer		= &pxa_timer,
MACHINE_END
