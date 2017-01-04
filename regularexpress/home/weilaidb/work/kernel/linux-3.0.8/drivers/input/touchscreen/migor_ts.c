#define EVENT_PENDOWN 1
#define EVENT_REPEAT  2
#define EVENT_PENUP   3
struct migor_ts_priv ;
static const u_int8_t migor_ts_ena_seq[17] = ;
static const u_int8_t migor_ts_dis_seq[17] = ;
static void migor_ts_poscheck(struct work_struct *work)
static irqreturn_t migor_ts_isr(int irq, void *dev_id)
static int migor_ts_open(struct input_dev *dev)
static void migor_ts_close(struct input_dev *dev)
static int migor_ts_probe(struct i2c_client *client,
const struct i2c_device_id *idp)
static int migor_ts_remove(struct i2c_client *client)
static int migor_ts_suspend(struct device *dev)
static int migor_ts_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(migor_ts_pm, migor_ts_suspend, migor_ts_resume);
static const struct i2c_device_id migor_ts_id[] = ;
MODULE_DEVICE_TABLE(i2c, migor_ts);
static struct i2c_driver migor_ts_driver = ;
static int __init migor_ts_init(void)
static void __exit migor_ts_exit(void)
MODULE_DESCRIPTION("MigoR Touchscreen driver");
MODULE_AUTHOR("Magnus Damm <damm@opensource.se>");
MODULE_LICENSE("GPL");
module_init(migor_ts_init);
module_exit(migor_ts_exit);
