static struct device ibmebus_bus_device = ;
struct bus_type ibmebus_bus_type;
static struct of_device_id __initdata ibmebus_matches[] = ;
static void *ibmebus_alloc_coherent(struct device *dev,
size_t size,
dma_addr_t *dma_handle,
gfp_t flag)
static void ibmebus_free_coherent(struct device *dev,
size_t size, void *vaddr,
dma_addr_t dma_handle)
static dma_addr_t ibmebus_map_page(struct device *dev,
struct page *page,
unsigned long offset,
size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void ibmebus_unmap_page(struct device *dev,
dma_addr_t dma_addr,
size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static int ibmebus_map_sg(struct device *dev,
struct scatterlist *sgl,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void ibmebus_unmap_sg(struct device *dev,
struct scatterlist *sg,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int ibmebus_dma_supported(struct device *dev, u64 mask)
static struct dma_map_ops ibmebus_dma_ops = ;
static int ibmebus_match_path(struct device *dev, void *data)
static int ibmebus_match_node(struct device *dev, void *data)
static int ibmebus_create_device(struct device_node *dn)
static int ibmebus_create_devices(const struct of_device_id *matches)
int ibmebus_register_driver(struct of_platform_driver *drv)
EXPORT_SYMBOL(ibmebus_register_driver);
void ibmebus_unregister_driver(struct of_platform_driver *drv)
EXPORT_SYMBOL(ibmebus_unregister_driver);
int ibmebus_request_irq(u32 ist, irq_handler_t handler,
unsigned long irq_flags, const char *devname,
void *dev_id)
EXPORT_SYMBOL(ibmebus_request_irq);
void ibmebus_free_irq(u32 ist, void *dev_id)
EXPORT_SYMBOL(ibmebus_free_irq);
static char *ibmebus_chomp(const char *in, size_t count)
static ssize_t ibmebus_store_probe(struct bus_type *bus,
const char *buf, size_t count)
static ssize_t ibmebus_store_remove(struct bus_type *bus,
const char *buf, size_t count)
static struct bus_attribute ibmebus_bus_attrs[] = ;
static int ibmebus_bus_bus_match(struct device *dev, struct device_driver *drv)
static int ibmebus_bus_device_probe(struct device *dev)
static int ibmebus_bus_device_remove(struct device *dev)
static void ibmebus_bus_device_shutdown(struct device *dev)
static ssize_t devspec_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t modalias_show(struct device *dev,
struct device_attribute *attr, char *buf)
struct device_attribute ibmebus_bus_device_attrs[] = ;
static int ibmebus_bus_legacy_suspend(struct device *dev, pm_message_t mesg)
static int ibmebus_bus_legacy_resume(struct device *dev)
static int ibmebus_bus_pm_prepare(struct device *dev)
static void ibmebus_bus_pm_complete(struct device *dev)
static int ibmebus_bus_pm_suspend(struct device *dev)
static int ibmebus_bus_pm_suspend_noirq(struct device *dev)
static int ibmebus_bus_pm_resume(struct device *dev)
static int ibmebus_bus_pm_resume_noirq(struct device *dev)
#define ibmebus_bus_pm_suspend		NULL
#define ibmebus_bus_pm_resume		NULL
#define ibmebus_bus_pm_suspend_noirq	NULL
#define ibmebus_bus_pm_resume_noirq	NULL
static int ibmebus_bus_pm_freeze(struct device *dev)
static int ibmebus_bus_pm_freeze_noirq(struct device *dev)
static int ibmebus_bus_pm_thaw(struct device *dev)
static int ibmebus_bus_pm_thaw_noirq(struct device *dev)
static int ibmebus_bus_pm_poweroff(struct device *dev)
static int ibmebus_bus_pm_poweroff_noirq(struct device *dev)
static int ibmebus_bus_pm_restore(struct device *dev)
static int ibmebus_bus_pm_restore_noirq(struct device *dev)
#define ibmebus_bus_pm_freeze		NULL
#define ibmebus_bus_pm_thaw		NULL
#define ibmebus_bus_pm_poweroff		NULL
#define ibmebus_bus_pm_restore		NULL
#define ibmebus_bus_pm_freeze_noirq	NULL
#define ibmebus_bus_pm_thaw_noirq		NULL
#define ibmebus_bus_pm_poweroff_noirq	NULL
#define ibmebus_bus_pm_restore_noirq	NULL
static struct dev_pm_ops ibmebus_bus_dev_pm_ops = ;
#define IBMEBUS_BUS_PM_OPS_PTR	(&ibmebus_bus_dev_pm_ops)
#define IBMEBUS_BUS_PM_OPS_PTR	NULL
struct bus_type ibmebus_bus_type = ;
EXPORT_SYMBOL(ibmebus_bus_type);
static int __init ibmebus_bus_init(void)
postcore_initcall(ibmebus_bus_init);
