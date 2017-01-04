#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
#define LO(reg) (reg / 4)
#define HI(reg) (reg / 4 + 1)
volatile unsigned long *const vrc_pciregs = (void *) Vrc5074_BASE;
static DEFINE_SPINLOCK(nile4_pci_lock);
static int nile4_pcibios_config_access(unsigned char access_type,
struct pci_bus *bus, unsigned int devfn, int where, u32 *val)
static int nile4_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int nile4_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops nile4_pci_ops = ;
