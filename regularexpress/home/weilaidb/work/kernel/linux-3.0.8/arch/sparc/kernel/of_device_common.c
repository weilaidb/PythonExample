unsigned int irq_of_parse_and_map(struct device_node *node, int index)
EXPORT_SYMBOL(irq_of_parse_and_map);
int of_address_to_resource(struct device_node *node, int index,
struct resource *r)
EXPORT_SYMBOL_GPL(of_address_to_resource);
void __iomem *of_iomap(struct device_node *node, int index)
EXPORT_SYMBOL(of_iomap);
void of_propagate_archdata(struct platform_device *bus)
static void get_cells(struct device_node *dp, int *addrc, int *sizec)
void of_bus_default_count_cells(struct device_node *dev, int *addrc, int *sizec)
int of_out_of_range(const u32 *addr, const u32 *base,
const u32 *size, int na, int ns)
int of_bus_default_map(u32 *addr, const u32 *range, int na, int ns, int pna)
unsigned long of_bus_default_get_flags(const u32 *addr, unsigned long flags)
int of_bus_sbus_match(struct device_node *np)
void of_bus_sbus_count_cells(struct device_node *child, int *addrc, int *sizec)
