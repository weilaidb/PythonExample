static inline int dev_isalive(const struct net_device *dev)
static ssize_t show_tallies(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(tallies, S_IRUGO, show_tallies, NULL);
static struct attribute *wlags_attrs[] = ;
static struct attribute_group wlags_group = ;
void register_wlags_sysfs(struct net_device *net)
void unregister_wlags_sysfs(struct net_device *net)
