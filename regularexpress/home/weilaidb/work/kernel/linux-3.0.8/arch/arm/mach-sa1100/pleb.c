#define PLEB_ETH0_P		(0x20000300)
#define PLEB_ETH0_V		(0xf6000300)
#define GPIO_ETH0_IRQ		GPIO_GPIO(21)
#define GPIO_ETH0_EN		GPIO_GPIO(26)
#define IRQ_GPIO_ETH0_IRQ	IRQ_GPIO21
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct platform_device *devices[] __initdata = ;
static struct resource pleb_flash_resources[] = ;
static struct mtd_partition pleb_partitions[] = ;
static struct flash_platform_data pleb_flash_data = ;
static void __init pleb_init(void)
static void __init pleb_map_io(void)
MACHINE_START(PLEB, "PLEB")
.map_io		= pleb_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine   = pleb_init,
MACHINE_END
