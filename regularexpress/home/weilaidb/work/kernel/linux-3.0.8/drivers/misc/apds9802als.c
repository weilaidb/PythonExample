#define ALS_MIN_RANGE_VAL 1
#define ALS_MAX_RANGE_VAL 2
#define POWER_STA_ENABLE 1
#define POWER_STA_DISABLE 0
#define DRIVER_NAME "apds9802als"
struct als_data ;
static ssize_t als_sensing_range_show(struct device *dev,
struct device_attribute *attr,  char *buf)
static int als_wait_for_data_ready(struct device *dev)
static ssize_t als_lux0_input_data_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t als_sensing_range_store(struct device *dev,
struct device_attribute *attr, const  char *buf, size_t count)
static int als_set_power_state(struct i2c_client *client, bool on_off)
static DEVICE_ATTR(lux0_sensor_range, S_IRUGO | S_IWUSR,
als_sensing_range_show, als_sensing_range_store);
static DEVICE_ATTR(lux0_input, S_IRUGO, als_lux0_input_data_show, NULL);
static struct attribute *mid_att_als[] = ;
static struct attribute_group m_als_gr = ;
static int als_set_default_config(struct i2c_client *client)
static int apds9802als_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit apds9802als_remove(struct i2c_client *client)
static int apds9802als_suspend(struct i2c_client *client, pm_message_t mesg)
static int apds9802als_resume(struct i2c_client *client)
static int apds9802als_runtime_suspend(struct device *dev)
static int apds9802als_runtime_resume(struct device *dev)
static const struct dev_pm_ops apds9802als_pm_ops = ;
#define APDS9802ALS_PM_OPS (&apds9802als_pm_ops)
#define apds9802als_suspend NULL
#define apds9802als_resume NULL
#define APDS9802ALS_PM_OPS NULL
static struct i2c_device_id apds9802als_id[] = ;
MODULE_DEVICE_TABLE(i2c, apds9802als_id);
static struct i2c_driver apds9802als_driver = ;
static int __init sensor_apds9802als_init(void)
static void  __exit sensor_apds9802als_exit(void)
module_init(sensor_apds9802als_init);
module_exit(sensor_apds9802als_exit);
MODULE_AUTHOR("Anantha Narayanan <Anantha.Narayanan@intel.com");
MODULE_DESCRIPTION("Avago apds9802als ALS Driver");
MODULE_LICENSE("GPL v2");
