#define RTC_I2C_ADDR		0x68
#define ADC_I2C_ADDR		0x47
static inline int max8925_read_device(struct i2c_client *i2c,
int reg, int bytes, void *dest)
static inline int max8925_write_device(struct i2c_client *i2c,
int reg, int bytes, void *src)
int max8925_reg_read(struct i2c_client *i2c, int reg)
EXPORT_SYMBOL(max8925_reg_read);
int max8925_reg_write(struct i2c_client *i2c, int reg,
unsigned char data)
EXPORT_SYMBOL(max8925_reg_write);
int max8925_bulk_read(struct i2c_client *i2c, int reg,
int count, unsigned char *buf)
EXPORT_SYMBOL(max8925_bulk_read);
int max8925_bulk_write(struct i2c_client *i2c, int reg,
int count, unsigned char *buf)
EXPORT_SYMBOL(max8925_bulk_write);
int max8925_set_bits(struct i2c_client *i2c, int reg,
unsigned char mask, unsigned char data)
EXPORT_SYMBOL(max8925_set_bits);
static const struct i2c_device_id max8925_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, max8925_id_table);
static int __devinit max8925_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max8925_remove(struct i2c_client *client)
static struct i2c_driver max8925_driver = ;
static int __init max8925_i2c_init(void)
subsys_initcall(max8925_i2c_init);
static void __exit max8925_i2c_exit(void)
module_exit(max8925_i2c_exit);
MODULE_DESCRIPTION("I2C Driver for Maxim 8925");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
