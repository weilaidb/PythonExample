#define CX_DEV_NONE 0
#define DEVICE_NAME "tiocx"
#define WIDGET_ID 0
#define TIOCX_DEBUG 0
#if TIOCX_DEBUG
#define DBG(fmt...)    printk(KERN_ALERT fmt)
#define DBG(fmt...)
struct device_attribute dev_attr_cxdev_control;
static int tiocx_match(struct device *dev, struct device_driver *drv)
static int tiocx_uevent(struct device *dev, struct kobj_uevent_env *env)
static void tiocx_bus_release(struct device *dev)
static const struct cx_device_id *cx_device_match(const struct cx_device_id
*ids,
struct cx_dev *cx_device)
static int cx_device_probe(struct device *dev)
static int cx_driver_remove(struct device *dev)
struct bus_type tiocx_bus_type = ;
int cx_driver_register(struct cx_drv *cx_driver)
int cx_driver_unregister(struct cx_drv *cx_driver)
int
cx_device_register(nasid_t nasid, int part_num, int mfg_num,
struct hubdev_info *hubdev, int bt)
int cx_device_unregister(struct cx_dev *cx_dev)
static int cx_device_reload(struct cx_dev *cx_dev)
static inline u64 tiocx_intr_alloc(nasid_t nasid, int widget,
u64 sn_irq_info,
int req_irq, nasid_t req_nasid,
int req_slice)
static inline void tiocx_intr_free(nasid_t nasid, int widget,
struct sn_irq_info *sn_irq_info)
struct sn_irq_info *tiocx_irq_alloc(nasid_t nasid, int widget, int irq,
nasid_t req_nasid, int slice)
void tiocx_irq_free(struct sn_irq_info *sn_irq_info)
u64 tiocx_dma_addr(u64 addr)
u64 tiocx_swin_base(int nasid)
EXPORT_SYMBOL(cx_driver_register);
EXPORT_SYMBOL(cx_driver_unregister);
EXPORT_SYMBOL(cx_device_register);
EXPORT_SYMBOL(cx_device_unregister);
EXPORT_SYMBOL(tiocx_irq_alloc);
EXPORT_SYMBOL(tiocx_irq_free);
EXPORT_SYMBOL(tiocx_bus_type);
EXPORT_SYMBOL(tiocx_dma_addr);
EXPORT_SYMBOL(tiocx_swin_base);
static void tio_conveyor_set(nasid_t nasid, int enable_flag)
#define tio_conveyor_enable(nasid) tio_conveyor_set(nasid, 1)
#define tio_conveyor_disable(nasid) tio_conveyor_set(nasid, 0)
static void tio_corelet_reset(nasid_t nasid, int corelet)
static int is_fpga_tio(int nasid, int *bt)
static int bitstream_loaded(nasid_t nasid)
static int tiocx_reload(struct cx_dev *cx_dev)
static ssize_t show_cxdev_control(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_cxdev_control(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
DEVICE_ATTR(cxdev_control, 0644, show_cxdev_control, store_cxdev_control);
static int __init tiocx_init(void)
static int cx_remove_device(struct device * dev, void * data)
static void __exit tiocx_exit(void)
fs_initcall(tiocx_init);
module_exit(tiocx_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bruce Losure <blosure@sgi.com>");
MODULE_DESCRIPTION("TIOCX module");
MODULE_SUPPORTED_DEVICE(DEVICE_NAME);
