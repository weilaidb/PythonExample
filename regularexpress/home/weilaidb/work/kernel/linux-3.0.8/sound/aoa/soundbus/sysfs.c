#define soundbus_config_of_attr(field, format_string)			\
static ssize_t								\
field##_show (struct device *dev, struct device_attribute *attr,	\
char *buf)						\
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf)
soundbus_config_of_attr (name, "%s\n");
soundbus_config_of_attr (type, "%s\n");
struct device_attribute soundbus_dev_attrs[] = ;
