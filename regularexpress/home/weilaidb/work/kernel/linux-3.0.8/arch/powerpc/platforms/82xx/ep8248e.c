static u8 __iomem *ep8248e_bcsr;
static struct device_node *ep8248e_bcsr_node;
#define BCSR7_SCC2_ENABLE 0x10
#define BCSR8_PHY1_ENABLE 0x80
#define BCSR8_PHY1_POWER  0x40
#define BCSR8_PHY2_ENABLE 0x20
#define BCSR8_PHY2_POWER  0x10
#define BCSR8_MDIO_READ   0x04
#define BCSR8_MDIO_CLOCK  0x02
#define BCSR8_MDIO_DATA   0x01
#define BCSR9_USB_ENABLE  0x80
#define BCSR9_USB_POWER   0x40
#define BCSR9_USB_HOST    0x20
#define BCSR9_USB_FULL_SPEED_TARGET 0x10
static void __init ep8248e_pic_init(void)
static void ep8248e_set_mdc(struct mdiobb_ctrl *ctrl, int level)
static void ep8248e_set_mdio_dir(struct mdiobb_ctrl *ctrl, int output)
static void ep8248e_set_mdio_data(struct mdiobb_ctrl *ctrl, int data)
static int ep8248e_get_mdio_data(struct mdiobb_ctrl *ctrl)
static const struct mdiobb_ops ep8248e_mdio_ops = ;
static struct mdiobb_ctrl ep8248e_mdio_ctrl = ;
static int __devinit ep8248e_mdio_probe(struct platform_device *ofdev)
static int ep8248e_mdio_remove(struct platform_device *ofdev)
static const struct of_device_id ep8248e_mdio_match[] = ;
static struct platform_driver ep8248e_mdio_driver = ;
struct cpm_pin ;
static __initdata struct cpm_pin ep8248e_pins[] = ;
static void __init init_ioports(void)
static void __init ep8248e_setup_arch(void)
static  __initdata struct of_device_id of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(ep8248e, declare_of_platform_devices);
static int __init ep8248e_probe(void)
define_machine(ep8248e)
;
