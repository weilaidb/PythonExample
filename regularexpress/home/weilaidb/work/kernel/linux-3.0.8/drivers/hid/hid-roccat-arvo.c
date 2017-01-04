static struct class *arvo_class;
static ssize_t arvo_sysfs_show_mode_key(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t arvo_sysfs_set_mode_key(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static ssize_t arvo_sysfs_show_key_mask(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t arvo_sysfs_set_key_mask(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static int arvo_get_actual_profile(struct usb_device *usb_dev)
static ssize_t arvo_sysfs_show_actual_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t arvo_sysfs_set_actual_profile(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static ssize_t arvo_sysfs_write(struct file *fp,
struct kobject *kobj, void const *buf,
loff_t off, size_t count, size_t real_size, uint command)
static ssize_t arvo_sysfs_read(struct file *fp,
struct kobject *kobj, void *buf, loff_t off,
size_t count, size_t real_size, uint command)
static ssize_t arvo_sysfs_write_button(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t arvo_sysfs_read_info(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static struct device_attribute arvo_attributes[] = ;
static struct bin_attribute arvo_bin_attributes[] = ;
static int arvo_init_arvo_device_struct(struct usb_device *usb_dev,
struct arvo_device *arvo)
static int arvo_init_specials(struct hid_device *hdev)
static void arvo_remove_specials(struct hid_device *hdev)
static int arvo_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void arvo_remove(struct hid_device *hdev)
static void arvo_report_to_chrdev(struct arvo_device const *arvo,
u8 const *data)
static int arvo_raw_event(struct hid_device *hdev,
struct hid_report *report, u8 *data, int size)
static const struct hid_device_id arvo_devices[] = ;
MODULE_DEVICE_TABLE(hid, arvo_devices);
static struct hid_driver arvo_driver = ;
static int __init arvo_init(void)
static void __exit arvo_exit(void)
module_init(arvo_init);
module_exit(arvo_exit);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat Arvo driver");
MODULE_LICENSE("GPL v2");
