static struct bus_type vio_bus_type;
static struct vio_dev vio_bus_device  = ;
struct vio_cmo_pool ;
#define VIO_CMO_BALANCE_DELAY 100
#define VIO_CMO_BALANCE_CHUNK 131072
struct vio_cmo_dev_entry ;
struct vio_cmo  vio_cmo;
static int vio_cmo_num_OF_devs(void)
static inline int vio_cmo_alloc(struct vio_dev *viodev, size_t size)
static inline void vio_cmo_dealloc(struct vio_dev *viodev, size_t size)
int vio_cmo_entitlement_update(size_t new_entitlement)
static void vio_cmo_balance(struct work_struct *work)
static void *vio_dma_iommu_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void vio_dma_iommu_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static dma_addr_t vio_dma_iommu_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void vio_dma_iommu_unmap_page(struct device *dev, dma_addr_t dma_handle,
size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static int vio_dma_iommu_map_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void vio_dma_iommu_unmap_sg(struct device *dev,
struct scatterlist *sglist, int nelems,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static int vio_dma_iommu_dma_supported(struct device *dev, u64 mask)
struct dma_map_ops vio_dma_mapping_ops = ;
void vio_cmo_set_dev_desired(struct vio_dev *viodev, size_t desired)
static int vio_cmo_bus_probe(struct vio_dev *viodev)
static void vio_cmo_bus_remove(struct vio_dev *viodev)
static void vio_cmo_set_dma_ops(struct vio_dev *viodev)
static void vio_cmo_bus_init(void)
#define viodev_cmo_rd_attr(name)                                        \
static ssize_t viodev_cmo_##name##_show(struct device *dev,             \
struct device_attribute *attr,  \
char *buf)                     \
static ssize_t viodev_cmo_allocs_failed_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t viodev_cmo_allocs_failed_reset(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t viodev_cmo_desired_set(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
viodev_cmo_rd_attr(desired);
viodev_cmo_rd_attr(entitled);
viodev_cmo_rd_attr(allocated);
static ssize_t name_show(struct device *, struct device_attribute *, char *);
static ssize_t devspec_show(struct device *, struct device_attribute *, char *);
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf);
static struct device_attribute vio_cmo_dev_attrs[] = ;
#define viobus_cmo_rd_attr(name)                                        \
static ssize_t                                                          \
viobus_cmo_##name##_show(struct bus_type *bt, char *buf)                \
#define viobus_cmo_pool_rd_attr(name, var)                              \
static ssize_t                                                          \
viobus_cmo_##name##_pool_show_##var(struct bus_type *bt, char *buf)     \
static ssize_t viobus_cmo_high_reset(struct bus_type *bt, const char *buf,
size_t count)
viobus_cmo_rd_attr(entitled);
viobus_cmo_pool_rd_attr(reserve, size);
viobus_cmo_pool_rd_attr(excess, size);
viobus_cmo_pool_rd_attr(excess, free);
viobus_cmo_rd_attr(spare);
viobus_cmo_rd_attr(min);
viobus_cmo_rd_attr(desired);
viobus_cmo_rd_attr(curr);
viobus_cmo_rd_attr(high);
static struct bus_attribute vio_cmo_bus_attrs[] = ;
static void vio_cmo_sysfs_init(void)
int vio_cmo_entitlement_update(size_t new_entitlement)
void vio_cmo_set_dev_desired(struct vio_dev *viodev, size_t desired)
static int vio_cmo_bus_probe(struct vio_dev *viodev)
static void vio_cmo_bus_remove(struct vio_dev *viodev)
static void vio_cmo_set_dma_ops(struct vio_dev *viodev)
static void vio_cmo_bus_init(void)
static void vio_cmo_sysfs_init(void)
EXPORT_SYMBOL(vio_cmo_entitlement_update);
EXPORT_SYMBOL(vio_cmo_set_dev_desired);
static struct iommu_table *vio_build_iommu_table(struct vio_dev *dev)
static const struct vio_device_id *vio_match_device(
const struct vio_device_id *ids, const struct vio_dev *dev)
static int vio_bus_probe(struct device *dev)
static int vio_bus_remove(struct device *dev)
int vio_register_driver(struct vio_driver *viodrv)
EXPORT_SYMBOL(vio_register_driver);
void vio_unregister_driver(struct vio_driver *viodrv)
EXPORT_SYMBOL(vio_unregister_driver);
static void __devinit vio_dev_release(struct device *dev)
struct vio_dev *vio_register_device_node(struct device_node *of_node)
EXPORT_SYMBOL(vio_register_device_node);
static int __init vio_bus_init(void)
__initcall(vio_bus_init);
static ssize_t name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t devspec_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf)
static struct device_attribute vio_dev_attrs[] = ;
void __devinit vio_unregister_device(struct vio_dev *viodev)
EXPORT_SYMBOL(vio_unregister_device);
static int vio_bus_match(struct device *dev, struct device_driver *drv)
static int vio_hotplug(struct device *dev, struct kobj_uevent_env *env)
static struct bus_type vio_bus_type = ;
const void *vio_get_attribute(struct vio_dev *vdev, char *which, int *length)
EXPORT_SYMBOL(vio_get_attribute);
static struct vio_dev *vio_find_name(const char *name)
struct vio_dev *vio_find_node(struct device_node *vnode)
EXPORT_SYMBOL(vio_find_node);
int vio_enable_interrupts(struct vio_dev *dev)
EXPORT_SYMBOL(vio_enable_interrupts);
int vio_disable_interrupts(struct vio_dev *dev)
EXPORT_SYMBOL(vio_disable_interrupts);
