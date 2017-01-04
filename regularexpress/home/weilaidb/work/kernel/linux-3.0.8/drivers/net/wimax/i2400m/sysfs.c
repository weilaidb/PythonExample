#define D_SUBMODULE sysfs
static
ssize_t i2400m_idle_timeout_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static
DEVICE_ATTR(i2400m_idle_timeout, S_IWUSR,
NULL, i2400m_idle_timeout_store);
static
struct attribute *i2400m_dev_attrs[] = ;
struct attribute_group i2400m_dev_attr_group = ;
