#define DRV_MODULE_VERSION	"0.1"
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Ultra45 environmental monitor driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
#define REG_CMD		0x00UL
#define  REG_CMD_RESET	0x80
#define  REG_CMD_ESTAR	0x01
#define REG_STAT	0x01UL
#define  REG_STAT_FWVER	0xf0
#define  REG_STAT_TGOOD	0x08
#define  REG_STAT_STALE	0x04
#define  REG_STAT_BUSY	0x02
#define  REG_STAT_FAULT	0x01
#define REG_DATA	0x40UL
#define REG_ADDR	0x41UL
#define REG_SIZE	0x42UL
#define IREG_FAN0		0x00
#define IREG_FAN1		0x01
#define IREG_FAN2		0x02
#define IREG_FAN3		0x03
#define IREG_FAN4		0x04
#define IREG_FAN5		0x05
#define IREG_LCL_TEMP		0x06
#define IREG_RMT1_TEMP		0x07
#define IREG_RMT2_TEMP		0x08
#define IREG_RMT3_TEMP		0x09
#define IREG_LM95221_TEMP	0x0a
#define IREG_FIRE_TEMP		0x0b
#define IREG_LSI1064_TEMP	0x0c
#define IREG_FRONT_TEMP		0x0d
#define IREG_FAN_STAT		0x0e
#define IREG_VCORE0		0x0f
#define IREG_VCORE1		0x10
#define IREG_VMEM0		0x11
#define IREG_VMEM1		0x12
#define IREG_PSU_TEMP		0x13
struct env ;
static u8 env_read(struct env *p, u8 ireg)
static void env_write(struct env *p, u8 ireg, u8 val)
#define FAN_PERIOD_TO_RPM(x)	((90000 * 60) / (x))
#define FAN_RPM_TO_PERIOD	FAN_PERIOD_TO_RPM
#define FAN_PERIOD_INVALID	(0xff << 8)
#define FAN_DATA_VALID(x)	((x) && (x) != FAN_PERIOD_INVALID)
static ssize_t show_fan_speed(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_fan_speed(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_fan_fault(struct device *dev, struct device_attribute *attr, char *buf)
#define fan(index)							\
static SENSOR_DEVICE_ATTR(fan##index##_speed, S_IRUGO | S_IWUSR,	\
show_fan_speed, set_fan_speed, index);			\
static SENSOR_DEVICE_ATTR(fan##index##_fault, S_IRUGO,			\
show_fan_fault, NULL, index)
fan(0);
fan(1);
fan(2);
fan(3);
fan(4);
static SENSOR_DEVICE_ATTR(psu_fan_fault, S_IRUGO, show_fan_fault, NULL, 6);
static ssize_t show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(adt7462_local_temp, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(cpu0_temp, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(cpu1_temp, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(motherboard_temp, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(lm95221_local_temp, S_IRUGO, show_temp, NULL, 4);
static SENSOR_DEVICE_ATTR(fire_temp, S_IRUGO, show_temp, NULL, 5);
static SENSOR_DEVICE_ATTR(lsi1064_local_temp, S_IRUGO, show_temp, NULL, 6);
static SENSOR_DEVICE_ATTR(front_panel_temp, S_IRUGO, show_temp, NULL, 7);
static SENSOR_DEVICE_ATTR(psu_temp, S_IRUGO, show_temp, NULL, 13);
static ssize_t show_stat_bit(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(fan_failure, S_IRUGO, show_stat_bit, NULL, 0);
static SENSOR_DEVICE_ATTR(env_bus_busy, S_IRUGO, show_stat_bit, NULL, 1);
static SENSOR_DEVICE_ATTR(env_data_stale, S_IRUGO, show_stat_bit, NULL, 2);
static SENSOR_DEVICE_ATTR(tpm_self_test_passed, S_IRUGO, show_stat_bit, NULL, 3);
static ssize_t show_fwver(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(firmware_version, S_IRUGO, show_fwver, NULL, 0);
static ssize_t show_name(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(name, S_IRUGO, show_name, NULL, 0);
static struct attribute *env_attributes[] = ;
static const struct attribute_group env_group = ;
static int __devinit env_probe(struct platform_device *op)
static int __devexit env_remove(struct platform_device *op)
static const struct of_device_id env_match[] = ;
MODULE_DEVICE_TABLE(of, env_match);
static struct platform_driver env_driver = ;
static int __init env_init(void)
static void __exit env_exit(void)
module_init(env_init);
module_exit(env_exit);
