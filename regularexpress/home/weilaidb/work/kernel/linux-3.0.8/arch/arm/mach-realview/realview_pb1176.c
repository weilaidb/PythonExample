static struct map_desc realview_pb1176_io_desc[] __initdata = ;
static void __init realview_pb1176_map_io(void)
static struct pl061_platform_data gpio0_plat_data = ;
static struct pl061_platform_data gpio1_plat_data = ;
static struct pl061_platform_data gpio2_plat_data = ;
static struct pl022_ssp_controller ssp0_plat_data = ;
#define GPIO2_IRQ
#define GPIO3_IRQ
#define AACI_IRQ
#define MMCI0_IRQ
#define KMI0_IRQ
#define KMI1_IRQ
#define PB1176_SMC_IRQ
#define MPMC_IRQ
#define PB1176_CLCD_IRQ
#define SCTL_IRQ
#define PB1176_WATCHDOG_IRQ
#define PB1176_GPIO0_IRQ
#define GPIO1_IRQ
#define PB1176_RTC_IRQ
#define SCI_IRQ
#define PB1176_UART0_IRQ
#define PB1176_UART1_IRQ
#define PB1176_UART2_IRQ
#define PB1176_UART3_IRQ
#define PB1176_UART4_IRQ
#define PB1176_SSP_IRQ
AMBA_DEVICE(aaci,	"fpga:aaci",	AACI,		NULL);
AMBA_DEVICE(mmc0,	"fpga:mmc0",	MMCI0,		&realview_mmc0_plat_data);
AMBA_DEVICE(kmi0,	"fpga:kmi0",	KMI0,		NULL);
AMBA_DEVICE(kmi1,	"fpga:kmi1",	KMI1,		NULL);
AMBA_DEVICE(uart4,	"fpga:uart4",	PB1176_UART4,	NULL);
AMBA_DEVICE(smc,	"dev:smc",	PB1176_SMC,	NULL);
AMBA_DEVICE(sctl,	"dev:sctl",	SCTL,		NULL);
AMBA_DEVICE(wdog,	"dev:wdog",	PB1176_WATCHDOG,	NULL);
AMBA_DEVICE(gpio0,	"dev:gpio0",	PB1176_GPIO0,	&gpio0_plat_data);
AMBA_DEVICE(gpio1,	"dev:gpio1",	GPIO1,		&gpio1_plat_data);
AMBA_DEVICE(gpio2,	"dev:gpio2",	GPIO2,		&gpio2_plat_data);
AMBA_DEVICE(rtc,	"dev:rtc",	PB1176_RTC,	NULL);
AMBA_DEVICE(sci0,	"dev:sci0",	SCI,		NULL);
AMBA_DEVICE(uart0,	"dev:uart0",	PB1176_UART0,	NULL);
AMBA_DEVICE(uart1,	"dev:uart1",	PB1176_UART1,	NULL);
AMBA_DEVICE(uart2,	"dev:uart2",	PB1176_UART2,	NULL);
AMBA_DEVICE(uart3,	"dev:uart3",	PB1176_UART3,	NULL);
AMBA_DEVICE(ssp0,	"dev:ssp0",	PB1176_SSP,	&ssp0_plat_data);
AMBA_DEVICE(clcd,	"dev:clcd",	PB1176_CLCD,	&clcd_plat_data);
static struct amba_device *amba_devs[] __initdata = ;
static struct resource realview_pb1176_flash_resources[] = ;
#define PB1176_FLASH_BLOCKS	2
#define PB1176_FLASH_BLOCKS	1
static struct resource realview_pb1176_smsc911x_resources[] = ;
static struct resource realview_pb1176_isp1761_resources[] = ;
static struct resource pmu_resource = ;
static struct platform_device pmu_device = ;
static struct resource char_lcd_resources[] = ;
static struct platform_device char_lcd_device = ;
static void __init gic_init_irq(void)
static void __init realview_pb1176_timer_init(void)
static struct sys_timer realview_pb1176_timer = ;
static void realview_pb1176_reset(char mode)
static void realview_pb1176_fixup(struct machine_desc *mdesc,
struct tag *tags, char **from,
struct meminfo *meminfo)
static void __init realview_pb1176_init(void)
MACHINE_START(REALVIEW_PB1176, "ARM-RealView PB1176")
.boot_params	= PLAT_PHYS_OFFSET + 0x00000100,
.fixup		= realview_pb1176_fixup,
.map_io		= realview_pb1176_map_io,
.init_early	= realview_init_early,
.init_irq	= gic_init_irq,
.timer		= &realview_pb1176_timer,
.init_machine	= realview_pb1176_init,
MACHINE_END
