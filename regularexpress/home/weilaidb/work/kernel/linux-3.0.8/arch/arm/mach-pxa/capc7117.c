static struct pata_platform_info pata_platform_data = ;
static struct resource capc7117_ide_resources[] = ;
static struct platform_device capc7117_ide_device = ;
static void __init capc7117_ide_init(void)
#define	TI16C752_FLAGS		(UPF_BOOT_AUTOCONF | \
UPF_IOREMAP | \
UPF_BUGGY_UART | \
UPF_SKIP_TEST)
#define	TI16C752_UARTCLK	(22118400)
static struct plat_serial8250_port ti16c752_platform_data[] = ;
static struct platform_device ti16c752_device = ;
static void __init capc7117_uarts_init(void)
static void __init capc7117_init(void)
MACHINE_START(CAPC7117,
"Embedian CAPC-7117 evaluation kit based on the MXM-8x10 CoM")
.boot_params = 0xa0000100,
.map_io = pxa3xx_map_io,
.init_irq = pxa3xx_init_irq,
.timer = &pxa_timer,
.init_machine = capc7117_init
MACHINE_END
