#undef DEBUG
#define MAX_PCI_DEVICES   32
#define MAX_PCI_FUNCTIONS  8
#define iob()  __asm__ __volatile__("eieio; sync":::"memory")
static inline PCI_IO_ADDR celleb_epci_get_epci_base(
struct pci_controller *hose)
static inline PCI_IO_ADDR celleb_epci_get_epci_cfg(
struct pci_controller *hose)
static inline void clear_and_disable_master_abort_interrupt(
struct pci_controller *hose)
static int celleb_epci_check_abort(struct pci_controller *hose,
PCI_IO_ADDR addr)
static PCI_IO_ADDR celleb_epci_make_config_addr(struct pci_bus *bus,
struct pci_controller *hose, unsigned int devfn, int where)
static int celleb_epci_read_config(struct pci_bus *bus,
unsigned int devfn, int where, int size, u32 *val)
static int celleb_epci_write_config(struct pci_bus *bus,
unsigned int devfn, int where, int size, u32 val)
struct pci_ops celleb_epci_ops = ;
static int __init celleb_epci_init(struct pci_controller *hose)
static int __init celleb_setup_epci(struct device_node *node,
struct pci_controller *hose)
struct celleb_phb_spec celleb_epci_spec __initdata = ;
