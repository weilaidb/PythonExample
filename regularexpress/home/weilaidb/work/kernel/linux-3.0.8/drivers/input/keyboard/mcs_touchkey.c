#define MCS5000_TOUCHKEY_STATUS		0x04
#define MCS5000_TOUCHKEY_STATUS_PRESS	7
#define MCS5000_TOUCHKEY_FW		0x0a
#define MCS5000_TOUCHKEY_BASE_VAL	0x61
#define MCS5080_TOUCHKEY_STATUS		0x00
#define MCS5080_TOUCHKEY_STATUS_PRESS	3
#define MCS5080_TOUCHKEY_FW		0x01
#define MCS5080_TOUCHKEY_BASE_VAL	0x1
enum mcs_touchkey_type ;
struct mcs_touchkey_chip ;
struct mcs_touchkey_data ;
static irqreturn_t mcs_touchkey_interrupt(int irq, void *dev_id)
static int __devinit mcs_touchkey_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit mcs_touchkey_remove(struct i2c_client *client)
static void mcs_touchkey_shutdown(struct i2c_client *client)
static int mcs_touchkey_suspend(struct device *dev)
static int mcs_touchkey_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(mcs_touchkey_pm_ops,
mcs_touchkey_suspend, mcs_touchkey_resume);
static const struct i2c_device_id mcs_touchkey_id[] = ;
MODULE_DEVICE_TABLE(i2c, mcs_touchkey_id);
static struct i2c_driver mcs_touchkey_driver = ;
static int __init mcs_touchkey_init(void)
static void __exit mcs_touchkey_exit(void)
module_init(mcs_touchkey_init);
module_exit(mcs_touchkey_exit);
MODULE_AUTHOR("Joonyoung Shim <jy0922.shim@samsung.com>");
MODULE_AUTHOR("HeungJun Kim <riverful.kim@samsung.com>");
MODULE_DESCRIPTION("Touchkey driver for MELFAS MCS5000/5080 controller");
MODULE_LICENSE("GPL");
