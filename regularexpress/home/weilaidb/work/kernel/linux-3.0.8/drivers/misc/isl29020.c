static DEFINE_MUTEX(mutex);
static ssize_t als_sensing_range_show(struct device *dev,
struct device_attribute *attr,  char *buf)
static ssize_t als_lux_input_data_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t als_sensing_range_store(struct device *dev,
struct device_attribute *attr, const  char *buf, size_t count)
static void als_set_power_state(struct i2c_client *client, int enable)
static DEVICE_ATTR(lux0_sensor_range, S_IRUGO | S_IWUSR,
als_sensing_range_show, als_sensing_range_store);
static DEVICE_ATTR(lux0_input, S_IRUGO, als_lux_input_data_show, NULL);
static struct attribute *mid_att_als[] = ;
static struct attribute_group m_als_gr = ;
static int als_set_default_config(struct i2c_client *client)
static int  isl29020_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int isl29020_remove(struct i2c_client *client)
static struct i2c_device_id isl29020_id[] = ;
MODULE_DEVICE_TABLE(i2c, isl29020_id);
static int isl29020_runtime_suspend(struct device *dev)
static int isl29020_runtime_resume(struct device *dev)
static const struct dev_pm_ops isl29020_pm_ops = ;
#define ISL29020_PM_OPS (&isl29020_pm_ops)
#define ISL29020_PM_OPS NULL
static struct i2c_driver isl29020_driver = ;
static int __init sensor_isl29020_init(void)
static void  __exit sensor_isl29020_exit(void)
module_init(sensor_isl29020_init);
module_exit(sensor_isl29020_exit);
MODULE_AUTHOR("Kalhan Trisal <kalhan.trisal@intel.com>");
MODULE_DESCRIPTION("Intersil isl29020 ALS Driver");
MODULE_LICENSE("GPL v2");
