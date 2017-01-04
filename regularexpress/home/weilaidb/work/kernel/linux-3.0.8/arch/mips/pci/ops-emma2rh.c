#define RTABORT (0x1<<9)
#define RMABORT (0x1<<10)
#define EMMA2RH_PCI_SLOT_NUM 9
static int check_args(struct pci_bus *bus, u32 devfn, u32 * bus_num)
static inline int set_pci_configuration_address(unsigned char bus_num,
unsigned int devfn, int where)
static int pci_config_read(struct pci_bus *bus, unsigned int devfn, int where,
int size, uint32_t * val)
static int pci_config_write(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 val)
struct pci_ops emma2rh_pci_ops = ;
