enum cns3xxx_access_type ;
struct cns3xxx_pcie ;
static struct cns3xxx_pcie cns3xxx_pcie[];
static struct cns3xxx_pcie *sysdata_to_cnspci(void *sysdata)
static struct cns3xxx_pcie *pdev_to_cnspci(struct pci_dev *dev)
static struct cns3xxx_pcie *pbus_to_cnspci(struct pci_bus *bus)
static void __iomem *cns3xxx_pci_cfg_base(struct pci_bus *bus,
unsigned int devfn, int where)
static int cns3xxx_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int cns3xxx_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static int cns3xxx_pci_setup(int nr, struct pci_sys_data *sys)
static struct pci_ops cns3xxx_pcie_ops = ;
static struct pci_bus *cns3xxx_pci_scan_bus(int nr, struct pci_sys_data *sys)
static int cns3xxx_pcie_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct cns3xxx_pcie cns3xxx_pcie[] = ;
static void __init cns3xxx_pcie_check_link(struct cns3xxx_pcie *cnspci)
static void __init cns3xxx_pcie_hw_init(struct cns3xxx_pcie *cnspci)
static int cns3xxx_pcie_abort_handler(unsigned long addr, unsigned int fsr,
struct pt_regs *regs)
static int __init cns3xxx_pcie_init(void)
device_initcall(cns3xxx_pcie_init);
