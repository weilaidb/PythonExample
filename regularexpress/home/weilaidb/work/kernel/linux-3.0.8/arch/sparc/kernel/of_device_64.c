void __iomem *of_ioremap(struct resource *res, unsigned long offset, unsigned long size, char *name)
EXPORT_SYMBOL(of_ioremap);
void of_iounmap(struct resource *res, void __iomem *base, unsigned long size)
EXPORT_SYMBOL(of_iounmap);
static int of_bus_pci_match(struct device_node *np)
static int of_bus_simba_match(struct device_node *np)
static int of_bus_simba_map(u32 *addr, const u32 *range,
int na, int ns, int pna)
static void of_bus_pci_count_cells(struct device_node *np,
int *addrc, int *sizec)
static int of_bus_pci_map(u32 *addr, const u32 *range,
int na, int ns, int pna)
static unsigned long of_bus_pci_get_flags(const u32 *addr, unsigned long flags)
static int of_bus_fhc_match(struct device_node *np)
#define of_bus_fhc_count_cells of_bus_sbus_count_cells
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
static struct device_node * __init
apply_interrupt_map(struct device_node *dp, struct device_node *pp,
const u32 *imap, int imlen, const u32 *imask,
unsigned int *irq_p)
static unsigned int __init pci_irq_swizzle(struct device_node *dp,
struct device_node *pp,
unsigned int irq)
static int of_irq_verbose;
static unsigned int __init build_one_device_irq(struct platform_device *op,
struct device *parent,
unsigned int irq)
static struct platform_device * __init scan_one_device(struct device_node *dp,
struct device *parent)
static void __init scan_tree(struct device_node *dp, struct device *parent)
static int __init scan_of_devices(void)
postcore_initcall(scan_of_devices);
static int __init of_debug(char *str)
__setup("of_debug=", of_debug);
