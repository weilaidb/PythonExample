#define GENERIC_FILESIZE	64
static int get_integer(const char *buf, size_t count)
static int get_boolean(const char *buf, size_t count)
static ssize_t b43legacy_attr_interfmode_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t b43legacy_attr_interfmode_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(interference, 0644,
b43legacy_attr_interfmode_show,
b43legacy_attr_interfmode_store);
static ssize_t b43legacy_attr_preamble_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t b43legacy_attr_preamble_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(shortpreamble, 0644,
b43legacy_attr_preamble_show,
b43legacy_attr_preamble_store);
int b43legacy_sysfs_register(struct b43legacy_wldev *wldev)
void b43legacy_sysfs_unregister(struct b43legacy_wldev *wldev)
