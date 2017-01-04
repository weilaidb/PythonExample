#undef DEBUG
#undef DEBUGDATA
#undef DEBUGCCW
#define KMSG_COMPONENT "ctcm"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static ssize_t ctcm_buffer_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ctcm_buffer_write(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static void ctcm_print_statistics(struct ctcm_priv *priv)
static ssize_t stats_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t stats_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t ctcm_proto_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ctcm_proto_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
const char *ctcm_type[] = ;
static ssize_t ctcm_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(buffer, 0644, ctcm_buffer_show, ctcm_buffer_write);
static DEVICE_ATTR(protocol, 0644, ctcm_proto_show, ctcm_proto_store);
static DEVICE_ATTR(type, 0444, ctcm_type_show, NULL);
static DEVICE_ATTR(stats, 0644, stats_show, stats_write);
static struct attribute *ctcm_attr[] = ;
static struct attribute_group ctcm_attr_group = ;
int ctcm_add_attributes(struct device *dev)
void ctcm_remove_attributes(struct device *dev)
int ctcm_add_files(struct device *dev)
void ctcm_remove_files(struct device *dev)
