#define THERMAL_PID_REG		0xfd
#define THERMAL_SMSC_ID_REG	0xfe
#define THERMAL_REVISION_REG	0xff
struct thermal_data ;
static ssize_t show_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_bit(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t store_bit(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_hyst(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_hyst(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_min, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x06);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x05);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x20);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0x00);
static SENSOR_DEVICE_ATTR_2(temp1_min_alarm, S_IRUGO,
show_bit, NULL, 0x36, 0x01);
static SENSOR_DEVICE_ATTR_2(temp1_max_alarm, S_IRUGO,
show_bit, NULL, 0x35, 0x01);
static SENSOR_DEVICE_ATTR_2(temp1_crit_alarm, S_IRUGO,
show_bit, NULL, 0x37, 0x01);
static SENSOR_DEVICE_ATTR(temp1_crit_hyst, S_IRUGO | S_IWUSR,
show_hyst, store_hyst, 0x20);
static SENSOR_DEVICE_ATTR(temp2_min, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x08);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x07);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x19);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 0x01);
static SENSOR_DEVICE_ATTR_2(temp2_min_alarm, S_IRUGO,
show_bit, NULL, 0x36, 0x02);
static SENSOR_DEVICE_ATTR_2(temp2_max_alarm, S_IRUGO,
show_bit, NULL, 0x35, 0x02);
static SENSOR_DEVICE_ATTR_2(temp2_crit_alarm, S_IRUGO,
show_bit, NULL, 0x37, 0x02);
static SENSOR_DEVICE_ATTR(temp2_crit_hyst, S_IRUGO | S_IWUSR,
show_hyst, store_hyst, 0x19);
static SENSOR_DEVICE_ATTR(temp3_min, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x16);
static SENSOR_DEVICE_ATTR(temp3_max, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x15);
static SENSOR_DEVICE_ATTR(temp3_crit, S_IRUGO | S_IWUSR,
show_temp, store_temp, 0x1A);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 0x23);
static SENSOR_DEVICE_ATTR_2(temp3_min_alarm, S_IRUGO,
show_bit, NULL, 0x36, 0x04);
static SENSOR_DEVICE_ATTR_2(temp3_max_alarm, S_IRUGO,
show_bit, NULL, 0x35, 0x04);
static SENSOR_DEVICE_ATTR_2(temp3_crit_alarm, S_IRUGO,
show_bit, NULL, 0x37, 0x04);
static SENSOR_DEVICE_ATTR(temp3_crit_hyst, S_IRUGO | S_IWUSR,
show_hyst, store_hyst, 0x1A);
static SENSOR_DEVICE_ATTR_2(power_state, S_IRUGO | S_IWUSR,
show_bit, store_bit, 0x03, 0x40);
static struct attribute *mid_att_thermal[] = ;
static const struct attribute_group m_thermal_gr = ;
static int emc1403_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int emc1403_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int emc1403_remove(struct i2c_client *client)
static const unsigned short emc1403_address_list[] = ;
static const struct i2c_device_id emc1403_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, emc1403_idtable);
static struct i2c_driver sensor_emc1403 = ;
static int __init sensor_emc1403_init(void)
static void  __exit sensor_emc1403_exit(void)
module_init(sensor_emc1403_init);
module_exit(sensor_emc1403_exit);
MODULE_AUTHOR("Kalhan Trisal <kalhan.trisal@intel.com");
MODULE_DESCRIPTION("emc1403 Thermal Driver");
MODULE_LICENSE("GPL v2");
