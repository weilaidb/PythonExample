#define NO_IRQ 0
unsigned int irq_of_parse_and_map(struct device_node *dev, int index)
EXPORT_SYMBOL_GPL(irq_of_parse_and_map);
struct device_node *of_irq_find_parent(struct device_node *child)
int of_irq_map_raw(struct device_node *parent, const __be32 *intspec,
u32 ointsize, const __be32 *addr, struct of_irq *out_irq)
EXPORT_SYMBOL_GPL(of_irq_map_raw);
int of_irq_map_one(struct device_node *device, int index, struct of_irq *out_irq)
EXPORT_SYMBOL_GPL(of_irq_map_one);
int of_irq_to_resource(struct device_node *dev, int index, struct resource *r)
EXPORT_SYMBOL_GPL(of_irq_to_resource);
int of_irq_count(struct device_node *dev)
int of_irq_to_resource_table(struct device_node *dev, struct resource *res,
int nr_irqs)
