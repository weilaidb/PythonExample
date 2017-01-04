#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define APPLESMC_DATA_PORT	0x300
#define APPLESMC_CMD_PORT	0x304
#define APPLESMC_NR_PORTS	32
#define APPLESMC_MAX_DATA_LENGTH 32
#define APPLESMC_MIN_WAIT	0x0040
#define APPLESMC_MAX_WAIT	0x8000
#define APPLESMC_STATUS_MASK	0x0f
#define APPLESMC_READ_CMD	0x10
#define APPLESMC_WRITE_CMD	0x11
#define APPLESMC_GET_KEY_BY_INDEX_CMD	0x12
#define APPLESMC_GET_KEY_TYPE_CMD	0x13
#define KEY_COUNT_KEY		"#KEY"
#define LIGHT_SENSOR_LEFT_KEY	"ALV0"
#define LIGHT_SENSOR_RIGHT_KEY	"ALV1"
#define BACKLIGHT_KEY		"LKSB"
#define CLAMSHELL_KEY		"MSLD"
#define MOTION_SENSOR_X_KEY	"MO_X"
#define MOTION_SENSOR_Y_KEY	"MO_Y"
#define MOTION_SENSOR_Z_KEY	"MO_Z"
#define MOTION_SENSOR_KEY	"MOCN"
#define FANS_COUNT		"FNum"
#define FANS_MANUAL		"FS! "
#define FAN_ID_FMT		"F%dID"
static const char *const fan_speed_fmt[] = ;
#define INIT_TIMEOUT_MSECS	5000
#define INIT_WAIT_MSECS		50
#define APPLESMC_POLL_INTERVAL	50
#define APPLESMC_INPUT_FUZZ	4
#define APPLESMC_INPUT_FLAT	4
#define SENSOR_X 0
#define SENSOR_Y 1
#define SENSOR_Z 2
#define to_index(attr) (to_sensor_dev_attr(attr)->index & 0xffff)
#define to_option(attr) (to_sensor_dev_attr(attr)->index >> 16)
struct applesmc_dev_attr ;
struct applesmc_node_group ;
struct applesmc_entry ;
static struct applesmc_registers  smcreg = ;
static const int debug;
static struct platform_device *pdev;
static s16 rest_x;
static s16 rest_y;
static u8 backlight_state[2];
static struct device *hwmon_dev;
static struct input_polled_dev *applesmc_idev;
static unsigned int key_at_index;
static struct workqueue_struct *applesmc_led_wq;
static int __wait_status(u8 val)
static int send_command(u8 cmd)
static int send_argument(const char *key)
static int read_smc(u8 cmd, const char *key, u8 *buffer, u8 len)
static int write_smc(u8 cmd, const char *key, const u8 *buffer, u8 len)
static int read_register_count(unsigned int *count)
static int applesmc_read_entry(const struct applesmc_entry *entry,
u8 *buf, u8 len)
static int applesmc_write_entry(const struct applesmc_entry *entry,
const u8 *buf, u8 len)
static const struct applesmc_entry *applesmc_get_entry_by_index(int index)
static int applesmc_get_lower_bound(unsigned int *lo, const char *key)
static int applesmc_get_upper_bound(unsigned int *hi, const char *key)
static const struct applesmc_entry *applesmc_get_entry_by_key(const char *key)
static int applesmc_read_key(const char *key, u8 *buffer, u8 len)
static int applesmc_write_key(const char *key, const u8 *buffer, u8 len)
static int applesmc_has_key(const char *key, bool *value)
static int applesmc_read_motion_sensor(int index, s16 *value)
static void applesmc_device_init(void)
static int applesmc_init_smcreg_try(void)
static int applesmc_init_smcreg(void)
static void applesmc_destroy_smcreg(void)
static int applesmc_probe(struct platform_device *dev)
static int applesmc_pm_resume(struct device *dev)
static int applesmc_pm_restore(struct device *dev)
static const struct dev_pm_ops applesmc_pm_ops = ;
static struct platform_driver applesmc_driver = ;
static void applesmc_calibrate(void)
static void applesmc_idev_poll(struct input_polled_dev *dev)
static ssize_t applesmc_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t applesmc_position_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t applesmc_light_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_show_sensor_label(struct device *dev,
struct device_attribute *devattr, char *sysfsbuf)
static ssize_t applesmc_show_temperature(struct device *dev,
struct device_attribute *devattr, char *sysfsbuf)
static ssize_t applesmc_show_fan_speed(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_store_fan_speed(struct device *dev,
struct device_attribute *attr,
const char *sysfsbuf, size_t count)
static ssize_t applesmc_show_fan_manual(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_store_fan_manual(struct device *dev,
struct device_attribute *attr,
const char *sysfsbuf, size_t count)
static ssize_t applesmc_show_fan_position(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_calibrate_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_calibrate_store(struct device *dev,
struct device_attribute *attr, const char *sysfsbuf, size_t count)
static void applesmc_backlight_set(struct work_struct *work)
static DECLARE_WORK(backlight_work, &applesmc_backlight_set);
static void applesmc_brightness_set(struct led_classdev *led_cdev,
enum led_brightness value)
static ssize_t applesmc_key_count_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_key_at_index_read_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_key_at_index_data_length_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_key_at_index_type_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_key_at_index_name_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_key_at_index_show(struct device *dev,
struct device_attribute *attr, char *sysfsbuf)
static ssize_t applesmc_key_at_index_store(struct device *dev,
struct device_attribute *attr, const char *sysfsbuf, size_t count)
static struct led_classdev applesmc_backlight = ;
static struct applesmc_node_group info_group[] = ;
static struct applesmc_node_group accelerometer_group[] = ;
static struct applesmc_node_group light_sensor_group[] = ;
static struct applesmc_node_group fan_group[] = ;
static struct applesmc_node_group temp_group[] = ;
static void applesmc_destroy_nodes(struct applesmc_node_group *groups)
static int applesmc_create_nodes(struct applesmc_node_group *groups, int num)
static int applesmc_create_accelerometer(void)
static void applesmc_release_accelerometer(void)
static int applesmc_create_light_sensor(void)
static void applesmc_release_light_sensor(void)
static int applesmc_create_key_backlight(void)
static void applesmc_release_key_backlight(void)
static int applesmc_dmi_match(const struct dmi_system_id *id)
static __initdata struct dmi_system_id applesmc_whitelist[] = ;
static int __init applesmc_init(void)
static void __exit applesmc_exit(void)
module_init(applesmc_init);
module_exit(applesmc_exit);
MODULE_AUTHOR("Nicolas Boichat");
MODULE_DESCRIPTION("Apple SMC");
MODULE_LICENSE("GPL v2");
MODULE_DEVICE_TABLE(dmi, applesmc_whitelist);
