static int flip_x;
module_param(flip_x, bool, 0644);
MODULE_PARM_DESC(flip_x, "flip x coordinate");
static int flip_y;
module_param(flip_y, bool, 0644);
MODULE_PARM_DESC(flip_y, "flip y coordinate");
struct eeti_ts_priv ;
#define EETI_TS_BITDEPTH	(11)
#define EETI_MAXVAL		((1 << (EETI_TS_BITDEPTH + 1)) - 1)
#define REPORT_BIT_PRESSED	(1 << 0)
#define REPORT_BIT_AD0		(1 << 1)
#define REPORT_BIT_AD1		(1 << 2)
#define REPORT_BIT_HAS_PRESSURE	(1 << 6)
#define REPORT_RES_BITS(v)	(((v) >> 1) + EETI_TS_BITDEPTH)
static inline int eeti_ts_irq_active(struct eeti_ts_priv *priv)
static void eeti_ts_read(struct work_struct *work)
static irqreturn_t eeti_ts_isr(int irq, void *dev_id)
static void eeti_ts_start(struct eeti_ts_priv *priv)
static void eeti_ts_stop(struct eeti_ts_priv *priv)
static int eeti_ts_open(struct input_dev *dev)
static void eeti_ts_close(struct input_dev *dev)
static int __devinit eeti_ts_probe(struct i2c_client *client,
const struct i2c_device_id *idp)
static int __devexit eeti_ts_remove(struct i2c_client *client)
static int eeti_ts_suspend(struct device *dev)
static int eeti_ts_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(eeti_ts_pm, eeti_ts_suspend, eeti_ts_resume);
static const struct i2c_device_id eeti_ts_id[] = ;
MODULE_DEVICE_TABLE(i2c, eeti_ts_id);
static struct i2c_driver eeti_ts_driver = ;
static int __init eeti_ts_init(void)
static void __exit eeti_ts_exit(void)
MODULE_DESCRIPTION("EETI Touchscreen driver");
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_LICENSE("GPL");
module_init(eeti_ts_init);
module_exit(eeti_ts_exit);
