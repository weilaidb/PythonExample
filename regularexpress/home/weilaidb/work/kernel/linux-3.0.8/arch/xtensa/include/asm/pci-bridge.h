#define _XTENSA_PCI_BRIDGE_H
struct device_node;
struct pci_controller;
extern int pciauto_bus_scan(struct pci_controller *, int);
struct pci_space ;
struct pci_controller ;
static inline void pcibios_init_resource(struct resource *res,
unsigned long start, unsigned long end, int flags, char *name)
int early_read_config_byte(struct pci_controller*, int, int, int, u8*);
int early_read_config_word(struct pci_controller*, int, int, int, u16*);
int early_read_config_dword(struct pci_controller*, int, int, int, u32*);
int early_write_config_byte(struct pci_controller*, int, int, int, u8);
int early_write_config_word(struct pci_controller*, int, int, int, u16);
int early_write_config_dword(struct pci_controller*, int, int, int, u32);
