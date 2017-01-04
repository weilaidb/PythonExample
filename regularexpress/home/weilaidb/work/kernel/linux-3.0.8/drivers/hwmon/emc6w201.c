static const unsigned short normal_i2c[] = ;
#define EMC6W201_REG_IN(nr)		(0x20 + (nr))
#define EMC6W201_REG_TEMP(nr)		(0x26 + (nr))
#define EMC6W201_REG_FAN(nr)		(0x2C + (nr) * 2)
#define EMC6W201_REG_COMPANY		0x3E
#define EMC6W201_REG_VERSTEP		0x3F
#define EMC6W201_REG_CONFIG		0x40
#define EMC6W201_REG_IN_LOW(nr)		(0x4A + (nr) * 2)
#define EMC6W201_REG_IN_HIGH(nr)	(0x4B + (nr) * 2)
#define EMC6W201_REG_TEMP_LOW(nr)	(0x56 + (nr) * 2)
#define EMC6W201_REG_TEMP_HIGH(nr)	(0x57 + (nr) * 2)
#define EMC6W201_REG_FAN_MIN(nr)	(0x62 + (nr) * 2)
enum  subfeature;
struct emc6w201_data ;
static u16 emc6w201_read16(struct i2c_client *client, u8 reg)
static int emc6w201_write16(struct i2c_client *client, u8 reg, u16 val)
static u8 emc6w201_read8(struct i2c_client *client, u8 reg)
static int emc6w201_write8(struct i2c_client *client, u8 reg, u8 val)
static struct emc6w201_data *emc6w201_update_device(struct device *dev)
static const u16 nominal_mv[6] = ;
static ssize_t show_in(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_in(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_fan(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_fan(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR_2(in0_input, S_IRUGO, show_in, NULL, 0, input);
static SENSOR_DEVICE_ATTR_2(in0_min, S_IRUGO | S_IWUSR, show_in, set_in,
0, min);
static SENSOR_DEVICE_ATTR_2(in0_max, S_IRUGO | S_IWUSR, show_in, set_in,
0, max);
static SENSOR_DEVICE_ATTR_2(in1_input, S_IRUGO, show_in, NULL, 1, input);
static SENSOR_DEVICE_ATTR_2(in1_min, S_IRUGO | S_IWUSR, show_in, set_in,
1, min);
static SENSOR_DEVICE_ATTR_2(in1_max, S_IRUGO | S_IWUSR, show_in, set_in,
1, max);
static SENSOR_DEVICE_ATTR_2(in2_input, S_IRUGO, show_in, NULL, 2, input);
static SENSOR_DEVICE_ATTR_2(in2_min, S_IRUGO | S_IWUSR, show_in, set_in,
2, min);
static SENSOR_DEVICE_ATTR_2(in2_max, S_IRUGO | S_IWUSR, show_in, set_in,
2, max);
static SENSOR_DEVICE_ATTR_2(in3_input, S_IRUGO, show_in, NULL, 3, input);
static SENSOR_DEVICE_ATTR_2(in3_min, S_IRUGO | S_IWUSR, show_in, set_in,
3, min);
static SENSOR_DEVICE_ATTR_2(in3_max, S_IRUGO | S_IWUSR, show_in, set_in,
3, max);
static SENSOR_DEVICE_ATTR_2(in4_input, S_IRUGO, show_in, NULL, 4, input);
static SENSOR_DEVICE_ATTR_2(in4_min, S_IRUGO | S_IWUSR, show_in, set_in,
4, min);
static SENSOR_DEVICE_ATTR_2(in4_max, S_IRUGO | S_IWUSR, show_in, set_in,
4, max);
static SENSOR_DEVICE_ATTR_2(in5_input, S_IRUGO, show_in, NULL, 5, input);
static SENSOR_DEVICE_ATTR_2(in5_min, S_IRUGO | S_IWUSR, show_in, set_in,
5, min);
static SENSOR_DEVICE_ATTR_2(in5_max, S_IRUGO | S_IWUSR, show_in, set_in,
5, max);
static SENSOR_DEVICE_ATTR_2(temp1_input, S_IRUGO, show_temp, NULL, 0, input);
static SENSOR_DEVICE_ATTR_2(temp1_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
0, min);
static SENSOR_DEVICE_ATTR_2(temp1_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
0, max);
static SENSOR_DEVICE_ATTR_2(temp2_input, S_IRUGO, show_temp, NULL, 1, input);
static SENSOR_DEVICE_ATTR_2(temp2_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
1, min);
static SENSOR_DEVICE_ATTR_2(temp2_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
1, max);
static SENSOR_DEVICE_ATTR_2(temp3_input, S_IRUGO, show_temp, NULL, 2, input);
static SENSOR_DEVICE_ATTR_2(temp3_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
2, min);
static SENSOR_DEVICE_ATTR_2(temp3_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
2, max);
static SENSOR_DEVICE_ATTR_2(temp4_input, S_IRUGO, show_temp, NULL, 3, input);
static SENSOR_DEVICE_ATTR_2(temp4_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
3, min);
static SENSOR_DEVICE_ATTR_2(temp4_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
3, max);
static SENSOR_DEVICE_ATTR_2(temp5_input, S_IRUGO, show_temp, NULL, 4, input);
static SENSOR_DEVICE_ATTR_2(temp5_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
4, min);
static SENSOR_DEVICE_ATTR_2(temp5_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
4, max);
static SENSOR_DEVICE_ATTR_2(temp6_input, S_IRUGO, show_temp, NULL, 5, input);
static SENSOR_DEVICE_ATTR_2(temp6_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
5, min);
static SENSOR_DEVICE_ATTR_2(temp6_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
5, max);
static SENSOR_DEVICE_ATTR_2(fan1_input, S_IRUGO, show_fan, NULL, 0, input);
static SENSOR_DEVICE_ATTR_2(fan1_min, S_IRUGO | S_IWUSR, show_fan, set_fan,
0, min);
static SENSOR_DEVICE_ATTR_2(fan2_input, S_IRUGO, show_fan, NULL, 1, input);
static SENSOR_DEVICE_ATTR_2(fan2_min, S_IRUGO | S_IWUSR, show_fan, set_fan,
1, min);
static SENSOR_DEVICE_ATTR_2(fan3_input, S_IRUGO, show_fan, NULL, 2, input);
static SENSOR_DEVICE_ATTR_2(fan3_min, S_IRUGO | S_IWUSR, show_fan, set_fan,
2, min);
static SENSOR_DEVICE_ATTR_2(fan4_input, S_IRUGO, show_fan, NULL, 3, input);
static SENSOR_DEVICE_ATTR_2(fan4_min, S_IRUGO | S_IWUSR, show_fan, set_fan,
3, min);
static SENSOR_DEVICE_ATTR_2(fan5_input, S_IRUGO, show_fan, NULL, 4, input);
static SENSOR_DEVICE_ATTR_2(fan5_min, S_IRUGO | S_IWUSR, show_fan, set_fan,
4, min);
static struct attribute *emc6w201_attributes[] = ;
static const struct attribute_group emc6w201_group = ;
static int emc6w201_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int emc6w201_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int emc6w201_remove(struct i2c_client *client)
static const struct i2c_device_id emc6w201_id[] = ;
MODULE_DEVICE_TABLE(i2c, emc6w201_id);
static struct i2c_driver emc6w201_driver = ;
static int __init sensors_emc6w201_init(void)
module_init(sensors_emc6w201_init);
static void __exit sensors_emc6w201_exit(void)
module_exit(sensors_emc6w201_exit);
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("SMSC EMC6W201 hardware monitoring driver");
MODULE_LICENSE("GPL");
