#define VERSION "0.2"
#define DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
#define MAX_AGE		msecs_to_jiffies(800)
struct wf_sat ;
static struct wf_sat *sats[2];
struct wf_sat_sensor ;
#define wf_to_sat(c)	container_of(c, struct wf_sat_sensor, sens)
struct smu_sdbp_header *smu_sat_get_sdb_partition(unsigned int sat_id, int id,
unsigned int *size)
EXPORT_SYMBOL_GPL(smu_sat_get_sdb_partition);
static int wf_sat_read_cache(struct wf_sat *sat)
static int wf_sat_get(struct wf_sensor *sr, s32 *value)
static void wf_sat_release(struct wf_sensor *sr)
static struct wf_sensor_ops wf_sat_ops = ;
static struct i2c_driver wf_sat_driver;
static void wf_sat_create(struct i2c_adapter *adapter, struct device_node *dev)
static int wf_sat_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int wf_sat_attach(struct i2c_adapter *adapter)
static int wf_sat_remove(struct i2c_client *client)
static const struct i2c_device_id wf_sat_id[] = ;
static struct i2c_driver wf_sat_driver = ;
static int __init sat_sensors_init(void)
module_init(sat_sensors_init);
MODULE_AUTHOR("Paul Mackerras <paulus@samba.org>");
MODULE_DESCRIPTION("SMU satellite sensors for PowerMac thermal control");
MODULE_LICENSE("GPL");
