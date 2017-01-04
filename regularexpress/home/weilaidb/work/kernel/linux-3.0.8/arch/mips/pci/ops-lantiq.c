#define LTQ_PCI_CFG_BUSNUM_SHF 16
#define LTQ_PCI_CFG_DEVNUM_SHF 11
#define LTQ_PCI_CFG_FUNNUM_SHF 8
#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
static int ltq_pci_config_access(unsigned char access_type, struct pci_bus *bus,
unsigned int devfn, unsigned int where, u32 *data)
int ltq_pci_read_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
int ltq_pci_write_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
