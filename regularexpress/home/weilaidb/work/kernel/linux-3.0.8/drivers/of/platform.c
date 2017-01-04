static int of_dev_node_match(struct device *dev, void *data)
struct platform_device *of_find_device_by_node(struct device_node *np)
EXPORT_SYMBOL(of_find_device_by_node);
#if defined(CONFIG_PPC_DCR)
#if !defined(CONFIG_SPARC)
void of_device_make_bus_id(struct device *dev)
struct platform_device *of_device_alloc(struct device_node *np,
const char *bus_id,
struct device *parent)
EXPORT_SYMBOL(of_device_alloc);
struct platform_device *of_platform_device_create(struct device_node *np,
const char *bus_id,
struct device *parent)
EXPORT_SYMBOL(of_platform_device_create);
static int of_platform_bus_create(struct device_node *bus,
const struct of_device_id *matches,
struct device *parent)
int of_platform_bus_probe(struct device_node *root,
const struct of_device_id *matches,
struct device *parent)
EXPORT_SYMBOL(of_platform_bus_probe);
