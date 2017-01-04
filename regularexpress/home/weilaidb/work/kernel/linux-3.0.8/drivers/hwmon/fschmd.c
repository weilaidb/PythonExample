static const unsigned short normal_i2c[] = ;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
enum chips ;
#define FSCHMD_REG_IDENT_0		0x00
#define FSCHMD_REG_IDENT_1		0x01
#define FSCHMD_REG_IDENT_2		0x02
#define FSCHMD_REG_REVISION		0x03
#define FSCHMD_REG_EVENT_STATE		0x04
#define FSCHMD_REG_CONTROL		0x05
#define FSCHMD_CONTROL_ALERT_LED	0x01
static const u8 FSCHMD_REG_WDOG_CONTROL[7] =
;
static const u8 FSCHMD_REG_WDOG_STATE[7] =
;
static const u8 FSCHMD_REG_WDOG_PRESET[7] =
;
#define FSCHMD_WDOG_CONTROL_TRIGGER	0x10
#define FSCHMD_WDOG_CONTROL_STARTED	0x10
#define FSCHMD_WDOG_CONTROL_STOP	0x20
#define FSCHMD_WDOG_CONTROL_RESOLUTION	0x40
#define FSCHMD_WDOG_STATE_CARDRESET	0x02
static const u8 FSCHMD_REG_VOLT[7][6] = ;
static const int FSCHMD_NO_VOLT_SENSORS[7] = ;
static const u8 FSCHMD_REG_FAN_MIN[7][7] = ;
static const u8 FSCHMD_REG_FAN_ACT[7][7] = ;
static const u8 FSCHMD_REG_FAN_STATE[7][7] = ;
static const u8 FSCHMD_REG_FAN_RIPPLE[7][7] = ;
static const int FSCHMD_NO_FAN_SENSORS[7] = ;
#define FSCHMD_FAN_ALARM	0x04
#define FSCHMD_FAN_NOT_PRESENT	0x08
#define FSCHMD_FAN_DISABLED	0x80
static const u8 FSCHMD_REG_TEMP_ACT[7][11] = ;
static const u8 FSCHMD_REG_TEMP_STATE[7][11] = ;
static const u8 FSCHMD_REG_TEMP_LIMIT[7][11] = ;
static const int FSCHMD_NO_TEMP_SENSORS[7] = ;
#define FSCHMD_TEMP_WORKING	0x01
#define FSCHMD_TEMP_ALERT	0x02
#define FSCHMD_TEMP_DISABLED	0x80
#define FSCHMD_TEMP_ALARM_MASK \
(FSCHMD_TEMP_WORKING | FSCHMD_TEMP_ALERT)
static int fschmd_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int fschmd_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int fschmd_remove(struct i2c_client *client);
static struct fschmd_data *fschmd_update_device(struct device *dev);
static const struct i2c_device_id fschmd_id[] = ;
MODULE_DEVICE_TABLE(i2c, fschmd_id);
static struct i2c_driver fschmd_driver = ;
struct fschmd_data ;
static int dmi_mult[6] = ;
static int dmi_offset[6] = ;
static int dmi_vref = -1;
static LIST_HEAD(watchdog_data_list);
static DEFINE_MUTEX(watchdog_data_mutex);
static void fschmd_release_resources(struct kref *ref)
static ssize_t show_in_value(struct device *dev,
struct device_attribute *devattr, char *buf)
#define TEMP_FROM_REG(val)	(((val) - 128) * 1000)
static ssize_t show_temp_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_temp_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_temp_fault(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
#define RPM_FROM_REG(val)	((val) * 60)
static ssize_t show_fan_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_fan_div(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_fan_div(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_fan_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_fan_fault(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_pwm_auto_point1_pwm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm_auto_point1_pwm(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count)
static ssize_t show_alert_led(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_alert_led(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count)
static DEVICE_ATTR(alert_led, 0644, show_alert_led, store_alert_led);
static struct sensor_device_attribute fschmd_attr[] = ;
static struct sensor_device_attribute fschmd_temp_attr[] = ;
static struct sensor_device_attribute fschmd_fan_attr[] = ;
static int watchdog_set_timeout(struct fschmd_data *data, int timeout)
static int watchdog_get_timeout(struct fschmd_data *data)
static int watchdog_trigger(struct fschmd_data *data)
static int watchdog_stop(struct fschmd_data *data)
static int watchdog_open(struct inode *inode, struct file *filp)
static int watchdog_release(struct inode *inode, struct file *filp)
static ssize_t watchdog_write(struct file *filp, const char __user *buf,
size_t count, loff_t *offset)
static long watchdog_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static const struct file_operations watchdog_fops = ;
static void fschmd_dmi_decode(const struct dmi_header *header, void *dummy)
static int fschmd_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int fschmd_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int fschmd_remove(struct i2c_client *client)
static struct fschmd_data *fschmd_update_device(struct device *dev)
static int __init fschmd_init(void)
static void __exit fschmd_exit(void)
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("FSC Poseidon, Hermes, Scylla, Heracles, Heimdall, Hades "
"and Syleus driver");
MODULE_LICENSE("GPL");
module_init(fschmd_init);
module_exit(fschmd_exit);
