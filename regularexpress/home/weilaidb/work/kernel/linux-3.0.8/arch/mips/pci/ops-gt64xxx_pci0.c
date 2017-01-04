#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
#define PCI_CFG_TYPE0_REG_SHF           0
#define PCI_CFG_TYPE0_FUNC_SHF          8
#define PCI_CFG_TYPE1_REG_SHF           0
#define PCI_CFG_TYPE1_FUNC_SHF          8
#define PCI_CFG_TYPE1_DEV_SHF           11
#define PCI_CFG_TYPE1_BUS_SHF           16
static int gt64xxx_pci0_pcibios_config_access(unsigned char access_type,
struct pci_bus *bus, unsigned int devfn, int where, u32 * data)
static int gt64xxx_pci0_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * val)
static int gt64xxx_pci0_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops gt64xxx_pci0_ops = ;
