#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVNAME "sch5627"
#define DEVNAME DRVNAME
#define SIO_SCH5627_EM_LD	0x0C
#define SIO_UNLOCK_KEY		0x55
#define SIO_LOCK_KEY		0xAA
#define SIO_REG_LDSEL		0x07
#define SIO_REG_DEVID		0x20
#define SIO_REG_ENABLE		0x30
#define SIO_REG_ADDR		0x66
#define SIO_SCH5627_ID		0xC6
#define REGION_LENGTH		9
#define SCH5627_HWMON_ID		0xa5
#define SCH5627_COMPANY_ID		0x5c
#define SCH5627_PRIMARY_ID		0xa0
#define SCH5627_CMD_READ		0x02
#define SCH5627_CMD_WRITE		0x03
#define SCH5627_REG_BUILD_CODE		0x39
#define SCH5627_REG_BUILD_ID		0x3a
#define SCH5627_REG_HWMON_ID		0x3c
#define SCH5627_REG_HWMON_REV		0x3d
#define SCH5627_REG_COMPANY_ID		0x3e
#define SCH5627_REG_PRIMARY_ID		0x3f
#define SCH5627_REG_CTRL		0x40
#define SCH5627_NO_TEMPS		8
#define SCH5627_NO_FANS			4
#define SCH5627_NO_IN			5
static const u16 SCH5627_REG_TEMP_MSB[SCH5627_NO_TEMPS] = ;
static const u16 SCH5627_REG_TEMP_LSN[SCH5627_NO_TEMPS] = ;
static const u16 SCH5627_REG_TEMP_HIGH_NIBBLE[SCH5627_NO_TEMPS] = ;
static const u16 SCH5627_REG_TEMP_HIGH[SCH5627_NO_TEMPS] = ;
static const u16 SCH5627_REG_TEMP_ABS[SCH5627_NO_TEMPS] = ;
static const u16 SCH5627_REG_FAN[SCH5627_NO_FANS] = ;
static const u16 SCH5627_REG_FAN_MIN[SCH5627_NO_FANS] = ;
static const u16 SCH5627_REG_IN_MSB[SCH5627_NO_IN] = ;
static const u16 SCH5627_REG_IN_LSN[SCH5627_NO_IN] = ;
static const u16 SCH5627_REG_IN_HIGH_NIBBLE[SCH5627_NO_IN] = ;
static const u16 SCH5627_REG_IN_FACTOR[SCH5627_NO_IN] = ;
static const char * const SCH5627_IN_LABELS[SCH5627_NO_IN] = ;
struct sch5627_data ;
static struct platform_device *sch5627_pdev;
static inline int superio_inb(int base, int reg)
static inline int superio_enter(int base)
static inline void superio_select(int base, int ld)
static inline void superio_exit(int base)
static int sch5627_send_cmd(struct sch5627_data *data, u8 cmd, u16 reg, u8 v)
static int sch5627_read_virtual_reg(struct sch5627_data *data, u16 reg)
static int sch5627_write_virtual_reg(struct sch5627_data *data,
u16 reg, u8 val)
static int sch5627_read_virtual_reg16(struct sch5627_data *data, u16 reg)
static int sch5627_read_virtual_reg12(struct sch5627_data *data, u16 msb_reg,
u16 lsn_reg, int high_nibble)
static struct sch5627_data *sch5627_update_device(struct device *dev)
static int __devinit sch5627_read_limits(struct sch5627_data *data)
static int reg_to_temp(u16 reg)
static int reg_to_temp_limit(u8 reg)
static int reg_to_rpm(u16 reg)
static ssize_t show_name(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_temp(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_fault(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_crit(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan_fault(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_in(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_in_label(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_input, S_IRUGO, show_temp, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_input, S_IRUGO, show_temp, NULL, 5);
static SENSOR_DEVICE_ATTR(temp7_input, S_IRUGO, show_temp, NULL, 6);
static SENSOR_DEVICE_ATTR(temp8_input, S_IRUGO, show_temp, NULL, 7);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, show_temp_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_temp_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_temp_fault, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_fault, S_IRUGO, show_temp_fault, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_fault, S_IRUGO, show_temp_fault, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_fault, S_IRUGO, show_temp_fault, NULL, 5);
static SENSOR_DEVICE_ATTR(temp7_fault, S_IRUGO, show_temp_fault, NULL, 6);
static SENSOR_DEVICE_ATTR(temp8_fault, S_IRUGO, show_temp_fault, NULL, 7);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO, show_temp_max, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO, show_temp_max, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_max, S_IRUGO, show_temp_max, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_max, S_IRUGO, show_temp_max, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_max, S_IRUGO, show_temp_max, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_max, S_IRUGO, show_temp_max, NULL, 5);
static SENSOR_DEVICE_ATTR(temp7_max, S_IRUGO, show_temp_max, NULL, 6);
static SENSOR_DEVICE_ATTR(temp8_max, S_IRUGO, show_temp_max, NULL, 7);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO, show_temp_crit, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IRUGO, show_temp_crit, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_crit, S_IRUGO, show_temp_crit, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_crit, S_IRUGO, show_temp_crit, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_crit, S_IRUGO, show_temp_crit, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_crit, S_IRUGO, show_temp_crit, NULL, 5);
static SENSOR_DEVICE_ATTR(temp7_crit, S_IRUGO, show_temp_crit, NULL, 6);
static SENSOR_DEVICE_ATTR(temp8_crit, S_IRUGO, show_temp_crit, NULL, 7);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan, NULL, 3);
static SENSOR_DEVICE_ATTR(fan1_fault, S_IRUGO, show_fan_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_fault, S_IRUGO, show_fan_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_fault, S_IRUGO, show_fan_fault, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_fault, S_IRUGO, show_fan_fault, NULL, 3);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO, show_fan_min, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IRUGO, show_fan_min, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_min, S_IRUGO, show_fan_min, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_min, S_IRUGO, show_fan_min, NULL, 3);
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, show_in, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_in, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_in, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_in, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_in, NULL, 4);
static SENSOR_DEVICE_ATTR(in0_label, S_IRUGO, show_in_label, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_label, S_IRUGO, show_in_label, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_label, S_IRUGO, show_in_label, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_label, S_IRUGO, show_in_label, NULL, 3);
static struct attribute *sch5627_attributes[] = ;
static const struct attribute_group sch5627_group = ;
static int sch5627_remove(struct platform_device *pdev)
static int __devinit sch5627_probe(struct platform_device *pdev)
static int __init sch5627_find(int sioaddr, unsigned short *address)
static int __init sch5627_device_add(unsigned short address)
static struct platform_driver sch5627_driver = ;
static int __init sch5627_init(void)
static void __exit sch5627_exit(void)
MODULE_DESCRIPTION("SMSC SCH5627 Hardware Monitoring Driver");
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_LICENSE("GPL");
module_init(sch5627_init);
module_exit(sch5627_exit);
