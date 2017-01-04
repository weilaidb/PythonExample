static int w1_ds2760_io(struct device *dev, char *buf, int addr, size_t count,
int io)
int w1_ds2760_read(struct device *dev, char *buf, int addr, size_t count)
int w1_ds2760_write(struct device *dev, char *buf, int addr, size_t count)
static int w1_ds2760_eeprom_cmd(struct device *dev, int addr, int cmd)
int w1_ds2760_store_eeprom(struct device *dev, int addr)
int w1_ds2760_recall_eeprom(struct device *dev, int addr)
static ssize_t w1_ds2760_read_bin(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute w1_ds2760_bin_attr = ;
static DEFINE_IDR(bat_idr);
static DEFINE_MUTEX(bat_idr_lock);
static int new_bat_id(void)
static void release_bat_id(int id)
static int w1_ds2760_add_slave(struct w1_slave *sl)
static void w1_ds2760_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_ds2760_fops = ;
static struct w1_family w1_ds2760_family = ;
static int __init w1_ds2760_init(void)
static void __exit w1_ds2760_exit(void)
EXPORT_SYMBOL(w1_ds2760_read);
EXPORT_SYMBOL(w1_ds2760_write);
EXPORT_SYMBOL(w1_ds2760_store_eeprom);
EXPORT_SYMBOL(w1_ds2760_recall_eeprom);
module_init(w1_ds2760_init);
module_exit(w1_ds2760_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Szabolcs Gyurko <szabolcs.gyurko@tlt.hu>");
MODULE_DESCRIPTION("1-wire Driver Dallas 2760 battery monitor chip");
