static struct wusbhc *usbhc_dev_to_wusbhc(struct device *dev)
static ssize_t wusb_trust_timeout_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t wusb_trust_timeout_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_trust_timeout, 0644, wusb_trust_timeout_show,
wusb_trust_timeout_store);
static ssize_t wusb_chid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t wusb_chid_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_chid, 0644, wusb_chid_show, wusb_chid_store);
static ssize_t wusb_phy_rate_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t wusb_phy_rate_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_phy_rate, 0644, wusb_phy_rate_show, wusb_phy_rate_store);
static struct attribute *wusbhc_attrs[] = ;
static struct attribute_group wusbhc_attr_group = ;
int wusbhc_create(struct wusbhc *wusbhc)
EXPORT_SYMBOL_GPL(wusbhc_create);
static inline struct kobject *wusbhc_kobj(struct wusbhc *wusbhc)
int wusbhc_b_create(struct wusbhc *wusbhc)
EXPORT_SYMBOL_GPL(wusbhc_b_create);
void wusbhc_b_destroy(struct wusbhc *wusbhc)
EXPORT_SYMBOL_GPL(wusbhc_b_destroy);
void wusbhc_destroy(struct wusbhc *wusbhc)
EXPORT_SYMBOL_GPL(wusbhc_destroy);
struct workqueue_struct *wusbd;
EXPORT_SYMBOL_GPL(wusbd);
#define CLUSTER_IDS 32
static DECLARE_BITMAP(wusb_cluster_id_table, CLUSTER_IDS);
static DEFINE_SPINLOCK(wusb_cluster_ids_lock);
u8 wusb_cluster_id_get(void)
EXPORT_SYMBOL_GPL(wusb_cluster_id_get);
void wusb_cluster_id_put(u8 id)
EXPORT_SYMBOL_GPL(wusb_cluster_id_put);
void wusbhc_giveback_urb(struct wusbhc *wusbhc, struct urb *urb, int status)
EXPORT_SYMBOL_GPL(wusbhc_giveback_urb);
void wusbhc_reset_all(struct wusbhc *wusbhc)
EXPORT_SYMBOL_GPL(wusbhc_reset_all);
static struct notifier_block wusb_usb_notifier = ;
static int __init wusbcore_init(void)
module_init(wusbcore_init);
static void __exit wusbcore_exit(void)
module_exit(wusbcore_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Wireless USB core");
MODULE_LICENSE("GPL");
