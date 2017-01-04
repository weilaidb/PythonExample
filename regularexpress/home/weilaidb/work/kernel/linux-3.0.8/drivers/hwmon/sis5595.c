#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u16 force_addr;
module_param(force_addr, ushort, 0);
MODULE_PARM_DESC(force_addr,
"Initialize the base address of the sensors");
static struct platform_device *pdev;
#define SIS5595_EXTENT 8
#define SIS5595_BASE_REG 0x68
#define SIS5595_PIN_REG 0x7A
#define SIS5595_ENABLE_REG 0x7B
#define SIS5595_ADDR_REG_OFFSET 5
#define SIS5595_DATA_REG_OFFSET 6
#define SIS5595_REG_IN_MAX(nr) (0x2b + (nr) * 2)
#define SIS5595_REG_IN_MIN(nr) (0x2c + (nr) * 2)
#define SIS5595_REG_IN(nr) (0x20 + (nr))
#define SIS5595_REG_FAN_MIN(nr) (0x3b + (nr))
#define SIS5595_REG_FAN(nr) (0x28 + (nr))
#define REV2MIN	0xb0
#define SIS5595_REG_TEMP 	(( data->revision) >= REV2MIN) ? \
SIS5595_REG_IN(4) : 0x27
#define SIS5595_REG_TEMP_OVER	(( data->revision) >= REV2MIN) ? \
SIS5595_REG_IN_MAX(4) : 0x39
#define SIS5595_REG_TEMP_HYST	(( data->revision) >= REV2MIN) ? \
SIS5595_REG_IN_MIN(4) : 0x3a
#define SIS5595_REG_CONFIG 0x40
#define SIS5595_REG_ALARM1 0x41
#define SIS5595_REG_ALARM2 0x42
#define SIS5595_REG_FANDIV 0x47
static inline u8 IN_TO_REG(unsigned long val)
#define IN_FROM_REG(val) ((val) *  16)
static inline u8 FAN_TO_REG(long rpm, int div)
static inline int FAN_FROM_REG(u8 val, int div)
static inline int TEMP_FROM_REG(s8 val)
static inline s8 TEMP_TO_REG(int val)
static inline u8 DIV_TO_REG(int val)
#define DIV_FROM_REG(val) (1 << (val))
struct sis5595_data ;
static struct pci_dev *s_bridge;
static int sis5595_probe(struct platform_device *pdev);
static int __devexit sis5595_remove(struct platform_device *pdev);
static int sis5595_read_value(struct sis5595_data *data, u8 reg);
static void sis5595_write_value(struct sis5595_data *data, u8 reg, u8 value);
static struct sis5595_data *sis5595_update_device(struct device *dev);
static void sis5595_init_device(struct sis5595_data *data);
static struct platform_driver sis5595_driver = ;
static ssize_t show_in(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_in_offset(offset)					\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in, NULL, offset);				\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset);
show_in_offset(0);
show_in_offset(1);
show_in_offset(2);
show_in_offset(3);
show_in_offset(4);
static ssize_t show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_temp_over(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_temp_over(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_temp_hyst(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_temp_hyst(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL);
static DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR,
show_temp_over, set_temp_over);
static DEVICE_ATTR(temp1_max_hyst, S_IRUGO | S_IWUSR,
show_temp_hyst, set_temp_hyst);
static ssize_t show_fan(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_fan_offset(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,			\
show_fan, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, set_fan_min, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR,		\
show_fan_div, set_fan_div, offset - 1);
show_fan_offset(1);
show_fan_offset(2);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *da,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 15);
static ssize_t show_name(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *sis5595_attributes[] = ;
static const struct attribute_group sis5595_group = ;
static struct attribute *sis5595_attributes_in4[] = ;
static const struct attribute_group sis5595_group_in4 = ;
static struct attribute *sis5595_attributes_temp1[] = ;
static const struct attribute_group sis5595_group_temp1 = ;
static int __devinit sis5595_probe(struct platform_device *pdev)
static int __devexit sis5595_remove(struct platform_device *pdev)
static int sis5595_read_value(struct sis5595_data *data, u8 reg)
static void sis5595_write_value(struct sis5595_data *data, u8 reg, u8 value)
static void __devinit sis5595_init_device(struct sis5595_data *data)
static struct sis5595_data *sis5595_update_device(struct device *dev)
static const struct pci_device_id sis5595_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, sis5595_pci_ids);
static int blacklist[] __devinitdata = ;
static int __devinit sis5595_device_add(unsigned short address)
static int __devinit sis5595_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static struct pci_driver sis5595_pci_driver = ;
static int __init sm_sis5595_init(void)
static void __exit sm_sis5595_exit(void)
MODULE_AUTHOR("Aurelien Jarno <aurelien@aurel32.net>");
MODULE_DESCRIPTION("SiS 5595 Sensor device");
MODULE_LICENSE("GPL");
module_init(sm_sis5595_init);
module_exit(sm_sis5595_exit);
