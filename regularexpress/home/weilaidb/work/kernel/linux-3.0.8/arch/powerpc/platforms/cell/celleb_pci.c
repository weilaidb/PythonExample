#undef DEBUG
#define MAX_PCI_DEVICES    32
#define MAX_PCI_FUNCTIONS   8
#define MAX_PCI_BASE_ADDRS  3
struct celleb_pci_resource ;
struct celleb_pci_private ;
static inline u8 celleb_fake_config_readb(void *addr)
static inline u16 celleb_fake_config_readw(void *addr)
static inline u32 celleb_fake_config_readl(void *addr)
static inline void celleb_fake_config_writeb(u32 val, void *addr)
static inline void celleb_fake_config_writew(u32 val, void *addr)
static inline void celleb_fake_config_writel(u32 val, void *addr)
static unsigned char *get_fake_config_start(struct pci_controller *hose,
int devno, int fn)
static struct celleb_pci_resource *get_resource_start(
struct pci_controller *hose,
int devno, int fn)
static void celleb_config_read_fake(unsigned char *config, int where,
int size, u32 *val)
static void celleb_config_write_fake(unsigned char *config, int where,
int size, u32 val)
static int celleb_fake_pci_read_config(struct pci_bus *bus,
unsigned int devfn, int where, int size, u32 *val)
static int celleb_fake_pci_write_config(struct pci_bus *bus,
unsigned int devfn, int where, int size, u32 val)
static struct pci_ops celleb_fake_pci_ops = ;
static inline void celleb_setup_pci_base_addrs(struct pci_controller *hose,
unsigned int devno, unsigned int fn,
unsigned int num_base_addr)
static int __init celleb_setup_fake_pci_device(struct device_node *node,
struct pci_controller *hose)
static int __init phb_set_bus_ranges(struct device_node *dev,
struct pci_controller *phb)
static void __init celleb_alloc_private_mem(struct pci_controller *hose)
static int __init celleb_setup_fake_pci(struct device_node *dev,
struct pci_controller *phb)
static struct celleb_phb_spec celleb_fake_pci_spec __initdata = ;
static struct of_device_id celleb_phb_match[] __initdata = ;
int __init celleb_setup_phb(struct pci_controller *phb)
int celleb_pci_probe_mode(struct pci_bus *bus)
