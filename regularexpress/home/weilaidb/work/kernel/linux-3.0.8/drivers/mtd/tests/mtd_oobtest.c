#define PRINT_PREF KERN_INFO "mtd_oobtest: "
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static struct mtd_info *mtd;
static unsigned char *readbuf;
static unsigned char *writebuf;
static unsigned char *bbt;
static int ebcnt;
static int pgcnt;
static int errcnt;
static int use_offset;
static int use_len;
static int use_len_max;
static int vary_offset;
static unsigned long next = 1;
static inline unsigned int simple_rand(void)
static inline void simple_srand(unsigned long seed)
static void set_random_data(unsigned char *buf, size_t len)
static int erase_eraseblock(int ebnum)
static int erase_whole_device(void)
static void do_vary_offset(void)
static int write_eraseblock(int ebnum)
static int write_whole_device(void)
static int verify_eraseblock(int ebnum)
static int verify_eraseblock_in_one_go(int ebnum)
static int verify_all_eraseblocks(void)
static int is_block_bad(int ebnum)
static int scan_for_bad_eraseblocks(void)
static int __init mtd_oobtest_init(void)
module_init(mtd_oobtest_init);
static void __exit mtd_oobtest_exit(void)
module_exit(mtd_oobtest_exit);
MODULE_DESCRIPTION("Out-of-band test module");
MODULE_AUTHOR("Adrian Hunter");
MODULE_LICENSE("GPL");
