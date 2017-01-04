struct resource_list_x ;
#define free_list(type, head) do  while (0)
int pci_realloc_enable = 0;
#define pci_realloc_enabled() pci_realloc_enable
void pci_realloc(void)
static void add_to_list(struct resource_list_x *head,
struct pci_dev *dev, struct resource *res,
resource_size_t add_size)
static void add_to_failed_list(struct resource_list_x *head,
struct pci_dev *dev, struct resource *res)
static void __dev_sort_resources(struct pci_dev *dev,
struct resource_list *head)
static inline void reset_resource(struct resource *res)
static void adjust_resources_sorted(struct resource_list_x *add_head,
struct resource_list *head)
static void assign_requested_resources_sorted(struct resource_list *head,
struct resource_list_x *fail_head)
static void __assign_resources_sorted(struct resource_list *head,
struct resource_list_x *add_head,
struct resource_list_x *fail_head)
static void pdev_assign_resources_sorted(struct pci_dev *dev,
struct resource_list_x *fail_head)
static void pbus_assign_resources_sorted(const struct pci_bus *bus,
struct resource_list_x *add_head,
struct resource_list_x *fail_head)
void pci_setup_cardbus(struct pci_bus *bus)
EXPORT_SYMBOL(pci_setup_cardbus);
static void pci_setup_bridge_io(struct pci_bus *bus)
static void pci_setup_bridge_mmio(struct pci_bus *bus)
static void pci_setup_bridge_mmio_pref(struct pci_bus *bus)
static void __pci_setup_bridge(struct pci_bus *bus, unsigned long type)
static void pci_setup_bridge(struct pci_bus *bus)
static void pci_bridge_check_ranges(struct pci_bus *bus)
static struct resource *find_free_bus_resource(struct pci_bus *bus, unsigned long type)
static resource_size_t calculate_iosize(resource_size_t size,
resource_size_t min_size,
resource_size_t size1,
resource_size_t old_size,
resource_size_t align)
static resource_size_t calculate_memsize(resource_size_t size,
resource_size_t min_size,
resource_size_t size1,
resource_size_t old_size,
resource_size_t align)
static void pbus_size_io(struct pci_bus *bus, resource_size_t min_size,
resource_size_t add_size, struct resource_list_x *add_head)
static int pbus_size_mem(struct pci_bus *bus, unsigned long mask,
unsigned long type, resource_size_t min_size,
resource_size_t add_size,
struct resource_list_x *add_head)
static void pci_bus_size_cardbus(struct pci_bus *bus)
void __ref __pci_bus_size_bridges(struct pci_bus *bus,
struct resource_list_x *add_head)
void __ref pci_bus_size_bridges(struct pci_bus *bus)
EXPORT_SYMBOL(pci_bus_size_bridges);
static void __ref __pci_bus_assign_resources(const struct pci_bus *bus,
struct resource_list_x *add_head,
struct resource_list_x *fail_head)
void __ref pci_bus_assign_resources(const struct pci_bus *bus)
EXPORT_SYMBOL(pci_bus_assign_resources);
static void __ref __pci_bridge_assign_resources(const struct pci_dev *bridge,
struct resource_list_x *fail_head)
static void pci_bridge_release_resources(struct pci_bus *bus,
unsigned long type)
enum release_type ;
static void __ref pci_bus_release_bridge_resources(struct pci_bus *bus,
unsigned long type,
enum release_type rel_type)
static void pci_bus_dump_res(struct pci_bus *bus)
static void pci_bus_dump_resources(struct pci_bus *bus)
static int __init pci_bus_get_depth(struct pci_bus *bus)
static int __init pci_get_max_depth(void)
void __init
pci_assign_unassigned_resources(void)
void pci_assign_unassigned_bridge_resources(struct pci_dev *bridge)
EXPORT_SYMBOL_GPL(pci_assign_unassigned_bridge_resources);
