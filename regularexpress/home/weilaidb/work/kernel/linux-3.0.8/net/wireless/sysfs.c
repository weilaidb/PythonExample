static inline struct cfg80211_registered_device *dev_to_rdev(
struct device *dev)
#define SHOW_FMT(name, fmt, member)					\
static ssize_t name ## _show(struct device *dev,			\
struct device_attribute *attr,		\
char *buf)				\
SHOW_FMT(index, "%d", wiphy_idx);
SHOW_FMT(macaddress, "%pM", wiphy.perm_addr);
SHOW_FMT(address_mask, "%pM", wiphy.addr_mask);
static ssize_t name_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t addresses_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute ieee80211_dev_attrs[] = ;
static void wiphy_dev_release(struct device *dev)
static int wiphy_uevent(struct device *dev, struct kobj_uevent_env *env)
static int wiphy_suspend(struct device *dev, pm_message_t state)
static int wiphy_resume(struct device *dev)
static const void *wiphy_namespace(struct device *d)
struct class ieee80211_class = ;
int wiphy_sysfs_init(void)
void wiphy_sysfs_exit(void)
