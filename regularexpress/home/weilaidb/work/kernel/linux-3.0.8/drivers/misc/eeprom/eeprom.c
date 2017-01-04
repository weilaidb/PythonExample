static const unsigned short normal_i2c[] = ;
#define EEPROM_SIZE		256
enum eeprom_nature ;
struct eeprom_data ;
static void eeprom_update_client(struct i2c_client *client, u8 slice)
static ssize_t eeprom_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute eeprom_attr = ;
static int eeprom_detect(struct i2c_client *client, struct i2c_board_info *info)
static int eeprom_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int eeprom_remove(struct i2c_client *client)
static const struct i2c_device_id eeprom_id[] = ;
static struct i2c_driver eeprom_driver = ;
static int __init eeprom_init(void)
static void __exit eeprom_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl> and "
"Philip Edelbrock <phil@netroedge.com> and "
"Greg Kroah-Hartman <greg@kroah.com>");
MODULE_DESCRIPTION("I2C EEPROM driver");
MODULE_LICENSE("GPL");
module_init(eeprom_init);
module_exit(eeprom_exit);
