#define usb_actconfig_show(field, multiplier, format_string)		\
static ssize_t  show_##field(struct device *dev,			\
struct device_attribute *attr, char *buf)		\
\
#define usb_actconfig_attr(field, multiplier, format_string)		\
usb_actconfig_show(field, multiplier, format_string)			\
static DEVICE_ATTR(field, S_IRUGO, show_##field, NULL);
usb_actconfig_attr(bNumInterfaces, 1, "%2d\n")
usb_actconfig_attr(bmAttributes, 1, "%2x\n")
usb_actconfig_attr(bMaxPower, 2, "%3dmA\n")
static ssize_t show_configuration_string(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(configuration, S_IRUGO, show_configuration_string, NULL);
usb_actconfig_show(bConfigurationValue, 1, "%u\n");
static ssize_t
set_bConfigurationValue(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(bConfigurationValue, S_IRUGO | S_IWUSR,
show_bConfigurationValue, set_bConfigurationValue);
#define usb_string_attr(name)						\
static ssize_t  show_##name(struct device *dev,				\
struct device_attribute *attr, char *buf)		\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL);
usb_string_attr(product);
usb_string_attr(manufacturer);
usb_string_attr(serial);
static ssize_t
show_speed(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(speed, S_IRUGO, show_speed, NULL);
static ssize_t
show_busnum(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(busnum, S_IRUGO, show_busnum, NULL);
static ssize_t
show_devnum(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(devnum, S_IRUGO, show_devnum, NULL);
static ssize_t
show_devpath(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(devpath, S_IRUGO, show_devpath, NULL);
static ssize_t
show_version(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(version, S_IRUGO, show_version, NULL);
static ssize_t
show_maxchild(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(maxchild, S_IRUGO, show_maxchild, NULL);
static ssize_t
show_quirks(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(quirks, S_IRUGO, show_quirks, NULL);
static ssize_t
show_avoid_reset_quirk(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_avoid_reset_quirk(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(avoid_reset_quirk, S_IRUGO | S_IWUSR,
show_avoid_reset_quirk, set_avoid_reset_quirk);
static ssize_t
show_urbnum(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(urbnum, S_IRUGO, show_urbnum, NULL);
static ssize_t
show_persist(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_persist(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(persist, S_IRUGO | S_IWUSR, show_persist, set_persist);
static int add_persist_attributes(struct device *dev)
static void remove_persist_attributes(struct device *dev)
#define add_persist_attributes(dev)	0
#define remove_persist_attributes(dev)	do  while (0)
static ssize_t
show_connected_duration(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(connected_duration, S_IRUGO, show_connected_duration, NULL);
static ssize_t
show_active_duration(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(active_duration, S_IRUGO, show_active_duration, NULL);
static ssize_t
show_autosuspend(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_autosuspend(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(autosuspend, S_IRUGO | S_IWUSR,
show_autosuspend, set_autosuspend);
static const char on_string[] = "on";
static const char auto_string[] = "auto";
static void warn_level(void)
static ssize_t
show_level(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_level(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(level, S_IRUGO | S_IWUSR, show_level, set_level);
static struct attribute *power_attrs[] = ;
static struct attribute_group power_attr_group = ;
static int add_power_attributes(struct device *dev)
static void remove_power_attributes(struct device *dev)
#define add_power_attributes(dev)	0
#define remove_power_attributes(dev)	do  while (0)
#define usb_descriptor_attr_le16(field, format_string)			\
static ssize_t								\
show_##field(struct device *dev, struct device_attribute *attr,	\
char *buf)						\
\
static DEVICE_ATTR(field, S_IRUGO, show_##field, NULL);
usb_descriptor_attr_le16(idVendor, "%04x\n")
usb_descriptor_attr_le16(idProduct, "%04x\n")
usb_descriptor_attr_le16(bcdDevice, "%04x\n")
#define usb_descriptor_attr(field, format_string)			\
static ssize_t								\
show_##field(struct device *dev, struct device_attribute *attr,	\
char *buf)						\
\
static DEVICE_ATTR(field, S_IRUGO, show_##field, NULL);
usb_descriptor_attr(bDeviceClass, "%02x\n")
usb_descriptor_attr(bDeviceSubClass, "%02x\n")
usb_descriptor_attr(bDeviceProtocol, "%02x\n")
usb_descriptor_attr(bNumConfigurations, "%d\n")
usb_descriptor_attr(bMaxPacketSize0, "%d\n")
static ssize_t usb_dev_authorized_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t usb_dev_authorized_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(authorized, 0644,
usb_dev_authorized_show, usb_dev_authorized_store);
static ssize_t usb_remove_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(remove, 0200, NULL, usb_remove_store);
static struct attribute *dev_attrs[] = ;
static struct attribute_group dev_attr_grp = ;
static struct attribute *dev_string_attrs[] = ;
static mode_t dev_string_attrs_are_visible(struct kobject *kobj,
struct attribute *a, int n)
static struct attribute_group dev_string_attr_grp = ;
const struct attribute_group *usb_device_groups[] = ;
static ssize_t
read_descriptors(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute dev_bin_attr_descriptors = ;
int usb_create_sysfs_dev_files(struct usb_device *udev)
void usb_remove_sysfs_dev_files(struct usb_device *udev)
#define usb_intf_assoc_attr(field, format_string)			\
static ssize_t								\
show_iad_##field(struct device *dev, struct device_attribute *attr,	\
char *buf)						\
\
static DEVICE_ATTR(iad_##field, S_IRUGO, show_iad_##field, NULL);
usb_intf_assoc_attr(bFirstInterface, "%02x\n")
usb_intf_assoc_attr(bInterfaceCount, "%02d\n")
usb_intf_assoc_attr(bFunctionClass, "%02x\n")
usb_intf_assoc_attr(bFunctionSubClass, "%02x\n")
usb_intf_assoc_attr(bFunctionProtocol, "%02x\n")
#define usb_intf_attr(field, format_string)				\
static ssize_t								\
show_##field(struct device *dev, struct device_attribute *attr,	\
char *buf)						\
\
static DEVICE_ATTR(field, S_IRUGO, show_##field, NULL);
usb_intf_attr(bInterfaceNumber, "%02x\n")
usb_intf_attr(bAlternateSetting, "%2d\n")
usb_intf_attr(bNumEndpoints, "%02x\n")
usb_intf_attr(bInterfaceClass, "%02x\n")
usb_intf_attr(bInterfaceSubClass, "%02x\n")
usb_intf_attr(bInterfaceProtocol, "%02x\n")
static ssize_t show_interface_string(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(interface, S_IRUGO, show_interface_string, NULL);
static ssize_t show_modalias(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(modalias, S_IRUGO, show_modalias, NULL);
static ssize_t show_supports_autosuspend(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(supports_autosuspend, S_IRUGO, show_supports_autosuspend, NULL);
static struct attribute *intf_attrs[] = ;
static struct attribute_group intf_attr_grp = ;
static struct attribute *intf_assoc_attrs[] = ;
static mode_t intf_assoc_attrs_are_visible(struct kobject *kobj,
struct attribute *a, int n)
static struct attribute_group intf_assoc_attr_grp = ;
const struct attribute_group *usb_interface_groups[] = ;
void usb_create_sysfs_intf_files(struct usb_interface *intf)
void usb_remove_sysfs_intf_files(struct usb_interface *intf)
