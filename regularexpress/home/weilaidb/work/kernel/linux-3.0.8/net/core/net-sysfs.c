static const char fmt_hex[] = "%#x\n";
static const char fmt_long_hex[] = "%#lx\n";
static const char fmt_dec[] = "%d\n";
static const char fmt_udec[] = "%u\n";
static const char fmt_ulong[] = "%lu\n";
static const char fmt_u64[] = "%llu\n";
static inline int dev_isalive(const struct net_device *dev)
static ssize_t netdev_show(const struct device *dev,
struct device_attribute *attr, char *buf,
ssize_t (*format)(const struct net_device *, char *))
#define NETDEVICE_SHOW(field, format_string)				\
static ssize_t format_##field(const struct net_device *net, char *buf)	\
\
static ssize_t show_##field(struct device *dev,				\
struct device_attribute *attr, char *buf)	\
static ssize_t netdev_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len,
int (*set)(struct net_device *, unsigned long))
NETDEVICE_SHOW(dev_id, fmt_hex);
NETDEVICE_SHOW(addr_assign_type, fmt_dec);
NETDEVICE_SHOW(addr_len, fmt_dec);
NETDEVICE_SHOW(iflink, fmt_dec);
NETDEVICE_SHOW(ifindex, fmt_dec);
NETDEVICE_SHOW(features, fmt_hex);
NETDEVICE_SHOW(type, fmt_dec);
NETDEVICE_SHOW(link_mode, fmt_dec);
static ssize_t show_address(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_broadcast(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_carrier(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_speed(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_duplex(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_dormant(struct device *dev,
struct device_attribute *attr, char *buf)
static const char *const operstates[] = ;
static ssize_t show_operstate(struct device *dev,
struct device_attribute *attr, char *buf)
NETDEVICE_SHOW(mtu, fmt_dec);
static int change_mtu(struct net_device *net, unsigned long new_mtu)
static ssize_t store_mtu(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
NETDEVICE_SHOW(flags, fmt_hex);
static int change_flags(struct net_device *net, unsigned long new_flags)
static ssize_t store_flags(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
NETDEVICE_SHOW(tx_queue_len, fmt_ulong);
static int change_tx_queue_len(struct net_device *net, unsigned long new_len)
static ssize_t store_tx_queue_len(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t store_ifalias(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t show_ifalias(struct device *dev,
struct device_attribute *attr, char *buf)
NETDEVICE_SHOW(group, fmt_dec);
static int change_group(struct net_device *net, unsigned long new_group)
static ssize_t store_group(struct device *dev, struct device_attribute *attr,
const char *buf, size_t len)
static struct device_attribute net_class_attributes[] = ;
static ssize_t netstat_show(const struct device *d,
struct device_attribute *attr, char *buf,
unsigned long offset)
#define NETSTAT_ENTRY(name)						\
static ssize_t show_##name(struct device *d,				\
struct device_attribute *attr, char *buf) 	\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL)
NETSTAT_ENTRY(rx_packets);
NETSTAT_ENTRY(tx_packets);
NETSTAT_ENTRY(rx_bytes);
NETSTAT_ENTRY(tx_bytes);
NETSTAT_ENTRY(rx_errors);
NETSTAT_ENTRY(tx_errors);
NETSTAT_ENTRY(rx_dropped);
NETSTAT_ENTRY(tx_dropped);
NETSTAT_ENTRY(multicast);
NETSTAT_ENTRY(collisions);
NETSTAT_ENTRY(rx_length_errors);
NETSTAT_ENTRY(rx_over_errors);
NETSTAT_ENTRY(rx_crc_errors);
NETSTAT_ENTRY(rx_frame_errors);
NETSTAT_ENTRY(rx_fifo_errors);
NETSTAT_ENTRY(rx_missed_errors);
NETSTAT_ENTRY(tx_aborted_errors);
NETSTAT_ENTRY(tx_carrier_errors);
NETSTAT_ENTRY(tx_fifo_errors);
NETSTAT_ENTRY(tx_heartbeat_errors);
NETSTAT_ENTRY(tx_window_errors);
NETSTAT_ENTRY(rx_compressed);
NETSTAT_ENTRY(tx_compressed);
static struct attribute *netstat_attrs[] = ;
static struct attribute_group netstat_group = ;
static ssize_t wireless_show(struct device *d, char *buf,
ssize_t (*format)(const struct iw_statistics *,
char *))
#define WIRELESS_SHOW(name, field, format_string)			\
static ssize_t format_iw_##name(const struct iw_statistics *iw, char *buf) \
\
static ssize_t show_iw_##name(struct device *d,				\
struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(name, S_IRUGO, show_iw_##name, NULL)
WIRELESS_SHOW(status, status, fmt_hex);
WIRELESS_SHOW(link, qual.qual, fmt_dec);
WIRELESS_SHOW(level, qual.level, fmt_dec);
WIRELESS_SHOW(noise, qual.noise, fmt_dec);
WIRELESS_SHOW(nwid, discard.nwid, fmt_dec);
WIRELESS_SHOW(crypt, discard.code, fmt_dec);
WIRELESS_SHOW(fragment, discard.fragment, fmt_dec);
WIRELESS_SHOW(misc, discard.misc, fmt_dec);
WIRELESS_SHOW(retries, discard.retries, fmt_dec);
WIRELESS_SHOW(beacon, miss.beacon, fmt_dec);
static struct attribute *wireless_attrs[] = ;
static struct attribute_group wireless_group = ;
struct rx_queue_attribute ;
#define to_rx_queue_attr(_attr) container_of(_attr,		\
struct rx_queue_attribute, attr)
#define to_rx_queue(obj) container_of(obj, struct netdev_rx_queue, kobj)
static ssize_t rx_queue_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t rx_queue_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops rx_queue_sysfs_ops = ;
static ssize_t show_rps_map(struct netdev_rx_queue *queue,
struct rx_queue_attribute *attribute, char *buf)
static ssize_t store_rps_map(struct netdev_rx_queue *queue,
struct rx_queue_attribute *attribute,
const char *buf, size_t len)
static ssize_t show_rps_dev_flow_table_cnt(struct netdev_rx_queue *queue,
struct rx_queue_attribute *attr,
char *buf)
static void rps_dev_flow_table_release_work(struct work_struct *work)
static void rps_dev_flow_table_release(struct rcu_head *rcu)
static ssize_t store_rps_dev_flow_table_cnt(struct netdev_rx_queue *queue,
struct rx_queue_attribute *attr,
const char *buf, size_t len)
static struct rx_queue_attribute rps_cpus_attribute =
__ATTR(rps_cpus, S_IRUGO | S_IWUSR, show_rps_map, store_rps_map);
static struct rx_queue_attribute rps_dev_flow_table_cnt_attribute =
__ATTR(rps_flow_cnt, S_IRUGO | S_IWUSR,
show_rps_dev_flow_table_cnt, store_rps_dev_flow_table_cnt);
static struct attribute *rx_queue_default_attrs[] = ;
static void rx_queue_release(struct kobject *kobj)
static struct kobj_type rx_queue_ktype = ;
static int rx_queue_add_kobject(struct net_device *net, int index)
int
net_rx_queue_update_kobjects(struct net_device *net, int old_num, int new_num)
struct netdev_queue_attribute ;
#define to_netdev_queue_attr(_attr) container_of(_attr,		\
struct netdev_queue_attribute, attr)
#define to_netdev_queue(obj) container_of(obj, struct netdev_queue, kobj)
static ssize_t netdev_queue_attr_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static ssize_t netdev_queue_attr_store(struct kobject *kobj,
struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops netdev_queue_sysfs_ops = ;
static inline unsigned int get_netdev_queue_index(struct netdev_queue *queue)
static ssize_t show_xps_map(struct netdev_queue *queue,
struct netdev_queue_attribute *attribute, char *buf)
static DEFINE_MUTEX(xps_map_mutex);
#define xmap_dereference(P)		\
rcu_dereference_protected((P), lockdep_is_held(&xps_map_mutex))
static ssize_t store_xps_map(struct netdev_queue *queue,
struct netdev_queue_attribute *attribute,
const char *buf, size_t len)
static struct netdev_queue_attribute xps_cpus_attribute =
__ATTR(xps_cpus, S_IRUGO | S_IWUSR, show_xps_map, store_xps_map);
static struct attribute *netdev_queue_default_attrs[] = ;
static void netdev_queue_release(struct kobject *kobj)
static struct kobj_type netdev_queue_ktype = ;
static int netdev_queue_add_kobject(struct net_device *net, int index)
int
netdev_queue_update_kobjects(struct net_device *net, int old_num, int new_num)
static int register_queue_kobjects(struct net_device *net)
static void remove_queue_kobjects(struct net_device *net)
static void *net_grab_current_ns(void)
static const void *net_initial_ns(void)
static const void *net_netlink_ns(struct sock *sk)
struct kobj_ns_type_operations net_ns_type_operations = ;
EXPORT_SYMBOL_GPL(net_ns_type_operations);
static int netdev_uevent(struct device *d, struct kobj_uevent_env *env)
static void netdev_release(struct device *d)
static const void *net_namespace(struct device *d)
static struct class net_class = ;
void netdev_unregister_kobject(struct net_device * net)
int netdev_register_kobject(struct net_device *net)
int netdev_class_create_file(struct class_attribute *class_attr)
EXPORT_SYMBOL(netdev_class_create_file);
void netdev_class_remove_file(struct class_attribute *class_attr)
EXPORT_SYMBOL(netdev_class_remove_file);
int netdev_kobject_init(void)
