#define CBA_NAME_LEN 0x40
struct cbaf ;
static int cbaf_check(struct cbaf *cbaf)
static const struct wusb_cbaf_host_info cbaf_host_info_defaults = ;
static int cbaf_send_host_info(struct cbaf *cbaf)
static int cbaf_cdid_get(struct cbaf *cbaf)
static ssize_t cbaf_wusb_chid_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t cbaf_wusb_chid_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_chid, 0600, cbaf_wusb_chid_show, cbaf_wusb_chid_store);
static ssize_t cbaf_wusb_host_name_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t cbaf_wusb_host_name_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_host_name, 0600, cbaf_wusb_host_name_show,
cbaf_wusb_host_name_store);
static ssize_t cbaf_wusb_host_band_groups_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t cbaf_wusb_host_band_groups_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_host_band_groups, 0600,
cbaf_wusb_host_band_groups_show,
cbaf_wusb_host_band_groups_store);
static const struct wusb_cbaf_device_info cbaf_device_info_defaults = ;
static ssize_t cbaf_wusb_cdid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t cbaf_wusb_cdid_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_cdid, 0600, cbaf_wusb_cdid_show, cbaf_wusb_cdid_store);
static ssize_t cbaf_wusb_device_band_groups_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(wusb_device_band_groups, 0600,
cbaf_wusb_device_band_groups_show,
NULL);
static ssize_t cbaf_wusb_device_name_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(wusb_device_name, 0600, cbaf_wusb_device_name_show, NULL);
static const struct wusb_cbaf_cc_data cbaf_cc_data_defaults = ;
static const struct wusb_cbaf_cc_data_fail cbaf_cc_data_fail_defaults = ;
static int cbaf_cc_upload(struct cbaf *cbaf)
static ssize_t cbaf_wusb_ck_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_ck, 0600, NULL, cbaf_wusb_ck_store);
static struct attribute *cbaf_dev_attrs[] = ;
static struct attribute_group cbaf_dev_attr_group = ;
static int cbaf_probe(struct usb_interface *iface,
const struct usb_device_id *id)
static void cbaf_disconnect(struct usb_interface *iface)
static const struct usb_device_id cbaf_id_table[] = ;
MODULE_DEVICE_TABLE(usb, cbaf_id_table);
static struct usb_driver cbaf_driver = ;
static int __init cbaf_driver_init(void)
module_init(cbaf_driver_init);
static void __exit cbaf_driver_exit(void)
module_exit(cbaf_driver_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Wireless USB Cable Based Association");
MODULE_LICENSE("GPL");
