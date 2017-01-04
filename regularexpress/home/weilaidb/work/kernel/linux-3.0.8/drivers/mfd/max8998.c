#define RTC_I2C_ADDR		(0x0c >> 1)
static struct mfd_cell max8998_devs[] = ;
static struct mfd_cell lp3974_devs[] = ;
int max8998_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest)
EXPORT_SYMBOL(max8998_read_reg);
int max8998_bulk_read(struct i2c_client *i2c, u8 reg, int count, u8 *buf)
EXPORT_SYMBOL(max8998_bulk_read);
int max8998_write_reg(struct i2c_client *i2c, u8 reg, u8 value)
EXPORT_SYMBOL(max8998_write_reg);
int max8998_bulk_write(struct i2c_client *i2c, u8 reg, int count, u8 *buf)
EXPORT_SYMBOL(max8998_bulk_write);
int max8998_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask)
EXPORT_SYMBOL(max8998_update_reg);
static int max8998_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int max8998_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id max8998_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, max8998_i2c_id);
static int max8998_suspend(struct device *dev)
static int max8998_resume(struct device *dev)
struct max8998_reg_dump ;
#define SAVE_ITEM(x)
static struct max8998_reg_dump max8998_dump[] = ;
static int max8998_freeze(struct device *dev)
static int max8998_restore(struct device *dev)
static const struct dev_pm_ops max8998_pm = ;
static struct i2c_driver max8998_i2c_driver = ;
static int __init max8998_i2c_init(void)
subsys_initcall(max8998_i2c_init);
static void __exit max8998_i2c_exit(void)
module_exit(max8998_i2c_exit);
MODULE_DESCRIPTION("MAXIM 8998 multi-function core driver");
MODULE_AUTHOR("Kyungmin Park <kyungmin.park@samsung.com>");
MODULE_LICENSE("GPL");
