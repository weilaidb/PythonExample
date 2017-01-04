#define PRINT_PREF KERN_INFO "mtd_stresstest: "
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static int count = 10000;
module_param(count, int, S_IRUGO);
MODULE_PARM_DESC(count, "Number of operations to do (default is 10000)");
static struct mtd_info *mtd;
static unsigned char *writebuf;
static unsigned char *readbuf;
static unsigned char *bbt;
static int *offsets;
static int pgsize;
static int bufsize;
static int ebcnt;
static int pgcnt;
static unsigned long next = 1;
static inline unsigned int simple_rand(void)
static inline void simple_srand(unsigned long seed)
static int rand_eb(void)
static int rand_offs(void)
static int rand_len(int offs)
static int erase_eraseblock(int ebnum)
static int is_block_bad(int ebnum)
static int do_read(void)
static int do_write(void)
static int do_operation(void)
static int scan_for_bad_eraseblocks(void)
static int __init mtd_stresstest_init(void)
module_init(mtd_stresstest_init);
static void __exit mtd_stresstest_exit(void)
module_exit(mtd_stresstest_exit);
MODULE_DESCRIPTION("Stress test module");
MODULE_AUTHOR("Adrian Hunter");
MODULE_LICENSE("GPL");
