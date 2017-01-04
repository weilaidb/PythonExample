#define ST1232_TS_NAME	"st1232-ts"
#define MIN_X		0x00
#define MIN_Y		0x00
#define MAX_X		0x31f
#define MAX_Y		0x1df
#define MAX_AREA	0xff
#define MAX_FINGERS	2
struct st1232_ts_finger ;
struct st1232_ts_data ;
static int st1232_ts_read_data(struct st1232_ts_data *ts)
static irqreturn_t st1232_ts_irq_handler(int irq, void *dev_id)
static int __devinit st1232_ts_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit st1232_ts_remove(struct i2c_client *client)
static int st1232_ts_suspend(struct device *dev)
static int st1232_ts_resume(struct device *dev)
static const struct dev_pm_ops st1232_ts_pm_ops = ;
static const struct i2c_device_id st1232_ts_id[] = ;
MODULE_DEVICE_TABLE(i2c, st1232_ts_id);
static struct i2c_driver st1232_ts_driver = ;
static int __init st1232_ts_init(void)
module_init(st1232_ts_init);
static void __exit st1232_ts_exit(void)
module_exit(st1232_ts_exit);
MODULE_AUTHOR("Tony SIM <chinyeow.sim.xt@renesas.com>");
MODULE_DESCRIPTION("SITRONIX ST1232 Touchscreen Controller Driver");
MODULE_LICENSE("GPL");
