#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
#define CFG_SPACE_REG(offset) (void *)CKSEG1ADDR(_pcictrl_bonito_pcicfg + (offset))
#define ID_SEL_BEGIN 10
#define MAX_DEV_NUM (31 - ID_SEL_BEGIN)
static int bonito64_pcibios_config_access(unsigned char access_type,
struct pci_bus *bus,
unsigned int devfn, int where,
u32 * data)
static int bonito64_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * val)
static int bonito64_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops bonito64_pci_ops = ;
