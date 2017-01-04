#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ABIT_UGURU3_SETTINGS_BANK		0x01
#define ABIT_UGURU3_SENSORS_BANK		0x08
#define ABIT_UGURU3_MISC_BANK			0x09
#define ABIT_UGURU3_ALARMS_START		0x1E
#define ABIT_UGURU3_SETTINGS_START		0x24
#define ABIT_UGURU3_VALUES_START		0x80
#define ABIT_UGURU3_BOARD_ID			0x0A
#define ABIT_UGURU3_TEMP_HIGH_ALARM_ENABLE	0x01
#define ABIT_UGURU3_VOLT_HIGH_ALARM_ENABLE	0x02
#define ABIT_UGURU3_VOLT_LOW_ALARM_ENABLE	0x04
#define ABIT_UGURU3_TEMP_HIGH_ALARM_FLAG	0x10
#define ABIT_UGURU3_VOLT_HIGH_ALARM_FLAG	0x20
#define ABIT_UGURU3_VOLT_LOW_ALARM_FLAG		0x40
#define ABIT_UGURU3_FAN_LOW_ALARM_ENABLE	0x01
#define ABIT_UGURU3_BEEP_ENABLE			0x08
#define ABIT_UGURU3_SHUTDOWN_ENABLE		0x80
#define ABIT_UGURU3_IN_SENSOR			0
#define ABIT_UGURU3_TEMP_SENSOR			1
#define ABIT_UGURU3_FAN_SENSOR			2
#define ABIT_UGURU3_WAIT_TIMEOUT		250
#define ABIT_UGURU3_SYNCHRONIZE_TIMEOUT		5
#define ABIT_UGURU3_NAME			"abituguru3"
#define ABIT_UGURU3_DEBUG(format, arg...)	\
if (verbose)				\
printk(KERN_DEBUG ABIT_UGURU3_NAME ": "	format , ## arg)
#define ABIT_UGURU3_MAX_NO_SENSORS 26
#define ABIT_UGURU3_IN_NAMES_LENGTH (11 + 2 * 9 + 2 * 15 + 2 * 22 + 10 + 14 + 11)
#define ABIT_UGURU3_TEMP_NAMES_LENGTH (13 + 11 + 12 + 13 + 20 + 12 + 16 + 13)
#define ABIT_UGURU3_FAN_NAMES_LENGTH (12 + 10 + 12 + 19 + 11 + 15 + 12)
#define ABIT_UGURU3_SYSFS_NAMES_LENGTH (16 * ABIT_UGURU3_IN_NAMES_LENGTH + \
(ABIT_UGURU3_MAX_NO_SENSORS - 16) * ABIT_UGURU3_TEMP_NAMES_LENGTH)
#define ABIT_UGURU3_BASE			0x00E0
#define ABIT_UGURU3_CMD				0x00
#define ABIT_UGURU3_DATA			0x04
#define ABIT_UGURU3_REGION_LENGTH		5
#define ABIT_UGURU3_SUCCESS			-1
#define ABIT_UGURU3_STATUS_READY_FOR_READ	0x01
#define ABIT_UGURU3_STATUS_BUSY			0x02
struct abituguru3_sensor_info ;
#define ABIT_UGURU3_MAX_DMI_NAMES 2
struct abituguru3_motherboard_info ;
struct abituguru3_data ;
static const struct abituguru3_motherboard_info abituguru3_motherboards[] = ;
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Set to one to force detection.");
static int verbose = 1;
module_param(verbose, bool, 0644);
MODULE_PARM_DESC(verbose, "Enable/disable verbose error reporting");
static const char *never_happen = "This should never happen.";
static const char *report_this =
"Please report this to the abituguru3 maintainer (see MAINTAINERS)";
static int abituguru3_wait_while_busy(struct abituguru3_data *data)
static int abituguru3_wait_for_read(struct abituguru3_data *data)
static int abituguru3_synchronize(struct abituguru3_data *data)
static int abituguru3_read(struct abituguru3_data *data, u8 bank, u8 offset,
u8 count, u8 *buf)
static int abituguru3_read_increment_offset(struct abituguru3_data *data,
u8 bank, u8 offset, u8 count,
u8 *buf, int offset_count)
static struct abituguru3_data *abituguru3_update_device(struct device *dev);
static ssize_t show_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_mask(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_label(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_name(struct device *dev,
struct device_attribute *devattr, char *buf)
static const
struct sensor_device_attribute_2 abituguru3_sysfs_templ[3][10] = ;
static struct sensor_device_attribute_2 abituguru3_sysfs_attr[] = ;
static int __devinit abituguru3_probe(struct platform_device *pdev)
static int __devexit abituguru3_remove(struct platform_device *pdev)
static struct abituguru3_data *abituguru3_update_device(struct device *dev)
static int abituguru3_suspend(struct platform_device *pdev, pm_message_t state)
static int abituguru3_resume(struct platform_device *pdev)
#define abituguru3_suspend	NULL
#define abituguru3_resume	NULL
static struct platform_driver abituguru3_driver = ;
static int __init abituguru3_dmi_detect(void)
static int __init abituguru3_detect(void)
static struct platform_device *abituguru3_pdev;
static int __init abituguru3_init(void)
static void __exit abituguru3_exit(void)
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("Abit uGuru3 Sensor device");
MODULE_LICENSE("GPL");
module_init(abituguru3_init);
module_exit(abituguru3_exit);
