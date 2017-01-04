#define I2C_ADDR_PMIC	(0xCC >> 1)
#define I2C_ADDR_MUIC	(0x4A >> 1)
#define I2C_ADDR_BATTERY	(0x6C >> 1)
#define I2C_ADDR_RTC	(0x0C >> 1)
#define I2C_ADDR_HAPTIC	(0x90 >> 1)
static struct mfd_cell max8997_devs[] = ;
int max8997_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest)
EXPORT_SYMBOL_GPL(max8997_read_reg);
int max8997_bulk_read(struct i2c_client *i2c, u8 reg, int count, u8 *buf)
EXPORT_SYMBOL_GPL(max8997_bulk_read);
int max8997_write_reg(struct i2c_client *i2c, u8 reg, u8 value)
EXPORT_SYMBOL_GPL(max8997_write_reg);
int max8997_bulk_write(struct i2c_client *i2c, u8 reg, int count, u8 *buf)
EXPORT_SYMBOL_GPL(max8997_bulk_write);
int max8997_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask)
EXPORT_SYMBOL_GPL(max8997_update_reg);
static int max8997_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int max8997_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id max8997_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, max8998_i2c_id);
u8 max8997_dumpaddr_pmic[] = ;
u8 max8997_dumpaddr_muic[] = ;
u8 max8997_dumpaddr_haptic[] = ;
static int max8997_freeze(struct device *dev)
static int max8997_restore(struct device *dev)
const struct dev_pm_ops max8997_pm = ;
static struct i2c_driver max8997_i2c_driver = ;
static int __init max8997_i2c_init(void)
subsys_initcall(max8997_i2c_init);
static void __exit max8997_i2c_exit(void)
module_exit(max8997_i2c_exit);
MODULE_DESCRIPTION("MAXIM 8997 multi-function core driver");
MODULE_AUTHOR("MyungJoo Ham <myungjoo.ham@samsung.com>");
MODULE_LICENSE("GPL");
