static struct map_desc realview_pba8_io_desc[] __initdata = ;
static void __init realview_pba8_map_io(void)
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
#define PBA8_SMC_IRQ
#define MPMC_IRQ
#define PBA8_CLCD_IRQ
#define DMAC_IRQ
#define SCTL_IRQ
#define PBA8_WATCHDOG_IRQ
#define PBA8_GPIO0_IRQ
#define GPIO1_IRQ
#define PBA8_RTC_IRQ
#define SCI_IRQ
#define PBA8_UART0_IRQ
#define PBA8_UART1_IRQ
#define PBA8_UART2_IRQ
#define PBA8_UART3_IRQ
#define PBA8_SSP_IRQ
AMBA_DEVICE(aaci,	"fpga:aaci",	AACI,		NULL);
AMBA_DEVICE(mmc0,	"fpga:mmc0",	MMCI0,		&realview_mmc0_plat_data);
AMBA_DEVICE(kmi0,	"fpga:kmi0",	KMI0,		NULL);
AMBA_DEVICE(kmi1,	"fpga:kmi1",	KMI1,		NULL);
AMBA_DEVICE(uart3,	"fpga:uart3",	PBA8_UART3,	NULL);
AMBA_DEVICE(smc,	"dev:smc",	PBA8_SMC,	NULL);
AMBA_DEVICE(sctl,	"dev:sctl",	SCTL,		NULL);
AMBA_DEVICE(wdog,	"dev:wdog",	PBA8_WATCHDOG, NULL);
AMBA_DEVICE(gpio0,	"dev:gpio0",	PBA8_GPIO0,	&gpio0_plat_data);
AMBA_DEVICE(gpio1,	"dev:gpio1",	GPIO1,		&gpio1_plat_data);
AMBA_DEVICE(gpio2,	"dev:gpio2",	GPIO2,		&gpio2_plat_data);
AMBA_DEVICE(rtc,	"dev:rtc",	PBA8_RTC,	NULL);
AMBA_DEVICE(sci0,	"dev:sci0",	SCI,		NULL);
AMBA_DEVICE(uart0,	"dev:uart0",	PBA8_UART0,	NULL);
AMBA_DEVICE(uart1,	"dev:uart1",	PBA8_UART1,	NULL);
AMBA_DEVICE(uart2,	"dev:uart2",	PBA8_UART2,	NULL);
AMBA_DEVICE(ssp0,	"dev:ssp0",	PBA8_SSP,	&ssp0_plat_data);
AMBA_DEVICE(clcd,	"issp:clcd",	PBA8_CLCD,	&clcd_plat_data);
AMBA_DEVICE(dmac,	"issp:dmac",	DMAC,		NULL);
static struct amba_device *amba_devs[] __initdata = ;
static struct resource realview_pba8_flash_resource[] = ;
static struct resource realview_pba8_smsc911x_resources[] = ;
static struct resource realview_pba8_isp1761_resources[] = ;
static struct resource pmu_resource = ;
static struct platform_device pmu_device = ;
static void __init gic_init_irq(void)
static void __init realview_pba8_timer_init(void)
static struct sys_timer realview_pba8_timer = ;
static void realview_pba8_reset(char mode)
static void __init realview_pba8_init(void)
MACHINE_START(REALVIEW_PBA8, "ARM-RealView PB-A8")
.boot_params	= PLAT_PHYS_OFFSET + 0x00000100,
.fixup		= realview_fixup,
.map_io		= realview_pba8_map_io,
.init_early	= realview_init_early,
.init_irq	= gic_init_irq,
.timer		= &realview_pba8_timer,
.init_machine	= realview_pba8_init,
MACHINE_END
