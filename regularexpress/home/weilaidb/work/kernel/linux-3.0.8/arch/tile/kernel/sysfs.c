static ssize_t get_hv_confstr(char *page, int query)
static ssize_t chip_width_show(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *page)
static SYSDEV_CLASS_ATTR(chip_width, 0444, chip_width_show, NULL);
static ssize_t chip_height_show(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *page)
static SYSDEV_CLASS_ATTR(chip_height, 0444, chip_height_show, NULL);
static ssize_t chip_serial_show(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *page)
static SYSDEV_CLASS_ATTR(chip_serial, 0444, chip_serial_show, NULL);
static ssize_t chip_revision_show(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *page)
static SYSDEV_CLASS_ATTR(chip_revision, 0444, chip_revision_show, NULL);
static ssize_t type_show(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
char *page)
static SYSDEV_CLASS_ATTR(type, 0444, type_show, NULL);
#define HV_CONF_ATTR(name, conf)					\
static ssize_t name ## _show(struct sysdev_class *dev,		\
struct sysdev_class_attribute *attr, \
char *page)			\
\
static SYSDEV_CLASS_ATTR(name, 0444, name ## _show, NULL);
HV_CONF_ATTR(version,		HV_CONFSTR_HV_SW_VER)
HV_CONF_ATTR(config_version,	HV_CONFSTR_HV_CONFIG_VER)
HV_CONF_ATTR(board_part,	HV_CONFSTR_BOARD_PART_NUM)
HV_CONF_ATTR(board_serial,	HV_CONFSTR_BOARD_SERIAL_NUM)
HV_CONF_ATTR(board_revision,	HV_CONFSTR_BOARD_REV)
HV_CONF_ATTR(board_description,	HV_CONFSTR_BOARD_DESC)
HV_CONF_ATTR(mezz_part,		HV_CONFSTR_MEZZ_PART_NUM)
HV_CONF_ATTR(mezz_serial,	HV_CONFSTR_MEZZ_SERIAL_NUM)
HV_CONF_ATTR(mezz_revision,	HV_CONFSTR_MEZZ_REV)
HV_CONF_ATTR(mezz_description,	HV_CONFSTR_MEZZ_DESC)
HV_CONF_ATTR(switch_control,	HV_CONFSTR_SWITCH_CONTROL)
static struct attribute *board_attrs[] = ;
static struct attribute_group board_attr_group = ;
static struct bin_attribute hvconfig_bin;
static ssize_t
hvconfig_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static int __init create_sysfs_entries(void)
subsys_initcall(create_sysfs_entries);
