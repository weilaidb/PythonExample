static ssize_t wusb_disconnect_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_disconnect, 0200, NULL, wusb_disconnect_store);
static ssize_t wusb_cdid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wusb_cdid, 0444, wusb_cdid_show, NULL);
static ssize_t wusb_ck_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(wusb_ck, 0200, NULL, wusb_ck_store);
static struct attribute *wusb_dev_attrs[] = ;
static struct attribute_group wusb_dev_attr_group = ;
int wusb_dev_sysfs_add(struct wusbhc *wusbhc, struct usb_device *usb_dev,
struct wusb_dev *wusb_dev)
void wusb_dev_sysfs_rm(struct wusb_dev *wusb_dev)
