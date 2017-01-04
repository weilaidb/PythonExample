#define PCI_CONF1_ADDRESS(bus, devfn, reg) \
(0x80000000 | ((reg & 0xF00) << 16) | (bus << 16) \
| (devfn << 8) | (reg & 0xFC))
static int pci_conf1_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int pci_conf1_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
#undef PCI_CONF1_ADDRESS
struct pci_raw_ops pci_direct_conf1 = ;
#define PCI_CONF2_ADDRESS(dev, reg)	(u16)(0xC000 | (dev << 8) | reg)
static int pci_conf2_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int pci_conf2_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
#undef PCI_CONF2_ADDRESS
struct pci_raw_ops pci_direct_conf2 = ;
static int __init pci_sanity_check(struct pci_raw_ops *o)
static int __init pci_check_type1(void)
static int __init pci_check_type2(void)
void __init pci_direct_init(int type)
int __init pci_direct_probe(void)
