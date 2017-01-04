static void __init ixdp2800_timer_init(void)
static struct sys_timer ixdp2800_timer = ;
static void __init ixdp2800_slave_disable_pci_master(void)
static void __init ixdp2800_master_wait_for_slave(void)
static void __init ixdp2800_slave_wait_for_master_enable(void)
void __init ixdp2800_pci_preinit(void)
static void __devinit ixp2800_pci_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_IXP2800, ixp2800_pci_fixup);
static int __init ixdp2800_pci_setup(int nr, struct pci_sys_data *sys)
static int __init ixdp2800_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void __init ixdp2800_master_enable_slave(void)
static void __init ixdp2800_master_wait_for_slave_bus_scan(void)
static void __init ixdp2800_slave_signal_bus_scan_completion(void)
static void __init ixdp2800_pci_postinit(void)
struct __initdata hw_pci ixdp2800_pci __initdata = ;
int __init ixdp2800_pci_init(void)
subsys_initcall(ixdp2800_pci_init);
void __init ixdp2800_init_irq(void)
MACHINE_START(IXDP2800, "Intel IXDP2800 Development Platform")
.boot_params	= 0x00000100,
.map_io		= ixdp2x00_map_io,
.init_irq	= ixdp2800_init_irq,
.timer		= &ixdp2800_timer,
.init_machine	= ixdp2x00_init_machine,
MACHINE_END
