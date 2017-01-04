struct cpm_pin ;
static struct cpm_pin ep88xc_pins[] = ;
static void __init init_ioports(void)
static u8 __iomem *ep88xc_bcsr;
#define BCSR7_SCC2_ENABLE 0x10
#define BCSR8_PHY1_ENABLE 0x80
#define BCSR8_PHY1_POWER  0x40
#define BCSR8_PHY2_ENABLE 0x20
#define BCSR8_PHY2_POWER  0x10
#define BCSR9_USB_ENABLE  0x80
#define BCSR9_USB_POWER   0x40
#define BCSR9_USB_HOST    0x20
#define BCSR9_USB_FULL_SPEED_TARGET 0x10
static void __init ep88xc_setup_arch(void)
static int __init ep88xc_probe(void)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(ep88xc, declare_of_platform_devices);
define_machine(ep88xc) ;
