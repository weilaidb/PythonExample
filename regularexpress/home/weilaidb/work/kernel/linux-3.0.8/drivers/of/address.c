#define OF_MAX_ADDR_CELLS	4
#define OF_CHECK_COUNTS(na, ns)	((na) > 0 && (na) <= OF_MAX_ADDR_CELLS && \
(ns) > 0)
static struct of_bus *of_match_bus(struct device_node *np);
static int __of_address_to_resource(struct device_node *dev,
const __be32 *addrp, u64 size, unsigned int flags,
struct resource *r);
static void of_dump_addr(const char *s, const __be32 *addr, int na)
static void of_dump_addr(const char *s, const __be32 *addr, int na)
struct of_bus ;
static void of_bus_default_count_cells(struct device_node *dev,
int *addrc, int *sizec)
static u64 of_bus_default_map(u32 *addr, const __be32 *range,
int na, int ns, int pna)
static int of_bus_default_translate(u32 *addr, u64 offset, int na)
static unsigned int of_bus_default_get_flags(const __be32 *addr)
static int of_bus_pci_match(struct device_node *np)
static void of_bus_pci_count_cells(struct device_node *np,
int *addrc, int *sizec)
static unsigned int of_bus_pci_get_flags(const __be32 *addr)
static u64 of_bus_pci_map(u32 *addr, const __be32 *range, int na, int ns,
int pna)
static int of_bus_pci_translate(u32 *addr, u64 offset, int na)
const __be32 *of_get_pci_address(struct device_node *dev, int bar_no, u64 *size,
unsigned int *flags)
EXPORT_SYMBOL(of_get_pci_address);
int of_pci_address_to_resource(struct device_node *dev, int bar,
struct resource *r)
EXPORT_SYMBOL_GPL(of_pci_address_to_resource);
static int of_bus_isa_match(struct device_node *np)
static void of_bus_isa_count_cells(struct device_node *child,
int *addrc, int *sizec)
static u64 of_bus_isa_map(u32 *addr, const __be32 *range, int na, int ns,
int pna)
static int of_bus_isa_translate(u32 *addr, u64 offset, int na)
static unsigned int of_bus_isa_get_flags(const __be32 *addr)
static struct of_bus of_busses[] = ;
static struct of_bus *of_match_bus(struct device_node *np)
static int of_translate_one(struct device_node *parent, struct of_bus *bus,
struct of_bus *pbus, u32 *addr,
int na, int ns, int pna, const char *rprop)
u64 __of_translate_address(struct device_node *dev, const __be32 *in_addr,
const char *rprop)
u64 of_translate_address(struct device_node *dev, const __be32 *in_addr)
EXPORT_SYMBOL(of_translate_address);
u64 of_translate_dma_address(struct device_node *dev, const __be32 *in_addr)
EXPORT_SYMBOL(of_translate_dma_address);
const __be32 *of_get_address(struct device_node *dev, int index, u64 *size,
unsigned int *flags)
EXPORT_SYMBOL(of_get_address);
static int __of_address_to_resource(struct device_node *dev,
const __be32 *addrp, u64 size, unsigned int flags,
struct resource *r)
int of_address_to_resource(struct device_node *dev, int index,
struct resource *r)
EXPORT_SYMBOL_GPL(of_address_to_resource);
void __iomem *of_iomap(struct device_node *np, int index)
EXPORT_SYMBOL(of_iomap);
