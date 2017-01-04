#define DRIVER_NAME "tifm_core"
#define DRIVER_VERSION "0.8"
static struct workqueue_struct *workqueue;
static DEFINE_IDR(tifm_adapter_idr);
static DEFINE_SPINLOCK(tifm_adapter_lock);
static const char *tifm_media_type_name(unsigned char type, unsigned char nt)
static int tifm_dev_match(struct tifm_dev *sock, struct tifm_device_id *id)
static int tifm_bus_match(struct device *dev, struct device_driver *drv)
static int tifm_uevent(struct device *dev, struct kobj_uevent_env *env)
static int tifm_device_probe(struct device *dev)
static void tifm_dummy_event(struct tifm_dev *sock)
static int tifm_device_remove(struct device *dev)
static int tifm_device_suspend(struct device *dev, pm_message_t state)
static int tifm_device_resume(struct device *dev)
#define tifm_device_suspend NULL
#define tifm_device_resume NULL
static ssize_t type_show(struct device *dev, struct device_attribute *attr,
char *buf)
static struct device_attribute tifm_dev_attrs[] = ;
static struct bus_type tifm_bus_type = ;
static void tifm_free(struct device *dev)
static struct class tifm_adapter_class = ;
struct tifm_adapter *tifm_alloc_adapter(unsigned int num_sockets,
struct device *dev)
EXPORT_SYMBOL(tifm_alloc_adapter);
int tifm_add_adapter(struct tifm_adapter *fm)
EXPORT_SYMBOL(tifm_add_adapter);
void tifm_remove_adapter(struct tifm_adapter *fm)
EXPORT_SYMBOL(tifm_remove_adapter);
void tifm_free_adapter(struct tifm_adapter *fm)
EXPORT_SYMBOL(tifm_free_adapter);
void tifm_free_device(struct device *dev)
EXPORT_SYMBOL(tifm_free_device);
struct tifm_dev *tifm_alloc_device(struct tifm_adapter *fm, unsigned int id,
unsigned char type)
EXPORT_SYMBOL(tifm_alloc_device);
void tifm_eject(struct tifm_dev *sock)
EXPORT_SYMBOL(tifm_eject);
int tifm_has_ms_pif(struct tifm_dev *sock)
EXPORT_SYMBOL(tifm_has_ms_pif);
int tifm_map_sg(struct tifm_dev *sock, struct scatterlist *sg, int nents,
int direction)
EXPORT_SYMBOL(tifm_map_sg);
void tifm_unmap_sg(struct tifm_dev *sock, struct scatterlist *sg, int nents,
int direction)
EXPORT_SYMBOL(tifm_unmap_sg);
void tifm_queue_work(struct work_struct *work)
EXPORT_SYMBOL(tifm_queue_work);
int tifm_register_driver(struct tifm_driver *drv)
EXPORT_SYMBOL(tifm_register_driver);
void tifm_unregister_driver(struct tifm_driver *drv)
EXPORT_SYMBOL(tifm_unregister_driver);
static int __init tifm_init(void)
static void __exit tifm_exit(void)
subsys_initcall(tifm_init);
module_exit(tifm_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Dubov");
MODULE_DESCRIPTION("TI FlashMedia core driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
