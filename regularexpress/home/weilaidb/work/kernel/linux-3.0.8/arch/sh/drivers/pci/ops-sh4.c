#define CONFIG_CMD(bus, devfn, where) \
(0x80000000 | (bus->number << 16) | (devfn << 8) | (where & ~3))
static int sh4_pci_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int sh4_pci_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops sh4_pci_ops = ;
int __attribute__((weak)) pci_fixup_pcic(struct pci_channel *chan)
