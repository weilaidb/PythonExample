static int titan_ht_config_read_dword(struct pci_bus *bus, unsigned int devfn,
int offset, u32 *val)
static int titan_ht_config_read(struct pci_bus *bus, unsigned int devfn,
int offset, int size, u32 *val)
static inline int titan_ht_config_write_dword(struct pci_bus *bus,
unsigned int devfn, int offset, u32 val)
static int titan_ht_config_write(struct pci_bus *bus, unsigned int devfn,
int offset, int size, u32 val)
struct pci_ops titan_ht_pci_ops = ;
