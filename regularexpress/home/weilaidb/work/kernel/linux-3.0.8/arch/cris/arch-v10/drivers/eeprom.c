#define D(x)
#define EEPROM_MAJOR_NR 122
#define EEPROM_MINOR_NR 0
#define INITIAL_WRITEDELAY_US 4000
#define MAX_WRITEDELAY_US 10000
#define EEPROM_RETRIES 10
#define EEPROM_2KB (2 * 1024)
#define EEPROM_8KB (8 * 1024 - 1 )
#define EEPROM_16KB (16 * 1024)
#define i2c_delay(x) udelay(x)
struct eeprom_type
;
static int  eeprom_open(struct inode * inode, struct file * file);
static loff_t  eeprom_lseek(struct file * file, loff_t offset, int orig);
static ssize_t  eeprom_read(struct file * file, char * buf, size_t count,
loff_t *off);
static ssize_t  eeprom_write(struct file * file, const char * buf, size_t count,
loff_t *off);
static int eeprom_close(struct inode * inode, struct file * file);
static int  eeprom_address(unsigned long addr);
static int  read_from_eeprom(char * buf, int count);
static int eeprom_write_buf(loff_t addr, const char * buf, int count);
static int eeprom_read_buf(loff_t addr, char * buf, int count);
static void eeprom_disable_write_protect(void);
static const char eeprom_name[] = "eeprom";
static struct eeprom_type eeprom;
const struct file_operations eeprom_fops =
;
int __init eeprom_init(void)
static int eeprom_open(struct inode * inode, struct file * file)
static loff_t eeprom_lseek(struct file * file, loff_t offset, int orig)
static int eeprom_read_buf(loff_t addr, char * buf, int count)
static ssize_t eeprom_read(struct file * file, char * buf, size_t count, loff_t *off)
static int eeprom_write_buf(loff_t addr, const char * buf, int count)
static ssize_t eeprom_write(struct file * file, const char * buf, size_t count,
loff_t *off)
static int eeprom_close(struct inode * inode, struct file * file)
static int eeprom_address(unsigned long addr)
static int read_from_eeprom(char * buf, int count)
#define DBP_SAVE(x)
#define ax_printf printk
static void eeprom_disable_write_protect(void)
module_init(eeprom_init);
