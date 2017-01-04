#define ELE_TOUCH_STATUS_0_ADDR	0x0
#define ELE_TOUCH_STATUS_1_ADDR	0X1
#define MHD_RISING_ADDR		0x2b
#define NHD_RISING_ADDR		0x2c
#define NCL_RISING_ADDR		0x2d
#define FDL_RISING_ADDR		0x2e
#define MHD_FALLING_ADDR	0x2f
#define NHD_FALLING_ADDR	0x30
#define NCL_FALLING_ADDR	0x31
#define FDL_FALLING_ADDR	0x32
#define ELE0_TOUCH_THRESHOLD_ADDR	0x41
#define ELE0_RELEASE_THRESHOLD_ADDR	0x42
#define AFE_CONF_ADDR			0x5c
#define FILTER_CONF_ADDR		0x5d
#define ELECTRODE_CONF_ADDR		0x5e
#define AUTO_CONFIG_CTRL_ADDR		0x7b
#define AUTO_CONFIG_USL_ADDR		0x7d
#define AUTO_CONFIG_LSL_ADDR		0x7e
#define AUTO_CONFIG_TL_ADDR		0x7f
#define TOUCH_THRESHOLD			0x0f
#define RELEASE_THRESHOLD		0x0a
#define TOUCH_STATUS_MASK		0xfff
#define MPR121_MAX_KEY_COUNT		12
struct mpr121_touchkey ;
struct mpr121_init_register ;
static const struct mpr121_init_register init_reg_table[] __devinitconst = ;
static irqreturn_t mpr_touchkey_interrupt(int irq, void *dev_id)
static int __devinit mpr121_phys_init(const struct mpr121_platform_data *pdata,
struct mpr121_touchkey *mpr121,
struct i2c_client *client)
static int __devinit mpr_touchkey_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit mpr_touchkey_remove(struct i2c_client *client)
static int mpr_suspend(struct device *dev)
static int mpr_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(mpr121_touchkey_pm_ops, mpr_suspend, mpr_resume);
static const struct i2c_device_id mpr121_id[] = ;
MODULE_DEVICE_TABLE(i2c, mpr121_id);
static struct i2c_driver mpr_touchkey_driver = ;
static int __init mpr_touchkey_init(void)
module_init(mpr_touchkey_init);
static void __exit mpr_touchkey_exit(void)
module_exit(mpr_touchkey_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Zhang Jiejing <jiejing.zhang@freescale.com>");
MODULE_DESCRIPTION("Touch Key driver for Freescale MPR121 Chip");
