#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
#define PCI_CFG_SET(bus, slot, func, off) \
(rc32434_pci->pcicfga = (0x80000000 | \
((bus) << 16) | ((slot)<<11) | \
((func)<<8) | (off)))
static inline int config_access(unsigned char access_type,
struct pci_bus *bus, unsigned int devfn,
unsigned char where, u32 *data)
static int read_config_byte(struct pci_bus *bus, unsigned int devfn,
int where, u8 *val)
static int read_config_word(struct pci_bus *bus, unsigned int devfn,
int where, u16 *val)
static int read_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, u32 *val)
static int
write_config_byte(struct pci_bus *bus, unsigned int devfn, int where,
u8 val)
static int
write_config_word(struct pci_bus *bus, unsigned int devfn, int where,
u16 val)
static int
write_config_dword(struct pci_bus *bus, unsigned int devfn, int where,
u32 val)
static int pci_config_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int pci_config_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops rc32434_pci_ops = ;
