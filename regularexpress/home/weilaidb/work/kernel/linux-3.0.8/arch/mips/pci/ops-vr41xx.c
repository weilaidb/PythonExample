#define PCICONFDREG	(void __iomem *)KSEG1ADDR(0x0f000c14)
#define PCICONFAREG	(void __iomem *)KSEG1ADDR(0x0f000c18)
static inline int set_pci_configuration_address(unsigned char number,
unsigned int devfn, int where)
static int pci_config_read(struct pci_bus *bus, unsigned int devfn, int where,
int size, uint32_t *val)
static int pci_config_write(struct pci_bus *bus, unsigned int devfn, int where,
int size, uint32_t val)
struct pci_ops vr41xx_pci_ops = ;
