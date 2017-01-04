#define CY8CTMG110_DRIVER_NAME      "cy8ctmg110"
#define CY8CTMG110_X_MIN		0
#define CY8CTMG110_Y_MIN		0
#define CY8CTMG110_X_MAX		759
#define CY8CTMG110_Y_MAX		465
#define CY8CTMG110_TOUCH_WAKEUP_TIME	0
#define CY8CTMG110_TOUCH_SLEEP_TIME	2
#define CY8CTMG110_TOUCH_X1		3
#define CY8CTMG110_TOUCH_Y1		5
#define CY8CTMG110_TOUCH_X2		7
#define CY8CTMG110_TOUCH_Y2		9
#define CY8CTMG110_FINGERS		11
#define CY8CTMG110_GESTURE		12
#define CY8CTMG110_REG_MAX		13
struct cy8ctmg110 ;
static void cy8ctmg110_power(struct cy8ctmg110 *ts, bool poweron)
static int cy8ctmg110_write_regs(struct cy8ctmg110 *tsc, unsigned char reg,
unsigned char len, unsigned char *value)
static int cy8ctmg110_read_regs(struct cy8ctmg110 *tsc,
unsigned char *data, unsigned char len, unsigned char cmd)
static int cy8ctmg110_touch_pos(struct cy8ctmg110 *tsc)
static int cy8ctmg110_set_sleepmode(struct cy8ctmg110 *ts, bool sleep)
static irqreturn_t cy8ctmg110_irq_thread(int irq, void *dev_id)
static int __devinit cy8ctmg110_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int cy8ctmg110_suspend(struct device *dev)
static int cy8ctmg110_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(cy8ctmg110_pm, cy8ctmg110_suspend, cy8ctmg110_resume);
static int __devexit cy8ctmg110_remove(struct i2c_client *client)
static struct i2c_device_id cy8ctmg110_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, cy8ctmg110_idtable);
static struct i2c_driver cy8ctmg110_driver = ;
static int __init cy8ctmg110_init(void)
static void __exit cy8ctmg110_exit(void)
module_init(cy8ctmg110_init);
module_exit(cy8ctmg110_exit);
MODULE_AUTHOR("Samuli Konttila <samuli.konttila@aavamobile.com>");
MODULE_DESCRIPTION("cy8ctmg110 TouchScreen Driver");
MODULE_LICENSE("GPL v2");
