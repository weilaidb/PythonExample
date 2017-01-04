static unsigned int dev_index;
static ssize_t device_show(struct device *_d,
struct device_attribute *attr, char *buf)
static ssize_t vendor_show(struct device *_d,
struct device_attribute *attr, char *buf)
static ssize_t status_show(struct device *_d,
struct device_attribute *attr, char *buf)
static ssize_t modalias_show(struct device *_d,
struct device_attribute *attr, char *buf)
static ssize_t features_show(struct device *_d,
struct device_attribute *attr, char *buf)
static struct device_attribute virtio_dev_attrs[] = ;
static inline int virtio_id_match(const struct virtio_device *dev,
const struct virtio_device_id *id)
static int virtio_dev_match(struct device *_dv, struct device_driver *_dr)
static int virtio_uevent(struct device *_dv, struct kobj_uevent_env *env)
static void add_status(struct virtio_device *dev, unsigned status)
void virtio_check_driver_offered_feature(const struct virtio_device *vdev,
unsigned int fbit)
EXPORT_SYMBOL_GPL(virtio_check_driver_offered_feature);
static int virtio_dev_probe(struct device *_d)
static int virtio_dev_remove(struct device *_d)
static struct bus_type virtio_bus = ;
int register_virtio_driver(struct virtio_driver *driver)
EXPORT_SYMBOL_GPL(register_virtio_driver);
void unregister_virtio_driver(struct virtio_driver *driver)
EXPORT_SYMBOL_GPL(unregister_virtio_driver);
int register_virtio_device(struct virtio_device *dev)
EXPORT_SYMBOL_GPL(register_virtio_device);
void unregister_virtio_device(struct virtio_device *dev)
EXPORT_SYMBOL_GPL(unregister_virtio_device);
static int virtio_init(void)
static void __exit virtio_exit(void)
core_initcall(virtio_init);
module_exit(virtio_exit);
MODULE_LICENSE("GPL");
