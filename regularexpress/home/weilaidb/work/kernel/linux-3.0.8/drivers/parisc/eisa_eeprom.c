#define 	EISA_EEPROM_MINOR 241
static loff_t eisa_eeprom_llseek(struct file *file, loff_t offset, int origin )
static ssize_t eisa_eeprom_read(struct file * file,
char __user *buf, size_t count, loff_t *ppos )
static int eisa_eeprom_open(struct inode *inode, struct file *file)
static int eisa_eeprom_release(struct inode *inode, struct file *file)
static const struct file_operations eisa_eeprom_fops = ;
static struct miscdevice eisa_eeprom_dev = ;
static int __init eisa_eeprom_init(void)
MODULE_LICENSE("GPL");
module_init(eisa_eeprom_init);
