#define I8K_VERSION		"1.14 21/02/2005"
#define I8K_SMM_FN_STATUS	0x0025
#define I8K_SMM_POWER_STATUS	0x0069
#define I8K_SMM_SET_FAN		0x01a3
#define I8K_SMM_GET_FAN		0x00a3
#define I8K_SMM_GET_SPEED	0x02a3
#define I8K_SMM_GET_TEMP	0x10a3
#define I8K_SMM_GET_DELL_SIG1	0xfea3
#define I8K_SMM_GET_DELL_SIG2	0xffa3
#define I8K_SMM_BIOS_VERSION	0x00a6
#define I8K_FAN_MULT		30
#define I8K_MAX_TEMP		127
#define I8K_FN_NONE		0x00
#define I8K_FN_UP		0x01
#define I8K_FN_DOWN		0x02
#define I8K_FN_MUTE		0x04
#define I8K_FN_MASK		0x07
#define I8K_FN_SHIFT		8
#define I8K_POWER_AC		0x05
#define I8K_POWER_BATTERY	0x01
#define I8K_TEMPERATURE_BUG	1
static DEFINE_MUTEX(i8k_mutex);
static char bios_version[4];
static struct device *i8k_hwmon_dev;
MODULE_AUTHOR("Massimo Dal Zotto (dz@debian.org)");
MODULE_DESCRIPTION("Driver for accessing SMM BIOS on Dell laptops");
MODULE_LICENSE("GPL");
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Force loading without checking for supported models");
static int ignore_dmi;
module_param(ignore_dmi, bool, 0);
MODULE_PARM_DESC(ignore_dmi, "Continue probing hardware even if DMI data does not match");
static int restricted;
module_param(restricted, bool, 0);
MODULE_PARM_DESC(restricted, "Allow fan control if SYS_ADMIN capability set");
static int power_status;
module_param(power_status, bool, 0600);
MODULE_PARM_DESC(power_status, "Report power status in /proc/i8k");
static int fan_mult = I8K_FAN_MULT;
module_param(fan_mult, int, 0);
MODULE_PARM_DESC(fan_mult, "Factor to multiply fan speed with");
static int i8k_open_fs(struct inode *inode, struct file *file);
static long i8k_ioctl(struct file *, unsigned int, unsigned long);
static const struct file_operations i8k_fops = ;
struct smm_regs ;
static inline const char *i8k_get_dmi_data(int field)
static int i8k_smm(struct smm_regs *regs)
static int i8k_get_bios_version(void)
static int i8k_get_fn_status(void)
static int i8k_get_power_status(void)
static int i8k_get_fan_status(int fan)
static int i8k_get_fan_speed(int fan)
static int i8k_set_fan(int fan, int speed)
static int i8k_get_temp(int sensor)
static int i8k_get_dell_signature(int req_fn)
static int
i8k_ioctl_unlocked(struct file *fp, unsigned int cmd, unsigned long arg)
static long i8k_ioctl(struct file *fp, unsigned int cmd, unsigned long arg)
static int i8k_proc_show(struct seq_file *seq, void *offset)
static int i8k_open_fs(struct inode *inode, struct file *file)
static ssize_t i8k_hwmon_show_temp(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t i8k_hwmon_show_fan(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t i8k_hwmon_show_label(struct device *dev,
struct device_attribute *devattr,
char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO, i8k_hwmon_show_temp, NULL);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, i8k_hwmon_show_fan, NULL,
I8K_FAN_LEFT);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, i8k_hwmon_show_fan, NULL,
I8K_FAN_RIGHT);
static SENSOR_DEVICE_ATTR(name, S_IRUGO, i8k_hwmon_show_label, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_label, S_IRUGO, i8k_hwmon_show_label, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_label, S_IRUGO, i8k_hwmon_show_label, NULL, 2);
static SENSOR_DEVICE_ATTR(fan2_label, S_IRUGO, i8k_hwmon_show_label, NULL, 3);
static void i8k_hwmon_remove_files(struct device *dev)
static int __init i8k_init_hwmon(void)
static void __exit i8k_exit_hwmon(void)
static struct dmi_system_id __initdata i8k_dmi_table[] = ;
static int __init i8k_probe(void)
static int __init i8k_init(void)
static void __exit i8k_exit(void)
module_init(i8k_init);
module_exit(i8k_exit);
