#define DRIVER_AUTHOR "Joonyoung Shim <jy0922.shim@samsung.com>";
#define DRIVER_KERNEL_VERSION KERNEL_VERSION(1, 0, 1)
#define DRIVER_CARD "Silicon Labs Si470x FM Radio Receiver"
#define DRIVER_DESC "I2C radio driver for Si470x FM Radio Receivers"
#define DRIVER_VERSION "1.0.1"
static const struct i2c_device_id si470x_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, si470x_i2c_id);
static int radio_nr = -1;
module_param(radio_nr, int, 0444);
MODULE_PARM_DESC(radio_nr, "Radio Nr");
static unsigned int rds_buf = 100;
module_param(rds_buf, uint, 0444);
MODULE_PARM_DESC(rds_buf, "RDS buffer entries: *100*");
static unsigned short max_rds_errors = 1;
module_param(max_rds_errors, ushort, 0644);
MODULE_PARM_DESC(max_rds_errors, "RDS maximum block errors: *1*");
#define WRITE_REG_NUM		8
#define WRITE_INDEX(i)		(i + 0x02)
#define READ_REG_NUM		RADIO_REGISTER_NUM
#define READ_INDEX(i)		((i + RADIO_REGISTER_NUM - 0x0a) % READ_REG_NUM)
int si470x_get_register(struct si470x_device *radio, int regnr)
int si470x_set_register(struct si470x_device *radio, int regnr)
static int si470x_get_all_registers(struct si470x_device *radio)
int si470x_disconnect_check(struct si470x_device *radio)
int si470x_fops_open(struct file *file)
int si470x_fops_release(struct file *file)
int si470x_vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *capability)
static irqreturn_t si470x_i2c_interrupt(int irq, void *dev_id)
static int __devinit si470x_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int si470x_i2c_remove(struct i2c_client *client)
static int si470x_i2c_suspend(struct device *dev)
static int si470x_i2c_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(si470x_i2c_pm, si470x_i2c_suspend, si470x_i2c_resume);
static struct i2c_driver si470x_i2c_driver = ;
static int __init si470x_i2c_init(void)
static void __exit si470x_i2c_exit(void)
module_init(si470x_i2c_init);
module_exit(si470x_i2c_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
