#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ABIT_UGURU_ALARM_BANK			0x20
#define ABIT_UGURU_SENSOR_BANK1			0x21
#define ABIT_UGURU_FAN_PWM			0x24
#define ABIT_UGURU_SENSOR_BANK2			0x26
#define ABIT_UGURU_MAX_BANK1_SENSORS		16
#define ABIT_UGURU_MAX_BANK2_SENSORS		6
#define ABIT_UGURU_MAX_PWMS			5
#define ABIT_UGURU_TEMP_HIGH_ALARM_ENABLE	0x01
#define ABIT_UGURU_VOLT_HIGH_ALARM_ENABLE	0x02
#define ABIT_UGURU_VOLT_LOW_ALARM_ENABLE	0x04
#define ABIT_UGURU_TEMP_HIGH_ALARM_FLAG		0x10
#define ABIT_UGURU_VOLT_HIGH_ALARM_FLAG		0x20
#define ABIT_UGURU_VOLT_LOW_ALARM_FLAG		0x40
#define ABIT_UGURU_FAN_LOW_ALARM_ENABLE		0x01
#define ABIT_UGURU_BEEP_ENABLE			0x08
#define ABIT_UGURU_SHUTDOWN_ENABLE		0x80
#define ABIT_UGURU_FAN_PWM_ENABLE		0x80
#define ABIT_UGURU_FAN_MAX			15300
#define ABIT_UGURU_IN_SENSOR			0
#define ABIT_UGURU_TEMP_SENSOR			1
#define ABIT_UGURU_NC				2
#define ABIT_UGURU_WAIT_TIMEOUT			125
#define ABIT_UGURU_WAIT_TIMEOUT_SLEEP		5
#define ABIT_UGURU_READY_TIMEOUT		5
#define ABIT_UGURU_MAX_RETRIES			3
#define ABIT_UGURU_RETRY_DELAY			(HZ/5)
#define ABIT_UGURU_MAX_TIMEOUTS			2
#define ABIT_UGURU_NAME				"abituguru"
#define ABIT_UGURU_DEBUG(level, format, arg...)				\
if (level <= verbose)						\
printk(KERN_DEBUG ABIT_UGURU_NAME ": "	format , ## arg)
#define ABITUGURU_IN_NAMES_LENGTH	(11 + 2 * 9 + 2 * 15 + 2 * 22 + 10 + 14)
#define ABITUGURU_TEMP_NAMES_LENGTH	(13 + 11 + 12 + 13 + 20 + 12 + 16)
#define ABITUGURU_FAN_NAMES_LENGTH	(11 + 9 + 11 + 18 + 10 + 14)
#define ABITUGURU_PWM_NAMES_LENGTH	(12 + 24 + 2 * 21 + 2 * 22)
#define ABITUGURU_SYSFS_NAMES_LENGTH	( \
ABIT_UGURU_MAX_BANK1_SENSORS * ABITUGURU_IN_NAMES_LENGTH + \
ABIT_UGURU_MAX_BANK2_SENSORS * ABITUGURU_FAN_NAMES_LENGTH + \
ABIT_UGURU_MAX_PWMS * ABITUGURU_PWM_NAMES_LENGTH)
#define ABIT_UGURU_BASE				0x00E0
#define ABIT_UGURU_CMD				0x00
#define ABIT_UGURU_DATA				0x04
#define ABIT_UGURU_REGION_LENGTH		5
#define ABIT_UGURU_STATUS_WRITE			0x00
#define ABIT_UGURU_STATUS_READ			0x01
#define ABIT_UGURU_STATUS_INPUT			0x08
#define ABIT_UGURU_STATUS_READY			0x09
static const int abituguru_bank1_max_value[2] = ;
static const u8 abituguru_bank2_min_threshold = 5;
static const u8 abituguru_bank2_max_threshold = 50;
static const int abituguru_pwm_settings_multiplier[5] = ;
static const u8 abituguru_pwm_min[5] = ;
static const u8 abituguru_pwm_max[5] = ;
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Set to one to force detection.");
static int bank1_types[ABIT_UGURU_MAX_BANK1_SENSORS] = ;
module_param_array(bank1_types, int, NULL, 0);
MODULE_PARM_DESC(bank1_types, "Bank1 sensortype autodetection override:\n"
"   -1 autodetect\n"
"    0 volt sensor\n"
"    1 temp sensor\n"
"    2 not connected");
static int fan_sensors;
module_param(fan_sensors, int, 0);
MODULE_PARM_DESC(fan_sensors, "Number of fan sensors on the uGuru "
"(0 = autodetect)");
static int pwms;
module_param(pwms, int, 0);
MODULE_PARM_DESC(pwms, "Number of PWMs on the uGuru "
"(0 = autodetect)");
static int verbose = 2;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "How verbose should the driver be? (0-3):\n"
"   0 normal output\n"
"   1 + verbose error reporting\n"
"   2 + sensors type probing info\n"
"   3 + retryable error reporting");
struct abituguru_data ;
static const char *never_happen = "This should never happen.";
static const char *report_this =
"Please report this to the abituguru maintainer (see MAINTAINERS)";
static int abituguru_wait(struct abituguru_data *data, u8 state)
static int abituguru_ready(struct abituguru_data *data)
static int abituguru_send_address(struct abituguru_data *data,
u8 bank_addr, u8 sensor_addr, int retries)
static int abituguru_read(struct abituguru_data *data,
u8 bank_addr, u8 sensor_addr, u8 *buf, int count, int retries)
static int abituguru_write(struct abituguru_data *data,
u8 bank_addr, u8 sensor_addr, u8 *buf, int count)
static int __devinit
abituguru_detect_bank1_sensor_type(struct abituguru_data *data,
u8 sensor_addr)
static void __devinit
abituguru_detect_no_bank2_sensors(struct abituguru_data *data)
static void __devinit
abituguru_detect_no_pwms(struct abituguru_data *data)
static struct abituguru_data *abituguru_update_device(struct device *dev);
static ssize_t show_bank1_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_bank1_setting(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_bank2_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_bank2_setting(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_bank1_setting(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t store_bank2_setting(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_bank1_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_bank2_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_bank1_mask(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_bank2_mask(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_bank1_mask(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count)
static ssize_t store_bank2_mask(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count)
static ssize_t show_pwm_setting(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm_setting(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_pwm_sensor(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm_sensor(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_pwm_enable(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_name(struct device *dev,
struct device_attribute *devattr, char *buf)
static const
struct sensor_device_attribute_2 abituguru_sysfs_bank1_templ[2][9] = ;
static const struct sensor_device_attribute_2 abituguru_sysfs_fan_templ[6] = ;
static const struct sensor_device_attribute_2 abituguru_sysfs_pwm_templ[6] = ;
static struct sensor_device_attribute_2 abituguru_sysfs_attr[] = ;
static int __devinit abituguru_probe(struct platform_device *pdev)
static int __devexit abituguru_remove(struct platform_device *pdev)
static struct abituguru_data *abituguru_update_device(struct device *dev)
static int abituguru_suspend(struct platform_device *pdev, pm_message_t state)
static int abituguru_resume(struct platform_device *pdev)
#define abituguru_suspend	NULL
#define abituguru_resume	NULL
static struct platform_driver abituguru_driver = ;
static int __init abituguru_detect(void)
static struct platform_device *abituguru_pdev;
static int __init abituguru_init(void)
static void __exit abituguru_exit(void)
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("Abit uGuru Sensor device");
MODULE_LICENSE("GPL");
module_init(abituguru_init);
module_exit(abituguru_exit);
