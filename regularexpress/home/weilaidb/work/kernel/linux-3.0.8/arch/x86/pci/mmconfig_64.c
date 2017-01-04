#define PREFIX "PCI: "
static char __iomem *pci_dev_base(unsigned int seg, unsigned int bus, unsigned int devfn)
static int pci_mmcfg_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int pci_mmcfg_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
static struct pci_raw_ops pci_mmcfg = ;
static void __iomem * __init mcfg_ioremap(struct pci_mmcfg_region *cfg)
int __init pci_mmcfg_arch_init(void)
void __init pci_mmcfg_arch_free(void)
