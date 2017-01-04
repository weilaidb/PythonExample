static void __init ixdp2400_timer_init(void)
static struct sys_timer ixdp2400_timer = ;
void __init ixdp2400_pci_preinit(void)
int ixdp2400_pci_setup(int nr, struct pci_sys_data *sys)
static int __init ixdp2400_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void ixdp2400_pci_postinit(void)
static struct hw_pci ixdp2400_pci __initdata = ;
int __init ixdp2400_pci_init(void)
subsys_initcall(ixdp2400_pci_init);
void __init ixdp2400_init_irq(void)
MACHINE_START(IXDP2400, "Intel IXDP2400 Development Platform")
.boot_params	= 0x00000100,
.map_io		= ixdp2x00_map_io,
.init_irq	= ixdp2400_init_irq,
.timer		= &ixdp2400_timer,
.init_machine	= ixdp2x00_init_machine,
MACHINE_END
