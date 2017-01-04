#define pr_fmt(fmt) "PCI: " fmt
struct sh7786_pcie_port ;
static struct sh7786_pcie_port *sh7786_pcie_ports;
static unsigned int nr_ports;
static struct sh7786_pcie_hwops  *sh7786_pcie_hwops;
static struct resource sh7786_pci0_resources[] = ;
static struct resource sh7786_pci1_resources[] = ;
static struct resource sh7786_pci2_resources[] = ;
extern struct pci_ops sh7786_pci_ops;
#define DEFINE_CONTROLLER(start, idx)					\
static struct pci_channel sh7786_pci_channels[] = ;
static struct clk fixed_pciexclkp = ;
static void __devinit sh7786_pci_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_RENESAS, PCI_DEVICE_ID_RENESAS_SH7786,
sh7786_pci_fixup);
static int __init phy_wait_for_ack(struct pci_channel *chan)
static int __init pci_wait_for_irq(struct pci_channel *chan, unsigned int mask)
static void __init phy_write_reg(struct pci_channel *chan, unsigned int addr,
unsigned int lane, unsigned int data)
static int __init pcie_clk_init(struct sh7786_pcie_port *port)
static int __init phy_init(struct sh7786_pcie_port *port)
static void __init pcie_reset(struct sh7786_pcie_port *port)
static int __init pcie_init(struct sh7786_pcie_port *port)
int __init pcibios_map_platform_irq(struct pci_dev *pdev, u8 slot, u8 pin)
static int __init sh7786_pcie_core_init(void)
static void __init sh7786_pcie_init_hw(void *data, async_cookie_t cookie)
static struct sh7786_pcie_hwops sh7786_65nm_pcie_hwops __initdata = ;
static int __init sh7786_pcie_init(void)
arch_initcall(sh7786_pcie_init);
