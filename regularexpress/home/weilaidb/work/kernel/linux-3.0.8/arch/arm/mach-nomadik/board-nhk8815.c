#define SRC_CR_INIT_MASK	0x00007fff
#define SRC_CR_INIT_VAL		0x2aaa8000
static struct resource nhk8815_nand_resources[] = ;
static int nhk8815_nand_init(void)
static struct mtd_partition nhk8815_partitions[] = ;
static struct nomadik_nand_platform_data nhk8815_nand_data = ;
static struct platform_device nhk8815_nand_device = ;
static struct mtd_partition nhk8815_onenand_partitions[] = ;
static struct onenand_platform_data nhk8815_onenand_data = ;
static struct resource nhk8815_onenand_resource[] = ;
static struct platform_device nhk8815_onenand_device = ;
static void __init nhk8815_onenand_init(void)
#define __MEM_4K_RESOURCE(x) \
.res =
static struct amba_device uart0_device = ;
static struct amba_device uart1_device = ;
static struct amba_device *amba_devs[] __initdata = ;
static struct resource nhk8815_eth_resources[] = ;
static struct platform_device nhk8815_eth_device = ;
static int __init nhk8815_eth_init(void)
device_initcall(nhk8815_eth_init);
static struct platform_device *nhk8815_platform_devices[] __initdata = ;
static void __init nomadik_timer_init(void)
static struct sys_timer nomadik_timer = ;
static void __init nhk8815_platform_init(void)
MACHINE_START(NOMADIK, "NHK8815")
.boot_params	= 0x100,
.map_io		= cpu8815_map_io,
.init_irq	= cpu8815_init_irq,
.timer		= &nomadik_timer,
.init_machine	= nhk8815_platform_init,
MACHINE_END
