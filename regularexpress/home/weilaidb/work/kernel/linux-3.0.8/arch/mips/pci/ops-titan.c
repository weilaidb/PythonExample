#define	TITAN_PCI_0_CONFIG_ADDRESS	0x780
#define	TITAN_PCI_0_CONFIG_DATA		0x784
static int titan_read_config(struct pci_bus *bus, unsigned int devfn, int reg,
int size, u32 * val)
static int titan_write_config(struct pci_bus *bus, unsigned int devfn, int reg,
int size, u32 val)
struct pci_ops titan_pci_ops = ;
