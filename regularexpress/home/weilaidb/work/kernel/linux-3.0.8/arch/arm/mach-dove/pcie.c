struct pcie_port ;
static struct pcie_port pcie_port[2];
static int num_pcie_ports;
static int __init dove_pcie_setup(int nr, struct pci_sys_data *sys)
static struct pcie_port *bus_to_port(int bus)
static int pcie_valid_config(struct pcie_port *pp, int bus, int dev)
static int pcie_rd_conf(struct pci_bus *bus, u32 devfn, int where,
int size, u32 *val)
static int pcie_wr_conf(struct pci_bus *bus, u32 devfn,
int where, int size, u32 val)
static struct pci_ops pcie_ops = ;
static void __devinit rc_pci_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_MARVELL, PCI_ANY_ID, rc_pci_fixup);
static struct pci_bus __init *
dove_pcie_scan_bus(int nr, struct pci_sys_data *sys)
static int __init dove_pcie_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci dove_pci __initdata = ;
static void __init add_pcie_port(int index, unsigned long base)
void __init dove_pcie_init(int init_port0, int init_port1)
