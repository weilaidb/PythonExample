#define __OF_ADDRESS_H
extern u64 of_translate_address(struct device_node *np, const __be32 *addr);
extern int of_address_to_resource(struct device_node *dev, int index,
struct resource *r);
extern void __iomem *of_iomap(struct device_node *device, int index);
extern const u32 *of_get_address(struct device_node *dev, int index,
u64 *size, unsigned int *flags);
static inline unsigned long pci_address_to_pio(phys_addr_t addr)
#define pci_address_to_pio pci_address_to_pio
extern const __be32 *of_get_pci_address(struct device_node *dev, int bar_no,
u64 *size, unsigned int *flags);
extern int of_pci_address_to_resource(struct device_node *dev, int bar,
struct resource *r);
static inline int of_pci_address_to_resource(struct device_node *dev, int bar,
struct resource *r)
static inline const __be32 *of_get_pci_address(struct device_node *dev,
int bar_no, u64 *size, unsigned int *flags)
