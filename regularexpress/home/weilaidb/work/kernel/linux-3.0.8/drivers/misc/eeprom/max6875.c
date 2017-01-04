#define SLICE_SIZE			16
#define SLICE_BITS			4
#define USER_EEPROM_BASE		0x8100
#define USER_EEPROM_SIZE		0x0200
#define USER_EEPROM_SLICES		32
#define MAX6875_CMD_BLK_READ		0x84
struct max6875_data ;
static void max6875_update_slice(struct i2c_client *client, int slice)
static ssize_t max6875_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute user_eeprom_attr = ;
static int max6875_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max6875_remove(struct i2c_client *client)
static const struct i2c_device_id max6875_id[] = ;
static struct i2c_driver max6875_driver = ;
static int __init max6875_init(void)
static void __exit max6875_exit(void)
MODULE_AUTHOR("Ben Gardner <bgardner@wabtec.com>");
MODULE_DESCRIPTION("MAX6875 driver");
MODULE_LICENSE("GPL");
module_init(max6875_init);
module_exit(max6875_exit);
