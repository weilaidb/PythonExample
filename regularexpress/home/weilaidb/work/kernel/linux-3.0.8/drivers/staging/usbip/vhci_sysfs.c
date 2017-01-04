static ssize_t show_status(struct device *dev, struct device_attribute *attr,
char *out)
static DEVICE_ATTR(status, S_IRUGO, show_status, NULL);
static int vhci_port_disconnect(__u32 rhport)
static ssize_t store_detach(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(detach, S_IWUSR, NULL, store_detach);
static int valid_args(__u32 rhport, enum usb_device_speed speed)
static ssize_t store_attach(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(attach, S_IWUSR, NULL, store_attach);
static struct attribute *dev_attrs[] = ;
struct attribute_group dev_attr_group = ;
