static int of_bus_pci_match(struct device_node *np)
static void of_bus_pci_count_cells(struct device_node *np,
int *addrc, int *sizec)
static int of_bus_pci_map(u32 *addr, const u32 *range,
int na, int ns, int pna)
static unsigned long of_bus_pci_get_flags(const u32 *addr, unsigned long flags)
static unsigned long of_bus_sbus_get_flags(const u32 *addr, unsigned long flags)
static int of_bus_ambapp_match(struct device_node *np)
static void of_bus_ambapp_count_cells(struct device_node *child,
int *addrc, int *sizec)
static int of_bus_ambapp_map(u32 *addr, const u32 *range,
int na, int ns, int pna)
static unsigned long of_bus_ambapp_get_flags(const u32 *addr,
unsigned long flags)
static struct of_bus of_busses[] = ;
static struct of_bus *of_match_bus(struct device_node *np)
static int __init build_one_resource(struct device_node *parent,
struct of_bus *bus,
struct of_bus *pbus,
u32 *addr,
int na, int ns, int pna)
static int __init use_1to1_mapping(struct device_node *pp)
static int of_resource_verbose;
static void __init build_device_resources(struct platform_device *op,
struct device *parent)
static struct platform_device * __init scan_one_device(struct device_node *dp,
struct device *parent)
static void __init scan_tree(struct device_node *dp, struct device *parent)
static int __init scan_of_devices(void)
postcore_initcall(scan_of_devices);
static int __init of_debug(char *str)
__setup("of_debug=", of_debug);
