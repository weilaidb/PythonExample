#define MAX_SLOTS		7
#define CONFIG_CMD(bus, devfn, where)   (0x80000000 | (bus->number << 16) | (devfn << 8) | (where & ~3))
static int
via82c505_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
via82c505_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops via82c505_ops = ;
void __init via82c505_preinit(void)
int __init via82c505_setup(int nr, struct pci_sys_data *sys)
struct pci_bus * __init via82c505_scan_bus(int nr, struct pci_sys_data *sysdata)
