static unsigned int vme_bus_numbers;
static DEFINE_MUTEX(vme_bus_num_mtx);
static void __exit vme_exit(void);
static int __init vme_init(void);
static struct vme_bridge *dev_to_bridge(struct device *dev)
static struct vme_bridge *find_bridge(struct vme_resource *resource)
void *vme_alloc_consistent(struct vme_resource *resource, size_t size,
dma_addr_t *dma)
EXPORT_SYMBOL(vme_alloc_consistent);
void vme_free_consistent(struct vme_resource *resource, size_t size,
void *vaddr, dma_addr_t dma)
EXPORT_SYMBOL(vme_free_consistent);
size_t vme_get_size(struct vme_resource *resource)
EXPORT_SYMBOL(vme_get_size);
static int vme_check_window(vme_address_t aspace, unsigned long long vme_base,
unsigned long long size)
struct vme_resource *vme_slave_request(struct device *dev,
vme_address_t address, vme_cycle_t cycle)
EXPORT_SYMBOL(vme_slave_request);
int vme_slave_set(struct vme_resource *resource, int enabled,
unsigned long long vme_base, unsigned long long size,
dma_addr_t buf_base, vme_address_t aspace, vme_cycle_t cycle)
EXPORT_SYMBOL(vme_slave_set);
int vme_slave_get(struct vme_resource *resource, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
dma_addr_t *buf_base, vme_address_t *aspace, vme_cycle_t *cycle)
EXPORT_SYMBOL(vme_slave_get);
void vme_slave_free(struct vme_resource *resource)
EXPORT_SYMBOL(vme_slave_free);
struct vme_resource *vme_master_request(struct device *dev,
vme_address_t address, vme_cycle_t cycle, vme_width_t dwidth)
EXPORT_SYMBOL(vme_master_request);
int vme_master_set(struct vme_resource *resource, int enabled,
unsigned long long vme_base, unsigned long long size,
vme_address_t aspace, vme_cycle_t cycle, vme_width_t dwidth)
EXPORT_SYMBOL(vme_master_set);
int vme_master_get(struct vme_resource *resource, int *enabled,
unsigned long long *vme_base, unsigned long long *size,
vme_address_t *aspace, vme_cycle_t *cycle, vme_width_t *dwidth)
EXPORT_SYMBOL(vme_master_get);
ssize_t vme_master_read(struct vme_resource *resource, void *buf, size_t count,
loff_t offset)
EXPORT_SYMBOL(vme_master_read);
ssize_t vme_master_write(struct vme_resource *resource, void *buf,
size_t count, loff_t offset)
EXPORT_SYMBOL(vme_master_write);
unsigned int vme_master_rmw(struct vme_resource *resource, unsigned int mask,
unsigned int compare, unsigned int swap, loff_t offset)
EXPORT_SYMBOL(vme_master_rmw);
void vme_master_free(struct vme_resource *resource)
EXPORT_SYMBOL(vme_master_free);
struct vme_resource *vme_dma_request(struct device *dev, vme_dma_route_t route)
EXPORT_SYMBOL(vme_dma_request);
struct vme_dma_list *vme_new_dma_list(struct vme_resource *resource)
EXPORT_SYMBOL(vme_new_dma_list);
struct vme_dma_attr *vme_dma_pattern_attribute(u32 pattern,
vme_pattern_t type)
EXPORT_SYMBOL(vme_dma_pattern_attribute);
struct vme_dma_attr *vme_dma_pci_attribute(dma_addr_t address)
EXPORT_SYMBOL(vme_dma_pci_attribute);
struct vme_dma_attr *vme_dma_vme_attribute(unsigned long long address,
vme_address_t aspace, vme_cycle_t cycle, vme_width_t dwidth)
EXPORT_SYMBOL(vme_dma_vme_attribute);
void vme_dma_free_attribute(struct vme_dma_attr *attributes)
EXPORT_SYMBOL(vme_dma_free_attribute);
int vme_dma_list_add(struct vme_dma_list *list, struct vme_dma_attr *src,
struct vme_dma_attr *dest, size_t count)
EXPORT_SYMBOL(vme_dma_list_add);
int vme_dma_list_exec(struct vme_dma_list *list)
EXPORT_SYMBOL(vme_dma_list_exec);
int vme_dma_list_free(struct vme_dma_list *list)
EXPORT_SYMBOL(vme_dma_list_free);
int vme_dma_free(struct vme_resource *resource)
EXPORT_SYMBOL(vme_dma_free);
void vme_irq_handler(struct vme_bridge *bridge, int level, int statid)
EXPORT_SYMBOL(vme_irq_handler);
int vme_irq_request(struct device *dev, int level, int statid,
void (*callback)(int, int, void *),
void *priv_data)
EXPORT_SYMBOL(vme_irq_request);
void vme_irq_free(struct device *dev, int level, int statid)
EXPORT_SYMBOL(vme_irq_free);
int vme_irq_generate(struct device *dev, int level, int statid)
EXPORT_SYMBOL(vme_irq_generate);
struct vme_resource *vme_lm_request(struct device *dev)
EXPORT_SYMBOL(vme_lm_request);
int vme_lm_count(struct vme_resource *resource)
EXPORT_SYMBOL(vme_lm_count);
int vme_lm_set(struct vme_resource *resource, unsigned long long lm_base,
vme_address_t aspace, vme_cycle_t cycle)
EXPORT_SYMBOL(vme_lm_set);
int vme_lm_get(struct vme_resource *resource, unsigned long long *lm_base,
vme_address_t *aspace, vme_cycle_t *cycle)
EXPORT_SYMBOL(vme_lm_get);
int vme_lm_attach(struct vme_resource *resource, int monitor,
void (*callback)(int))
EXPORT_SYMBOL(vme_lm_attach);
int vme_lm_detach(struct vme_resource *resource, int monitor)
EXPORT_SYMBOL(vme_lm_detach);
void vme_lm_free(struct vme_resource *resource)
EXPORT_SYMBOL(vme_lm_free);
int vme_slot_get(struct device *bus)
EXPORT_SYMBOL(vme_slot_get);
static int vme_alloc_bus_num(void)
static void vme_free_bus_num(int bus)
int vme_register_bridge(struct vme_bridge *bridge)
EXPORT_SYMBOL(vme_register_bridge);
void vme_unregister_bridge(struct vme_bridge *bridge)
EXPORT_SYMBOL(vme_unregister_bridge);
int vme_register_driver(struct vme_driver *drv)
EXPORT_SYMBOL(vme_register_driver);
void vme_unregister_driver(struct vme_driver *drv)
EXPORT_SYMBOL(vme_unregister_driver);
static int vme_calc_slot(struct device *dev)
static struct vme_driver *dev_to_vme_driver(struct device *dev)
static int vme_bus_match(struct device *dev, struct device_driver *drv)
static int vme_bus_probe(struct device *dev)
static int vme_bus_remove(struct device *dev)
struct bus_type vme_bus_type = ;
EXPORT_SYMBOL(vme_bus_type);
static int __init vme_init(void)
static void __exit vme_exit(void)
MODULE_DESCRIPTION("VME bridge driver framework");
MODULE_AUTHOR("Martyn Welch <martyn.welch@ge.com");
MODULE_LICENSE("GPL");
module_init(vme_init);
module_exit(vme_exit);
