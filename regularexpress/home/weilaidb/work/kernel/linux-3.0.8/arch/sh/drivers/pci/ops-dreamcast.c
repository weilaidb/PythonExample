static int gapspci_config_access(unsigned char bus, unsigned int devfn)
static int gapspci_read(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 *val)
static int gapspci_write(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 val)
struct pci_ops gapspci_pci_ops = ;
