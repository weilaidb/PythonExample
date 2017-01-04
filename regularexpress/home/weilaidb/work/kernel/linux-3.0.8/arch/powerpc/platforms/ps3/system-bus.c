static struct device ps3_system_bus = ;
struct  static usage_hack;
static int ps3_is_device(struct ps3_system_bus_device *dev, u64 bus_id,
u64 dev_id)
static int ps3_open_hv_device_sb(struct ps3_system_bus_device *dev)
static int ps3_close_hv_device_sb(struct ps3_system_bus_device *dev)
static int ps3_open_hv_device_gpu(struct ps3_system_bus_device *dev)
static int ps3_close_hv_device_gpu(struct ps3_system_bus_device *dev)
int ps3_open_hv_device(struct ps3_system_bus_device *dev)
EXPORT_SYMBOL_GPL(ps3_open_hv_device);
int ps3_close_hv_device(struct ps3_system_bus_device *dev)
EXPORT_SYMBOL_GPL(ps3_close_hv_device);
#define dump_mmio_region(_a) _dump_mmio_region(_a, __func__, __LINE__)
static void _dump_mmio_region(const struct ps3_mmio_region* r,
const char* func, int line)
static int ps3_sb_mmio_region_create(struct ps3_mmio_region *r)
static int ps3_ioc0_mmio_region_create(struct ps3_mmio_region *r)
int ps3_mmio_region_create(struct ps3_mmio_region *r)
EXPORT_SYMBOL_GPL(ps3_mmio_region_create);
static int ps3_sb_free_mmio_region(struct ps3_mmio_region *r)
static int ps3_ioc0_free_mmio_region(struct ps3_mmio_region *r)
int ps3_free_mmio_region(struct ps3_mmio_region *r)
EXPORT_SYMBOL_GPL(ps3_free_mmio_region);
static const struct ps3_mmio_region_ops ps3_mmio_sb_region_ops = ;
static const struct ps3_mmio_region_ops ps3_mmio_ioc0_region_ops = ;
int ps3_mmio_region_init(struct ps3_system_bus_device *dev,
struct ps3_mmio_region *r, unsigned long bus_addr, unsigned long len,
enum ps3_mmio_page_size page_size)
EXPORT_SYMBOL_GPL(ps3_mmio_region_init);
static int ps3_system_bus_match(struct device *_dev,
struct device_driver *_drv)
static int ps3_system_bus_probe(struct device *_dev)
static int ps3_system_bus_remove(struct device *_dev)
static void ps3_system_bus_shutdown(struct device *_dev)
static int ps3_system_bus_uevent(struct device *_dev, struct kobj_uevent_env *env)
static ssize_t modalias_show(struct device *_dev, struct device_attribute *a,
char *buf)
static struct device_attribute ps3_system_bus_dev_attrs[] = ;
struct bus_type ps3_system_bus_type = ;
static int __init ps3_system_bus_init(void)
core_initcall(ps3_system_bus_init);
static void * ps3_alloc_coherent(struct device *_dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void ps3_free_coherent(struct device *_dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
static dma_addr_t ps3_sb_map_page(struct device *_dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs)
static dma_addr_t ps3_ioc0_map_page(struct device *_dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void ps3_unmap_page(struct device *_dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction direction, struct dma_attrs *attrs)
static int ps3_sb_map_sg(struct device *_dev, struct scatterlist *sgl,
int nents, enum dma_data_direction direction, struct dma_attrs *attrs)
static int ps3_ioc0_map_sg(struct device *_dev, struct scatterlist *sg,
int nents,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void ps3_sb_unmap_sg(struct device *_dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction, struct dma_attrs *attrs)
static void ps3_ioc0_unmap_sg(struct device *_dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int ps3_dma_supported(struct device *_dev, u64 mask)
static struct dma_map_ops ps3_sb_dma_ops = ;
static struct dma_map_ops ps3_ioc0_dma_ops = ;
static void ps3_system_bus_release_device(struct device *_dev)
int ps3_system_bus_device_register(struct ps3_system_bus_device *dev)
EXPORT_SYMBOL_GPL(ps3_system_bus_device_register);
int ps3_system_bus_driver_register(struct ps3_system_bus_driver *drv)
EXPORT_SYMBOL_GPL(ps3_system_bus_driver_register);
void ps3_system_bus_driver_unregister(struct ps3_system_bus_driver *drv)
EXPORT_SYMBOL_GPL(ps3_system_bus_driver_unregister);
