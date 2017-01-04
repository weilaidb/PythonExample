#define mmcfg_virt_addr ((void __iomem *) fix_to_virt(FIX_PCIE_MCFG))
static u32 mmcfg_last_accessed_device;
static int mmcfg_last_accessed_cpu;
static u32 get_base_addr(unsigned int seg, int bus, unsigned devfn)
static void pci_exp_set_dev_base(unsigned int base, int bus, int devfn)
static int pci_mmcfg_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int pci_mmcfg_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
static struct pci_raw_ops pci_mmcfg = ;
int __init pci_mmcfg_arch_init(void)
void __init pci_mmcfg_arch_free(void)
