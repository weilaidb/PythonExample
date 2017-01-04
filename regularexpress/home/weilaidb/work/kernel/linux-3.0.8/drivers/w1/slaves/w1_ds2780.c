int w1_ds2780_io(struct device *dev, char *buf, int addr, size_t count,
int io)
EXPORT_SYMBOL(w1_ds2780_io);
int w1_ds2780_eeprom_cmd(struct device *dev, int addr, int cmd)
EXPORT_SYMBOL(w1_ds2780_eeprom_cmd);
static ssize_t w1_ds2780_read_bin(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute w1_ds2780_bin_attr = ;
static DEFINE_IDR(bat_idr);
static DEFINE_MUTEX(bat_idr_lock);
static int new_bat_id(void)
static void release_bat_id(int id)
static int w1_ds2780_add_slave(struct w1_slave *sl)
static void w1_ds2780_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_ds2780_fops = ;
static struct w1_family w1_ds2780_family = ;
static int __init w1_ds2780_init(void)
static void __exit w1_ds2780_exit(void)
module_init(w1_ds2780_init);
module_exit(w1_ds2780_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Clifton Barnes <cabarnes@indesign-llc.com>");
MODULE_DESCRIPTION("1-wire Driver for Maxim/Dallas DS2780 Stand-Alone Fuel Gauge IC");
