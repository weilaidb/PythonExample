struct at24_data ;
static unsigned io_limit = 128;
module_param(io_limit, uint, 0);
MODULE_PARM_DESC(io_limit, "Maximum bytes per I/O (default 128)");
static unsigned write_timeout = 25;
module_param(write_timeout, uint, 0);
MODULE_PARM_DESC(write_timeout, "Time (in ms) to try writes (default 25)");
#define AT24_SIZE_BYTELEN 5
#define AT24_SIZE_FLAGS 8
#define AT24_BITMASK(x) (BIT(x) - 1)
#define AT24_DEVICE_MAGIC(_len, _flags) 		\
((1 << AT24_SIZE_FLAGS | (_flags)) 		\
<< AT24_SIZE_BYTELEN | ilog2(_len))
static const struct i2c_device_id at24_ids[] = ;
MODULE_DEVICE_TABLE(i2c, at24_ids);
static struct i2c_client *at24_translate_offset(struct at24_data *at24,
unsigned *offset)
static ssize_t at24_eeprom_read(struct at24_data *at24, char *buf,
unsigned offset, size_t count)
static ssize_t at24_read(struct at24_data *at24,
char *buf, loff_t off, size_t count)
static ssize_t at24_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t at24_eeprom_write(struct at24_data *at24, const char *buf,
unsigned offset, size_t count)
static ssize_t at24_write(struct at24_data *at24, const char *buf, loff_t off,
size_t count)
static ssize_t at24_bin_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t at24_macc_read(struct memory_accessor *macc, char *buf,
off_t offset, size_t count)
static ssize_t at24_macc_write(struct memory_accessor *macc, const char *buf,
off_t offset, size_t count)
static void at24_get_ofdata(struct i2c_client *client,
struct at24_platform_data *chip)
static void at24_get_ofdata(struct i2c_client *client,
struct at24_platform_data *chip)
static int at24_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int __devexit at24_remove(struct i2c_client *client)
static struct i2c_driver at24_driver = ;
static int __init at24_init(void)
module_init(at24_init);
static void __exit at24_exit(void)
module_exit(at24_exit);
MODULE_DESCRIPTION("Driver for most I2C EEPROMs");
MODULE_AUTHOR("David Brownell and Wolfram Sang");
MODULE_LICENSE("GPL");
