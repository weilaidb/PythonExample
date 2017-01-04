#define PRINT_PREF KERN_INFO "mtd_pagetest: "
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static struct mtd_info *mtd;
static unsigned char *twopages;
static unsigned char *writebuf;
static unsigned char *boundary;
static unsigned char *bbt;
static int pgsize;
static int bufsize;
static int ebcnt;
static int pgcnt;
static int errcnt;
static unsigned long next = 1;
static inline unsigned int simple_rand(void)
static inline void simple_srand(unsigned long seed)
static void set_random_data(unsigned char *buf, size_t len)
static int erase_eraseblock(int ebnum)
static int write_eraseblock(int ebnum)
static int verify_eraseblock(int ebnum)
static int crosstest(void)
static int erasecrosstest(void)
static int erasetest(void)
static int is_block_bad(int ebnum)
static int scan_for_bad_eraseblocks(void)
static int __init mtd_pagetest_init(void)
module_init(mtd_pagetest_init);
static void __exit mtd_pagetest_exit(void)
module_exit(mtd_pagetest_exit);
MODULE_DESCRIPTION("NAND page test");
MODULE_AUTHOR("Adrian Hunter");
MODULE_LICENSE("GPL");
