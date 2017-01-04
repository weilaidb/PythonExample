void kirkwood_enable_pcie(void)
void __init kirkwood_pcie_id(u32 *dev, u32 *rev)
struct pcie_port ;
static int pcie_port_map[2];
static int num_pcie_ports;
static inline struct pcie_port *bus_to_port(struct pci_bus *bus)
static int pcie_valid_config(struct pcie_port *pp, int bus, int dev)
static int pcie_rd_conf(struct pci_bus *bus, u32 devfn, int where,
int size, u32 *val)
static int pcie_wr_conf(struct pci_bus *bus, u32 devfn,
int where, int size, u32 val)
static struct pci_ops pcie_ops = ;
static void __init pcie0_ioresources_init(struct pcie_port *pp)
static void __init pcie1_ioresources_init(struct pcie_port *pp)
static int __init kirkwood_pcie_setup(int nr, struct pci_sys_data *sys)
static void __devinit rc_pci_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_MARVELL, PCI_ANY_ID, rc_pci_fixup);
static struct pci_bus __init *
kirkwood_pcie_scan_bus(int nr, struct pci_sys_data *sys)
static int __init kirkwood_pcie_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci kirkwood_pci __initdata = ;
static void __init add_pcie_port(int index, unsigned long base)
void __init kirkwood_pcie_init(unsigned int portmask)
