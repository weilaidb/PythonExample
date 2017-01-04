#define PRINT_PREF KERN_INFO "mtd_subpagetest: "
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static struct mtd_info *mtd;
static unsigned char *writebuf;
static unsigned char *readbuf;
static unsigned char *bbt;
static int subpgsize;
static int bufsize;
static int ebcnt;
static int pgcnt;
static int errcnt;
static unsigned long next = 1;
static inline unsigned int simple_rand(void)
static inline void simple_srand(unsigned long seed)
static void set_random_data(unsigned char *buf, size_t len)
static inline void clear_data(unsigned char *buf, size_t len)
static int erase_eraseblock(int ebnum)
static int erase_whole_device(void)
static int write_eraseblock(int ebnum)
static int write_eraseblock2(int ebnum)
static void print_subpage(unsigned char *p)
static int verify_eraseblock(int ebnum)
static int verify_eraseblock2(int ebnum)
static int verify_eraseblock_ff(int ebnum)
static int verify_all_eraseblocks_ff(void)
static int is_block_bad(int ebnum)
static int scan_for_bad_eraseblocks(void)
static int __init mtd_subpagetest_init(void)
module_init(mtd_subpagetest_init);
static void __exit mtd_subpagetest_exit(void)
module_exit(mtd_subpagetest_exit);
MODULE_DESCRIPTION("Subpage test module");
MODULE_AUTHOR("Adrian Hunter");
MODULE_LICENSE("GPL");
