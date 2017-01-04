struct dmi_device_attribute;
#define to_dmi_dev_attr(_dev_attr) \
container_of(_dev_attr, struct dmi_device_attribute, dev_attr)
static ssize_t sys_dmi_field_show(struct device *dev,
struct device_attribute *attr,
char *page)
#define DMI_ATTR(_name, _mode, _show, _field)			\
#define DEFINE_DMI_ATTR_WITH_SHOW(_name, _mode, _field)		\
static struct dmi_device_attribute sys_dmi_##_name##_attr =	\
DMI_ATTR(_name, _mode, sys_dmi_field_show, _field);
DEFINE_DMI_ATTR_WITH_SHOW(bios_vendor,		0444, DMI_BIOS_VENDOR);
DEFINE_DMI_ATTR_WITH_SHOW(bios_version,		0444, DMI_BIOS_VERSION);
DEFINE_DMI_ATTR_WITH_SHOW(bios_date,		0444, DMI_BIOS_DATE);
DEFINE_DMI_ATTR_WITH_SHOW(sys_vendor,		0444, DMI_SYS_VENDOR);
DEFINE_DMI_ATTR_WITH_SHOW(product_name,		0444, DMI_PRODUCT_NAME);
DEFINE_DMI_ATTR_WITH_SHOW(product_version,	0444, DMI_PRODUCT_VERSION);
DEFINE_DMI_ATTR_WITH_SHOW(product_serial,	0400, DMI_PRODUCT_SERIAL);
DEFINE_DMI_ATTR_WITH_SHOW(product_uuid,		0400, DMI_PRODUCT_UUID);
DEFINE_DMI_ATTR_WITH_SHOW(board_vendor,		0444, DMI_BOARD_VENDOR);
DEFINE_DMI_ATTR_WITH_SHOW(board_name,		0444, DMI_BOARD_NAME);
DEFINE_DMI_ATTR_WITH_SHOW(board_version,	0444, DMI_BOARD_VERSION);
DEFINE_DMI_ATTR_WITH_SHOW(board_serial,		0400, DMI_BOARD_SERIAL);
DEFINE_DMI_ATTR_WITH_SHOW(board_asset_tag,	0444, DMI_BOARD_ASSET_TAG);
DEFINE_DMI_ATTR_WITH_SHOW(chassis_vendor,	0444, DMI_CHASSIS_VENDOR);
DEFINE_DMI_ATTR_WITH_SHOW(chassis_type,		0444, DMI_CHASSIS_TYPE);
DEFINE_DMI_ATTR_WITH_SHOW(chassis_version,	0444, DMI_CHASSIS_VERSION);
DEFINE_DMI_ATTR_WITH_SHOW(chassis_serial,	0400, DMI_CHASSIS_SERIAL);
DEFINE_DMI_ATTR_WITH_SHOW(chassis_asset_tag,	0444, DMI_CHASSIS_ASSET_TAG);
static void ascii_filter(char *d, const char *s)
static ssize_t get_modalias(char *buffer, size_t buffer_size)
static ssize_t sys_dmi_modalias_show(struct device *dev,
struct device_attribute *attr, char *page)
static struct device_attribute sys_dmi_modalias_attr =
__ATTR(modalias, 0444, sys_dmi_modalias_show, NULL);
static struct attribute *sys_dmi_attributes[DMI_STRING_MAX+2];
static struct attribute_group sys_dmi_attribute_group = ;
static const struct attribute_group* sys_dmi_attribute_groups[] = ;
static int dmi_dev_uevent(struct device *dev, struct kobj_uevent_env *env)
static struct class dmi_class = ;
static struct device *dmi_dev;
#define ADD_DMI_ATTR(_name, _field) \
if (dmi_get_system_info(_field)) \
sys_dmi_attributes[i++] = &sys_dmi_##_name##_attr.dev_attr.attr;
static void __init dmi_id_init_attr_table(void)
static int __init dmi_id_init(void)
arch_initcall(dmi_id_init);
