static const unsigned short normal_i2c[] = ;
#define SMSC47M192_REG_IN(nr)		((nr)<6 ? (0x20 + (nr)) : \
(0x50 + (nr) - 6))
#define SMSC47M192_REG_IN_MAX(nr)	((nr)<6 ? (0x2b + (nr) * 2) : \
(0x54 + (((nr) - 6) * 2)))
#define SMSC47M192_REG_IN_MIN(nr)	((nr)<6 ? (0x2c + (nr) * 2) : \
(0x55 + (((nr) - 6) * 2)))
static u8 SMSC47M192_REG_TEMP[3] =	;
static u8 SMSC47M192_REG_TEMP_MAX[3] =	;
static u8 SMSC47M192_REG_TEMP_MIN[3] =	;
#define SMSC47M192_REG_TEMP_OFFSET(nr)	((nr)==2 ? 0x1e : 0x1f)
#define SMSC47M192_REG_ALARM1		0x41
#define SMSC47M192_REG_ALARM2		0x42
#define SMSC47M192_REG_VID		0x47
#define SMSC47M192_REG_VID4		0x49
#define SMSC47M192_REG_CONFIG		0x40
#define SMSC47M192_REG_SFR		0x4f
#define SMSC47M192_REG_COMPANY_ID	0x3e
#define SMSC47M192_REG_VERSION		0x3f
static inline int SCALE(long val, int mul, int div)
static const u16 nom_mv[] = ;
static inline unsigned int IN_FROM_REG(u8 reg, int n)
static inline u8 IN_TO_REG(unsigned long val, int n)
static inline s8 TEMP_TO_REG(int val)
static inline int TEMP_FROM_REG(s8 val)
struct smsc47m192_data ;
static int smsc47m192_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int smsc47m192_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int smsc47m192_remove(struct i2c_client *client);
static struct smsc47m192_data *smsc47m192_update_device(struct device *dev);
static const struct i2c_device_id smsc47m192_id[] = ;
MODULE_DEVICE_TABLE(i2c, smsc47m192_id);
static struct i2c_driver smsc47m192_driver = ;
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_in_offset(offset)					\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in, NULL, offset);				\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset);
show_in_offset(0)
show_in_offset(1)
show_in_offset(2)
show_in_offset(3)
show_in_offset(4)
show_in_offset(5)
show_in_offset(6)
show_in_offset(7)
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp_offset(struct device *dev, struct device_attribute
*attr, char *buf)
static ssize_t set_temp_offset(struct device *dev, struct device_attribute
*attr, const char *buf, size_t count)
#define show_temp_index(index)						\
static SENSOR_DEVICE_ATTR(temp##index##_input, S_IRUGO,			\
show_temp, NULL, index-1);				\
static SENSOR_DEVICE_ATTR(temp##index##_min, S_IRUGO | S_IWUSR,		\
show_temp_min, set_temp_min, index-1);			\
static SENSOR_DEVICE_ATTR(temp##index##_max, S_IRUGO | S_IWUSR,		\
show_temp_max, set_temp_max, index-1);			\
static SENSOR_DEVICE_ATTR(temp##index##_offset, S_IRUGO | S_IWUSR,	\
show_temp_offset, set_temp_offset, index-1);
show_temp_index(1)
show_temp_index(2)
show_temp_index(3)
static ssize_t show_vid(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t show_vrm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm, set_vrm);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 0x0010);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 0x0020);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 0x0040);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 0x4000);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 0x8000);
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0x0001);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 0x0002);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 0x0004);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 0x0008);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 0x0100);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 0x0200);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 0x0400);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 0x0800);
static struct attribute *smsc47m192_attributes[] = ;
static const struct attribute_group smsc47m192_group = ;
static struct attribute *smsc47m192_attributes_in4[] = ;
static const struct attribute_group smsc47m192_group_in4 = ;
static void smsc47m192_init_client(struct i2c_client *client)
static int smsc47m192_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int smsc47m192_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int smsc47m192_remove(struct i2c_client *client)
static struct smsc47m192_data *smsc47m192_update_device(struct device *dev)
static int __init smsc47m192_init(void)
static void __exit smsc47m192_exit(void)
MODULE_AUTHOR("Hartmut Rick <linux@rick.claranet.de>");
MODULE_DESCRIPTION("SMSC47M192 driver");
MODULE_LICENSE("GPL");
module_init(smsc47m192_init);
module_exit(smsc47m192_exit);
