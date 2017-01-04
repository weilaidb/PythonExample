#define GENERIC_FILESIZE	64
static int get_integer(const char *buf, size_t count)
static ssize_t b43_attr_interfmode_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t b43_attr_interfmode_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(interference, 0644,
b43_attr_interfmode_show, b43_attr_interfmode_store);
int b43_sysfs_register(struct b43_wldev *wldev)
void b43_sysfs_unregister(struct b43_wldev *wldev)
