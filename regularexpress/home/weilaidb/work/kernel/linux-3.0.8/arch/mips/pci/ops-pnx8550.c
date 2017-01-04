static inline void clear_status(void)
static inline unsigned int
calc_cfg_addr(struct pci_bus *bus, unsigned int devfn, int where)
static int
config_access(unsigned int pci_cmd, struct pci_bus *bus, unsigned int devfn, int where, unsigned int pci_mode, unsigned int *val)
static int
read_config_byte(struct pci_bus *bus, unsigned int devfn, int where, u8 * val)
static int
read_config_word(struct pci_bus *bus, unsigned int devfn, int where, u16 * val)
static int
read_config_dword(struct pci_bus *bus, unsigned int devfn, int where, u32 * val)
static int
write_config_byte(struct pci_bus *bus, unsigned int devfn, int where, u8 val)
static int
write_config_word(struct pci_bus *bus, unsigned int devfn, int where, u16 val)
static int
write_config_dword(struct pci_bus *bus, unsigned int devfn, int where, u32 val)
static int config_read(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 * val)
static int config_write(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 val)
struct pci_ops pnx8550_pci_ops = ;
