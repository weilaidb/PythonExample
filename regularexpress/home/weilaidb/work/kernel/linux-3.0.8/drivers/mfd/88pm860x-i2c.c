static inline int pm860x_read_device(struct i2c_client *i2c,
int reg, int bytes, void *dest)
static inline int pm860x_write_device(struct i2c_client *i2c,
int reg, int bytes, void *src)
int pm860x_reg_read(struct i2c_client *i2c, int reg)
EXPORT_SYMBOL(pm860x_reg_read);
int pm860x_reg_write(struct i2c_client *i2c, int reg,
unsigned char data)
EXPORT_SYMBOL(pm860x_reg_write);
int pm860x_bulk_read(struct i2c_client *i2c, int reg,
int count, unsigned char *buf)
EXPORT_SYMBOL(pm860x_bulk_read);
int pm860x_bulk_write(struct i2c_client *i2c, int reg,
int count, unsigned char *buf)
EXPORT_SYMBOL(pm860x_bulk_write);
int pm860x_set_bits(struct i2c_client *i2c, int reg,
unsigned char mask, unsigned char data)
EXPORT_SYMBOL(pm860x_set_bits);
int pm860x_page_reg_read(struct i2c_client *i2c, int reg)
EXPORT_SYMBOL(pm860x_page_reg_read);
int pm860x_page_reg_write(struct i2c_client *i2c, int reg,
unsigned char data)
EXPORT_SYMBOL(pm860x_page_reg_write);
int pm860x_page_bulk_read(struct i2c_client *i2c, int reg,
int count, unsigned char *buf)
EXPORT_SYMBOL(pm860x_page_bulk_read);
int pm860x_page_bulk_write(struct i2c_client *i2c, int reg,
int count, unsigned char *buf)
EXPORT_SYMBOL(pm860x_page_bulk_write);
int pm860x_page_set_bits(struct i2c_client *i2c, int reg,
unsigned char mask, unsigned char data)
EXPORT_SYMBOL(pm860x_page_set_bits);
static const struct i2c_device_id pm860x_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, pm860x_id_table);
static int verify_addr(struct i2c_client *i2c)
static int __devinit pm860x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit pm860x_remove(struct i2c_client *client)
static struct i2c_driver pm860x_driver = ;
static int __init pm860x_i2c_init(void)
subsys_initcall(pm860x_i2c_init);
static void __exit pm860x_i2c_exit(void)
module_exit(pm860x_i2c_exit);
MODULE_DESCRIPTION("I2C Driver for Marvell 88PM860x");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
