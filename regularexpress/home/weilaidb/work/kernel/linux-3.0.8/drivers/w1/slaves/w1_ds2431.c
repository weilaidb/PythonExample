#define W1_F2D_EEPROM_SIZE		128
#define W1_F2D_PAGE_COUNT		4
#define W1_F2D_PAGE_BITS		5
#define W1_F2D_PAGE_SIZE		(1<<W1_F2D_PAGE_BITS)
#define W1_F2D_PAGE_MASK		0x1F
#define W1_F2D_SCRATCH_BITS  3
#define W1_F2D_SCRATCH_SIZE  (1<<W1_F2D_SCRATCH_BITS)
#define W1_F2D_SCRATCH_MASK  (W1_F2D_SCRATCH_SIZE-1)
#define W1_F2D_READ_EEPROM	0xF0
#define W1_F2D_WRITE_SCRATCH	0x0F
#define W1_F2D_READ_SCRATCH	0xAA
#define W1_F2D_COPY_SCRATCH	0x55
#define W1_F2D_TPROG_MS		11
#define W1_F2D_READ_RETRIES		10
#define W1_F2D_READ_MAXLEN		8
static inline size_t w1_f2d_fix_count(loff_t off, size_t count, size_t size)
static int w1_f2d_readblock(struct w1_slave *sl, int off, int count, char *buf)
static ssize_t w1_f2d_read_bin(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static int w1_f2d_write(struct w1_slave *sl, int addr, int len, const u8 *data)
static ssize_t w1_f2d_write_bin(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute w1_f2d_bin_attr = ;
static int w1_f2d_add_slave(struct w1_slave *sl)
static void w1_f2d_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_f2d_fops = ;
static struct w1_family w1_family_2d = ;
static int __init w1_f2d_init(void)
static void __exit w1_f2d_fini(void)
module_init(w1_f2d_init);
module_exit(w1_f2d_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bernhard Weirich <bernhard.weirich@riedel.net>");
MODULE_DESCRIPTION("w1 family 2d driver for DS2431, 1kb EEPROM");
