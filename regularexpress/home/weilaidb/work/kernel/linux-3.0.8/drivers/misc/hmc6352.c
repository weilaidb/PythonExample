static DEFINE_MUTEX(compass_mutex);
static int compass_command(struct i2c_client *c, u8 cmd)
static int compass_store(struct device *dev, const char *buf, size_t count,
const char *map)
static ssize_t compass_calibration_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t compass_power_mode_store(struct device *dev,
struct device_attribute *attr, const  char *buf, size_t count)
static ssize_t compass_heading_data_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(heading0_input, S_IRUGO, compass_heading_data_show, NULL);
static DEVICE_ATTR(calibration, S_IWUSR, NULL, compass_calibration_store);
static DEVICE_ATTR(power_state, S_IWUSR, NULL, compass_power_mode_store);
static struct attribute *mid_att_compass[] = ;
static const struct attribute_group m_compass_gr = ;
static int hmc6352_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int hmc6352_remove(struct i2c_client *client)
static struct i2c_device_id hmc6352_id[] = ;
MODULE_DEVICE_TABLE(i2c, hmc6352_id);
static struct i2c_driver hmc6352_driver = ;
static int __init sensor_hmc6352_init(void)
static void  __exit sensor_hmc6352_exit(void)
module_init(sensor_hmc6352_init);
module_exit(sensor_hmc6352_exit);
MODULE_AUTHOR("Kalhan Trisal <kalhan.trisal@intel.com");
MODULE_DESCRIPTION("hmc6352 Compass Driver");
MODULE_LICENSE("GPL v2");
