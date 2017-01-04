#define DRV_NAME	"lis3lv02d_i2c"
static const char reg_vdd[]    = "Vdd";
static const char reg_vdd_io[] = "Vdd_IO";
static int lis3_reg_ctrl(struct lis3lv02d *lis3, bool state)
static inline s32 lis3_i2c_write(struct lis3lv02d *lis3, int reg, u8 value)
static inline s32 lis3_i2c_read(struct lis3lv02d *lis3, int reg, u8 *v)
static inline s32 lis3_i2c_blockread(struct lis3lv02d *lis3, int reg, int len,
u8 *v)
static int lis3_i2c_init(struct lis3lv02d *lis3)
static union axis_conversion lis3lv02d_axis_map =
;
static int __devinit lis3lv02d_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit lis3lv02d_i2c_remove(struct i2c_client *client)
static int lis3lv02d_i2c_suspend(struct device *dev)
static int lis3lv02d_i2c_resume(struct device *dev)
static int lis3_i2c_runtime_suspend(struct device *dev)
static int lis3_i2c_runtime_resume(struct device *dev)
static const struct i2c_device_id lis3lv02d_id[] = ;
MODULE_DEVICE_TABLE(i2c, lis3lv02d_id);
static const struct dev_pm_ops lis3_pm_ops = ;
static struct i2c_driver lis3lv02d_i2c_driver = ;
static int __init lis3lv02d_init(void)
static void __exit lis3lv02d_exit(void)
MODULE_AUTHOR("Nokia Corporation");
MODULE_DESCRIPTION("lis3lv02d I2C interface");
MODULE_LICENSE("GPL");
module_init(lis3lv02d_init);
module_exit(lis3lv02d_exit);
