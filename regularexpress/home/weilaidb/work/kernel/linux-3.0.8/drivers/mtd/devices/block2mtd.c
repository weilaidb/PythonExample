#define ERROR(fmt, args...) printk(KERN_ERR "block2mtd: " fmt "\n" , ## args)
#define INFO(fmt, args...) printk(KERN_INFO "block2mtd: " fmt "\n" , ## args)
struct block2mtd_dev ;
static LIST_HEAD(blkmtd_device_list);
static struct page *page_read(struct address_space *mapping, int index)
static int _block2mtd_erase(struct block2mtd_dev *dev, loff_t to, size_t len)
static int block2mtd_erase(struct mtd_info *mtd, struct erase_info *instr)
static int block2mtd_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int _block2mtd_write(struct block2mtd_dev *dev, const u_char *buf,
loff_t to, size_t len, size_t *retlen)
static int block2mtd_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static void block2mtd_sync(struct mtd_info *mtd)
static void block2mtd_free_device(struct block2mtd_dev *dev)
static struct block2mtd_dev *add_device(char *devname, int erase_size)
static int ustrtoul(const char *cp, char **endp, unsigned int base)
static int parse_num(size_t *num, const char *token)
static inline void kill_final_newline(char *str)
#define parse_err(fmt, args...) do  while (0)
static int block2mtd_init_called = 0;
static char block2mtd_paramline[80 + 12];
static int block2mtd_setup2(const char *val)
static int block2mtd_setup(const char *val, struct kernel_param *kp)
module_param_call(block2mtd, block2mtd_setup, NULL, NULL, 0200);
MODULE_PARM_DESC(block2mtd, "Device to use. \"block2mtd=<dev>[,<erasesize>]\"");
static int __init block2mtd_init(void)
static void __devexit block2mtd_exit(void)
module_init(block2mtd_init);
module_exit(block2mtd_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Joern Engel <joern@lazybastard.org>");
MODULE_DESCRIPTION("Emulate an MTD using a block device");
