static const unsigned short normal_i2c[] = ;
enum chips ;
#define ADM1025_REG_MAN_ID		0x3E
#define ADM1025_REG_CHIP_ID		0x3F
#define ADM1025_REG_CONFIG		0x40
#define ADM1025_REG_STATUS1		0x41
#define ADM1025_REG_STATUS2		0x42
#define ADM1025_REG_IN(nr)		(0x20 + (nr))
#define ADM1025_REG_IN_MAX(nr)		(0x2B + (nr) * 2)
#define ADM1025_REG_IN_MIN(nr)		(0x2C + (nr) * 2)
#define ADM1025_REG_TEMP(nr)		(0x26 + (nr))
#define ADM1025_REG_TEMP_HIGH(nr)	(0x37 + (nr) * 2)
#define ADM1025_REG_TEMP_LOW(nr)	(0x38 + (nr) * 2)
#define ADM1025_REG_VID			0x47
#define ADM1025_REG_VID4		0x49
static const int in_scale[6] = ;
#define IN_FROM_REG(reg,scale)	(((reg) * (scale) + 96) / 192)
#define IN_TO_REG(val,scale)	((val) <= 0 ? 0 : \
(val) * 192 >= (scale) * 255 ? 255 : \
((val) * 192 + (scale)/2) / (scale))
#define TEMP_FROM_REG(reg)	((reg) * 1000)
#define TEMP_TO_REG(val)	((val) <= -127500 ? -128 : \
(val) >= 126500 ? 127 : \
(((val) < 0 ? (val)-500 : (val)+500) / 1000))
static int adm1025_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adm1025_detect(struct i2c_client *client,
struct i2c_board_info *info);
static void adm1025_init_client(struct i2c_client *client);
static int adm1025_remove(struct i2c_client *client);
static struct adm1025_data *adm1025_update_device(struct device *dev);
static const struct i2c_device_id adm1025_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm1025_id);
static struct i2c_driver adm1025_driver = ;
struct adm1025_data ;
static ssize_t
show_in(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_in_min(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_in_max(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_temp_min(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_temp_max(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define set_in(offset) \
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO, \
show_in, NULL, offset); \
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IWUSR | S_IRUGO, \
show_in_min, set_in_min, offset); \
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IWUSR | S_IRUGO, \
show_in_max, set_in_max, offset)
set_in(0);
set_in(1);
set_in(2);
set_in(3);
set_in(4);
set_in(5);
static ssize_t set_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define set_temp(offset) \
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO, \
show_temp, NULL, offset - 1); \
static SENSOR_DEVICE_ATTR(temp##offset##_min, S_IWUSR | S_IRUGO, \
show_temp_min, set_temp_min, offset - 1); \
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IWUSR | S_IRUGO, \
show_temp_max, set_temp_max, offset - 1)
set_temp(1);
set_temp(2);
static ssize_t
show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t
show_alarm(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, show_alarm, NULL, 14);
static ssize_t
show_vid(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t
show_vrm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm, set_vrm);
static struct attribute *adm1025_attributes[] = ;
static const struct attribute_group adm1025_group = ;
static struct attribute *adm1025_attributes_in4[] = ;
static const struct attribute_group adm1025_group_in4 = ;
static int adm1025_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adm1025_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static void adm1025_init_client(struct i2c_client *client)
static int adm1025_remove(struct i2c_client *client)
static struct adm1025_data *adm1025_update_device(struct device *dev)
static int __init sensors_adm1025_init(void)
static void __exit sensors_adm1025_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("ADM1025 driver");
MODULE_LICENSE("GPL");
module_init(sensors_adm1025_init);
module_exit(sensors_adm1025_exit);
