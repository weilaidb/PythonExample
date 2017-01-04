#define DRIVER_NAME "memstick"
static unsigned int cmd_retries = 3;
module_param(cmd_retries, uint, 0644);
static struct workqueue_struct *workqueue;
static DEFINE_IDR(memstick_host_idr);
static DEFINE_SPINLOCK(memstick_host_lock);
static int memstick_dev_match(struct memstick_dev *card,
struct memstick_device_id *id)
static int memstick_bus_match(struct device *dev, struct device_driver *drv)
static int memstick_uevent(struct device *dev, struct kobj_uevent_env *env)
static int memstick_device_probe(struct device *dev)
static int memstick_device_remove(struct device *dev)
static int memstick_device_suspend(struct device *dev, pm_message_t state)
static int memstick_device_resume(struct device *dev)
#define memstick_device_suspend NULL
#define memstick_device_resume NULL
#define MEMSTICK_ATTR(name, format)                                           \
static ssize_t name##_show(struct device *dev, struct device_attribute *attr, \
char *buf)                                        \
MEMSTICK_ATTR(type, "%02X");
MEMSTICK_ATTR(category, "%02X");
MEMSTICK_ATTR(class, "%02X");
#define MEMSTICK_ATTR_RO(name) __ATTR(name, S_IRUGO, name##_show, NULL)
static struct device_attribute memstick_dev_attrs[] = ;
static struct bus_type memstick_bus_type = ;
static void memstick_free(struct device *dev)
static struct class memstick_host_class = ;
static void memstick_free_card(struct device *dev)
static int memstick_dummy_check(struct memstick_dev *card)
void memstick_detect_change(struct memstick_host *host)
EXPORT_SYMBOL(memstick_detect_change);
int memstick_next_req(struct memstick_host *host, struct memstick_request **mrq)
EXPORT_SYMBOL(memstick_next_req);
void memstick_new_req(struct memstick_host *host)
EXPORT_SYMBOL(memstick_new_req);
void memstick_init_req_sg(struct memstick_request *mrq, unsigned char tpc,
const struct scatterlist *sg)
EXPORT_SYMBOL(memstick_init_req_sg);
void memstick_init_req(struct memstick_request *mrq, unsigned char tpc,
const void *buf, size_t length)
EXPORT_SYMBOL(memstick_init_req);
static int h_memstick_read_dev_id(struct memstick_dev *card,
struct memstick_request **mrq)
static int h_memstick_set_rw_addr(struct memstick_dev *card,
struct memstick_request **mrq)
int memstick_set_rw_addr(struct memstick_dev *card)
EXPORT_SYMBOL(memstick_set_rw_addr);
static struct memstick_dev *memstick_alloc_card(struct memstick_host *host)
static int memstick_power_on(struct memstick_host *host)
static void memstick_check(struct work_struct *work)
struct memstick_host *memstick_alloc_host(unsigned int extra,
struct device *dev)
EXPORT_SYMBOL(memstick_alloc_host);
int memstick_add_host(struct memstick_host *host)
EXPORT_SYMBOL(memstick_add_host);
void memstick_remove_host(struct memstick_host *host)
EXPORT_SYMBOL(memstick_remove_host);
void memstick_free_host(struct memstick_host *host)
EXPORT_SYMBOL(memstick_free_host);
void memstick_suspend_host(struct memstick_host *host)
EXPORT_SYMBOL(memstick_suspend_host);
void memstick_resume_host(struct memstick_host *host)
EXPORT_SYMBOL(memstick_resume_host);
int memstick_register_driver(struct memstick_driver *drv)
EXPORT_SYMBOL(memstick_register_driver);
void memstick_unregister_driver(struct memstick_driver *drv)
EXPORT_SYMBOL(memstick_unregister_driver);
static int __init memstick_init(void)
static void __exit memstick_exit(void)
module_init(memstick_init);
module_exit(memstick_exit);
MODULE_AUTHOR("Alex Dubov");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Sony MemoryStick core driver");
