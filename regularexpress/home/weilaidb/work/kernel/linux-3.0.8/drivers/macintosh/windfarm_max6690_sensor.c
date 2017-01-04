#define VERSION "0.2"
#define MAX6690_INTERNAL_TEMP	0
#define MAX6690_EXTERNAL_TEMP	1
struct wf_6690_sensor ;
#define wf_to_6690(x)	container_of((x), struct wf_6690_sensor, sens)
static int wf_max6690_get(struct wf_sensor *sr, s32 *value)
static void wf_max6690_release(struct wf_sensor *sr)
static struct wf_sensor_ops wf_max6690_ops = ;
static int wf_max6690_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static struct i2c_driver wf_max6690_driver;
static struct i2c_client *wf_max6690_create(struct i2c_adapter *adapter,
u8 addr, const char *loc)
static int wf_max6690_attach(struct i2c_adapter *adapter)
static int wf_max6690_remove(struct i2c_client *client)
static const struct i2c_device_id wf_max6690_id[] = ;
static struct i2c_driver wf_max6690_driver = ;
static int __init wf_max6690_sensor_init(void)
static void __exit wf_max6690_sensor_exit(void)
module_init(wf_max6690_sensor_init);
module_exit(wf_max6690_sensor_exit);
MODULE_AUTHOR("Paul Mackerras <paulus@samba.org>");
MODULE_DESCRIPTION("MAX6690 sensor objects for PowerMac thermal control");
MODULE_LICENSE("GPL");
