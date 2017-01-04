static const struct vio_device_id *vio_match_device(
const struct vio_device_id *matches,
const struct vio_dev *dev)
static int vio_bus_match(struct device *dev, struct device_driver *drv)
static int vio_device_probe(struct device *dev)
static int vio_device_remove(struct device *dev)
static ssize_t devspec_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute vio_dev_attrs[] = ;
static struct bus_type vio_bus_type = ;
int vio_register_driver(struct vio_driver *viodrv)
EXPORT_SYMBOL(vio_register_driver);
void vio_unregister_driver(struct vio_driver *viodrv)
EXPORT_SYMBOL(vio_unregister_driver);
static void vio_dev_release(struct device *dev)
static ssize_t
show_pciobppath_attr(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(obppath, S_IRUSR | S_IRGRP | S_IROTH,
show_pciobppath_attr, NULL);
static struct device_node *cdev_node;
static struct vio_dev *root_vdev;
static u64 cdev_cfg_handle;
static void vio_fill_channel_info(struct mdesc_handle *hp, u64 mp,
struct vio_dev *vdev)
static struct vio_dev *vio_create_one(struct mdesc_handle *hp, u64 mp,
struct device *parent)
static void vio_add(struct mdesc_handle *hp, u64 node)
static int vio_md_node_match(struct device *dev, void *arg)
static void vio_remove(struct mdesc_handle *hp, u64 node)
static struct mdesc_notifier_client vio_device_notifier = ;
static void vio_add_ds(struct mdesc_handle *hp, u64 node)
static struct mdesc_notifier_client vio_ds_notifier = ;
static const char *channel_devices_node = "channel-devices";
static const char *channel_devices_compat = "SUNW,sun4v-channel-devices";
static const char *cfg_handle_prop = "cfg-handle";
static int __init vio_init(void)
postcore_initcall(vio_init);
