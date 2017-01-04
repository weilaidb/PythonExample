#define to_dev(obj)		container_of(obj, struct device, kobj)
#define kobj_to_netdev(obj)	to_net_dev(to_dev(obj->parent))
#define kobj_to_batpriv(obj)	netdev_priv(kobj_to_netdev(obj))
#define BAT_ATTR(_name, _mode, _show, _store)	\
struct bat_attribute bat_attr_##_name = ;
#define BAT_ATTR_STORE_BOOL(_name, _post_func)				\
ssize_t store_##_name(struct kobject *kobj, struct attribute *attr,	\
char *buff, size_t count)				\
#define BAT_ATTR_SHOW_BOOL(_name)					\
ssize_t show_##_name(struct kobject *kobj, struct attribute *attr,	\
char *buff)					\
\
#define BAT_ATTR_BOOL(_name, _mode, _post_func)				\
static BAT_ATTR_STORE_BOOL(_name, _post_func)			\
static BAT_ATTR_SHOW_BOOL(_name)				\
static BAT_ATTR(_name, _mode, show_##_name, store_##_name)
#define BAT_ATTR_STORE_UINT(_name, _min, _max, _post_func)		\
ssize_t store_##_name(struct kobject *kobj, struct attribute *attr,	\
char *buff, size_t count)			\
#define BAT_ATTR_SHOW_UINT(_name)					\
ssize_t show_##_name(struct kobject *kobj, struct attribute *attr,	\
char *buff)					\
\
#define BAT_ATTR_UINT(_name, _mode, _min, _max, _post_func)		\
static BAT_ATTR_STORE_UINT(_name, _min, _max, _post_func)	\
static BAT_ATTR_SHOW_UINT(_name)				\
static BAT_ATTR(_name, _mode, show_##_name, store_##_name)
static int store_bool_attr(char *buff, size_t count,
struct net_device *net_dev,
char *attr_name, atomic_t *attr)
static inline ssize_t __store_bool_attr(char *buff, size_t count,
void (*post_func)(struct net_device *),
struct attribute *attr,
atomic_t *attr_store, struct net_device *net_dev)
static int store_uint_attr(char *buff, size_t count,
struct net_device *net_dev, char *attr_name,
unsigned int min, unsigned int max, atomic_t *attr)
static inline ssize_t __store_uint_attr(char *buff, size_t count,
int min, int max,
void (*post_func)(struct net_device *),
struct attribute *attr,
atomic_t *attr_store, struct net_device *net_dev)
static ssize_t show_vis_mode(struct kobject *kobj, struct attribute *attr,
char *buff)
static ssize_t store_vis_mode(struct kobject *kobj, struct attribute *attr,
char *buff, size_t count)
static void post_gw_deselect(struct net_device *net_dev)
static ssize_t show_gw_mode(struct kobject *kobj, struct attribute *attr,
char *buff)
static ssize_t store_gw_mode(struct kobject *kobj, struct attribute *attr,
char *buff, size_t count)
static ssize_t show_gw_bwidth(struct kobject *kobj, struct attribute *attr,
char *buff)
static ssize_t store_gw_bwidth(struct kobject *kobj, struct attribute *attr,
char *buff, size_t count)
BAT_ATTR_BOOL(aggregated_ogms, S_IRUGO | S_IWUSR, NULL);
BAT_ATTR_BOOL(bonding, S_IRUGO | S_IWUSR, NULL);
BAT_ATTR_BOOL(fragmentation, S_IRUGO | S_IWUSR, update_min_mtu);
static BAT_ATTR(vis_mode, S_IRUGO | S_IWUSR, show_vis_mode, store_vis_mode);
static BAT_ATTR(gw_mode, S_IRUGO | S_IWUSR, show_gw_mode, store_gw_mode);
BAT_ATTR_UINT(orig_interval, S_IRUGO | S_IWUSR, 2 * JITTER, INT_MAX, NULL);
BAT_ATTR_UINT(hop_penalty, S_IRUGO | S_IWUSR, 0, TQ_MAX_VALUE, NULL);
BAT_ATTR_UINT(gw_sel_class, S_IRUGO | S_IWUSR, 1, TQ_MAX_VALUE,
post_gw_deselect);
static BAT_ATTR(gw_bandwidth, S_IRUGO | S_IWUSR, show_gw_bwidth,
store_gw_bwidth);
BAT_ATTR_UINT(log_level, S_IRUGO | S_IWUSR, 0, 3, NULL);
static struct bat_attribute *mesh_attrs[] = ;
int sysfs_add_meshif(struct net_device *dev)
void sysfs_del_meshif(struct net_device *dev)
static ssize_t show_mesh_iface(struct kobject *kobj, struct attribute *attr,
char *buff)
static ssize_t store_mesh_iface(struct kobject *kobj, struct attribute *attr,
char *buff, size_t count)
static ssize_t show_iface_status(struct kobject *kobj, struct attribute *attr,
char *buff)
static BAT_ATTR(mesh_iface, S_IRUGO | S_IWUSR,
show_mesh_iface, store_mesh_iface);
static BAT_ATTR(iface_status, S_IRUGO, show_iface_status, NULL);
static struct bat_attribute *batman_attrs[] = ;
int sysfs_add_hardif(struct kobject **hardif_obj, struct net_device *dev)
void sysfs_del_hardif(struct kobject **hardif_obj)
