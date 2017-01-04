#define VERSION "0.2"
#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
struct wf_lm75_sensor ;
#define wf_to_lm75(c) container_of(c, struct wf_lm75_sensor, sens)
static int wf_lm75_get(struct wf_sensor *sr, s32 *value)
static void wf_lm75_release(struct wf_sensor *sr)
static struct wf_sensor_ops wf_lm75_ops = ;
static int wf_lm75_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static struct i2c_driver wf_lm75_driver;
static struct i2c_client *wf_lm75_create(struct i2c_adapter *adapter,
u8 addr, int ds1775,
const char *loc)
static int wf_lm75_attach(struct i2c_adapter *adapter)
static int wf_lm75_remove(struct i2c_client *client)
static const struct i2c_device_id wf_lm75_id[] = ;
static struct i2c_driver wf_lm75_driver = ;
static int __init wf_lm75_sensor_init(void)
static void __exit wf_lm75_sensor_exit(void)
module_init(wf_lm75_sensor_init);
module_exit(wf_lm75_sensor_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("LM75 sensor objects for PowerMacs thermal control");
MODULE_LICENSE("GPL");
