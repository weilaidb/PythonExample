#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ATK_HID "ATK0110"
static bool new_if;
module_param(new_if, bool, 0);
MODULE_PARM_DESC(new_if, "Override detection heuristic and force the use of the new ATK0110 interface");
static const struct dmi_system_id __initconst atk_force_new_if[] = ;
#define CACHE_TIME		HZ
#define BOARD_ID		"MBIF"
#define METHOD_ENUMERATE	"GGRP"
#define METHOD_READ		"GITM"
#define METHOD_WRITE		"SITM"
#define METHOD_OLD_READ_TMP	"RTMP"
#define METHOD_OLD_READ_VLT	"RVLT"
#define METHOD_OLD_READ_FAN	"RFAN"
#define METHOD_OLD_ENUM_TMP	"TSIF"
#define METHOD_OLD_ENUM_VLT	"VSIF"
#define METHOD_OLD_ENUM_FAN	"FSIF"
#define ATK_MUX_HWMON		0x00000006ULL
#define ATK_MUX_MGMT		0x00000011ULL
#define ATK_CLASS_MASK		0xff000000ULL
#define ATK_CLASS_FREQ_CTL	0x03000000ULL
#define ATK_CLASS_FAN_CTL	0x04000000ULL
#define ATK_CLASS_HWMON		0x06000000ULL
#define ATK_CLASS_MGMT		0x11000000ULL
#define ATK_TYPE_MASK		0x00ff0000ULL
#define HWMON_TYPE_VOLT		0x00020000ULL
#define HWMON_TYPE_TEMP		0x00030000ULL
#define HWMON_TYPE_FAN		0x00040000ULL
#define ATK_ELEMENT_ID_MASK	0x0000ffffULL
#define ATK_EC_ID		0x11060004ULL
enum atk_pack_member ;
#define _HWMON_NEW_PACK_SIZE	7
#define _HWMON_NEW_PACK_FLAGS	0
#define _HWMON_NEW_PACK_NAME	1
#define _HWMON_NEW_PACK_UNK1	2
#define _HWMON_NEW_PACK_UNK2	3
#define _HWMON_NEW_PACK_LIMIT1	4
#define _HWMON_NEW_PACK_LIMIT2	5
#define _HWMON_NEW_PACK_ENABLE	6
#define _HWMON_OLD_PACK_SIZE	5
#define _HWMON_OLD_PACK_FLAGS	0
#define _HWMON_OLD_PACK_NAME	1
#define _HWMON_OLD_PACK_LIMIT1	2
#define _HWMON_OLD_PACK_LIMIT2	3
#define _HWMON_OLD_PACK_ENABLE	4
struct atk_data ;
typedef ssize_t (*sysfs_show_func)(struct device *dev,
struct device_attribute *attr, char *buf);
static const struct acpi_device_id atk_ids[] = ;
MODULE_DEVICE_TABLE(acpi, atk_ids);
#define ATTR_NAME_SIZE 16
struct atk_sensor_data ;
struct atk_acpi_ret_buffer ;
struct atk_acpi_input_buf ;
static int atk_add(struct acpi_device *device);
static int atk_remove(struct acpi_device *device, int type);
static void atk_print_sensor(struct atk_data *data, union acpi_object *obj);
static int atk_read_value(struct atk_sensor_data *sensor, u64 *value);
static void atk_free_sensors(struct atk_data *data);
static struct acpi_driver atk_driver = ;
#define input_to_atk_sensor(attr) \
container_of(attr, struct atk_sensor_data, input_attr)
#define label_to_atk_sensor(attr) \
container_of(attr, struct atk_sensor_data, label_attr)
#define limit1_to_atk_sensor(attr) \
container_of(attr, struct atk_sensor_data, limit1_attr)
#define limit2_to_atk_sensor(attr) \
container_of(attr, struct atk_sensor_data, limit2_attr)
static ssize_t atk_input_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t atk_label_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t atk_limit1_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t atk_limit2_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t atk_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute atk_name_attr =
__ATTR(name, 0444, atk_name_show, NULL);
static void atk_init_attribute(struct device_attribute *attr, char *name,
sysfs_show_func show)
static union acpi_object *atk_get_pack_member(struct atk_data *data,
union acpi_object *pack,
enum atk_pack_member m)
static int validate_hwmon_pack(struct atk_data *data, union acpi_object *obj)
static char const *atk_sensor_type(union acpi_object *flags)
static void atk_print_sensor(struct atk_data *data, union acpi_object *obj)
static int atk_read_value_old(struct atk_sensor_data *sensor, u64 *value)
static union acpi_object *atk_ggrp(struct atk_data *data, u16 mux)
static union acpi_object *atk_gitm(struct atk_data *data, u64 id)
static union acpi_object *atk_sitm(struct atk_data *data,
struct atk_acpi_input_buf *buf)
static int atk_read_value_new(struct atk_sensor_data *sensor, u64 *value)
static int atk_read_value(struct atk_sensor_data *sensor, u64 *value)
static int atk_debugfs_gitm_get(void *p, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(atk_debugfs_gitm,
atk_debugfs_gitm_get,
NULL,
"0x%08llx\n")
static int atk_acpi_print(char *buf, size_t sz, union acpi_object *obj)
static void atk_pack_print(char *buf, size_t sz, union acpi_object *pack)
static int atk_debugfs_ggrp_open(struct inode *inode, struct file *file)
static ssize_t atk_debugfs_ggrp_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static int atk_debugfs_ggrp_release(struct inode *inode, struct file *file)
static const struct file_operations atk_debugfs_ggrp_fops = ;
static void atk_debugfs_init(struct atk_data *data)
static void atk_debugfs_cleanup(struct atk_data *data)
static void atk_debugfs_init(struct atk_data *data)
static void atk_debugfs_cleanup(struct atk_data *data)
static int atk_add_sensor(struct atk_data *data, union acpi_object *obj)
static int atk_enumerate_old_hwmon(struct atk_data *data)
static int atk_ec_present(struct atk_data *data)
static int atk_ec_enabled(struct atk_data *data)
static int atk_ec_ctl(struct atk_data *data, int enable)
static int atk_enumerate_new_hwmon(struct atk_data *data)
static int atk_create_files(struct atk_data *data)
static void atk_remove_files(struct atk_data *data)
static void atk_free_sensors(struct atk_data *data)
static int atk_register_hwmon(struct atk_data *data)
static int atk_probe_if(struct atk_data *data)
static int atk_add(struct acpi_device *device)
static int atk_remove(struct acpi_device *device, int type)
static int __init atk0110_init(void)
static void __exit atk0110_exit(void)
module_init(atk0110_init);
module_exit(atk0110_exit);
MODULE_LICENSE("GPL");
