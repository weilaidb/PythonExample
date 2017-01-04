static struct class *bt_class;
struct dentry *bt_debugfs;
EXPORT_SYMBOL_GPL(bt_debugfs);
static inline char *link_typetostr(int type)
static ssize_t show_link_type(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_link_address(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_link_features(struct device *dev, struct device_attribute *attr, char *buf)
#define LINK_ATTR(_name, _mode, _show, _store) \
struct device_attribute link_attr_##_name = __ATTR(_name, _mode, _show, _store)
static LINK_ATTR(type, S_IRUGO, show_link_type, NULL);
static LINK_ATTR(address, S_IRUGO, show_link_address, NULL);
static LINK_ATTR(features, S_IRUGO, show_link_features, NULL);
static struct attribute *bt_link_attrs[] = ;
static struct attribute_group bt_link_group = ;
static const struct attribute_group *bt_link_groups[] = ;
static void bt_link_release(struct device *dev)
static struct device_type bt_link = ;
static void add_conn(struct work_struct *work)
static int __match_tty(struct device *dev, void *data)
static void del_conn(struct work_struct *work)
void hci_conn_init_sysfs(struct hci_conn *conn)
void hci_conn_add_sysfs(struct hci_conn *conn)
void hci_conn_del_sysfs(struct hci_conn *conn)
static inline char *host_bustostr(int bus)
static inline char *host_typetostr(int type)
static ssize_t show_bus(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_type(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_name(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_class(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_address(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_features(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_manufacturer(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_hci_version(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_hci_revision(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_idle_timeout(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_idle_timeout(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_sniff_max_interval(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_sniff_max_interval(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_sniff_min_interval(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_sniff_min_interval(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(bus, S_IRUGO, show_bus, NULL);
static DEVICE_ATTR(type, S_IRUGO, show_type, NULL);
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static DEVICE_ATTR(class, S_IRUGO, show_class, NULL);
static DEVICE_ATTR(address, S_IRUGO, show_address, NULL);
static DEVICE_ATTR(features, S_IRUGO, show_features, NULL);
static DEVICE_ATTR(manufacturer, S_IRUGO, show_manufacturer, NULL);
static DEVICE_ATTR(hci_version, S_IRUGO, show_hci_version, NULL);
static DEVICE_ATTR(hci_revision, S_IRUGO, show_hci_revision, NULL);
static DEVICE_ATTR(idle_timeout, S_IRUGO | S_IWUSR,
show_idle_timeout, store_idle_timeout);
static DEVICE_ATTR(sniff_max_interval, S_IRUGO | S_IWUSR,
show_sniff_max_interval, store_sniff_max_interval);
static DEVICE_ATTR(sniff_min_interval, S_IRUGO | S_IWUSR,
show_sniff_min_interval, store_sniff_min_interval);
static struct attribute *bt_host_attrs[] = ;
static struct attribute_group bt_host_group = ;
static const struct attribute_group *bt_host_groups[] = ;
static void bt_host_release(struct device *dev)
static struct device_type bt_host = ;
static int inquiry_cache_show(struct seq_file *f, void *p)
static int inquiry_cache_open(struct inode *inode, struct file *file)
static const struct file_operations inquiry_cache_fops = ;
static int blacklist_show(struct seq_file *f, void *p)
static int blacklist_open(struct inode *inode, struct file *file)
static const struct file_operations blacklist_fops = ;
static void print_bt_uuid(struct seq_file *f, u8 *uuid)
static int uuids_show(struct seq_file *f, void *p)
static int uuids_open(struct inode *inode, struct file *file)
static const struct file_operations uuids_fops = ;
static int auto_accept_delay_set(void *data, u64 val)
static int auto_accept_delay_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(auto_accept_delay_fops, auto_accept_delay_get,
auto_accept_delay_set, "%llu\n");
int hci_register_sysfs(struct hci_dev *hdev)
void hci_unregister_sysfs(struct hci_dev *hdev)
int __init bt_sysfs_init(void)
void bt_sysfs_cleanup(void)
