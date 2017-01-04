#define CRC16_INIT		0
#define CRC16_VALID		0xb001
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ben Gardner <bgardner@wabtec.com>");
MODULE_DESCRIPTION("w1 family 23 driver for DS2433, 4kb EEPROM");
#define W1_EEPROM_SIZE		512
#define W1_PAGE_COUNT		16
#define W1_PAGE_SIZE		32
#define W1_PAGE_BITS		5
#define W1_PAGE_MASK		0x1F
#define W1_F23_TIME		300
#define W1_F23_READ_EEPROM	0xF0
#define W1_F23_WRITE_SCRATCH	0x0F
#define W1_F23_READ_SCRATCH	0xAA
#define W1_F23_COPY_SCRATCH	0x55
struct w1_f23_data ;
static inline size_t w1_f23_fix_count(loff_t off, size_t count, size_t size)
static int w1_f23_refresh_block(struct w1_slave *sl, struct w1_f23_data *data,
int block)
static ssize_t w1_f23_read_bin(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static int w1_f23_write(struct w1_slave *sl, int addr, int len, const u8 *data)
static ssize_t w1_f23_write_bin(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute w1_f23_bin_attr = ;
static int w1_f23_add_slave(struct w1_slave *sl)
static void w1_f23_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_f23_fops = ;
static struct w1_family w1_family_23 = ;
static int __init w1_f23_init(void)
static void __exit w1_f23_fini(void)
module_init(w1_f23_init);
module_exit(w1_f23_fini);
