#define PRINT_PREF KERN_INFO "mtd_speedtest: "
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static int count;
module_param(count, int, S_IRUGO);
MODULE_PARM_DESC(count, "Maximum number of eraseblocks to use "
"(0 means use all)");
static struct mtd_info *mtd;
static unsigned char *iobuf;
static unsigned char *bbt;
static int pgsize;
static int ebcnt;
static int pgcnt;
static int goodebcnt;
static struct timeval start, finish;
static unsigned long next = 1;
static inline unsigned int simple_rand(void)
static inline void simple_srand(unsigned long seed)
static void set_random_data(unsigned char *buf, size_t len)
static int erase_eraseblock(int ebnum)
static int multiblock_erase(int ebnum, int blocks)
static int erase_whole_device(void)
static int write_eraseblock(int ebnum)
static int write_eraseblock_by_page(int ebnum)
static int write_eraseblock_by_2pages(int ebnum)
static int read_eraseblock(int ebnum)
static int read_eraseblock_by_page(int ebnum)
static int read_eraseblock_by_2pages(int ebnum)
static int is_block_bad(int ebnum)
static inline void start_timing(void)
static inline void stop_timing(void)
static long calc_speed(void)
static int scan_for_bad_eraseblocks(void)
static int __init mtd_speedtest_init(void)
module_init(mtd_speedtest_init);
static void __exit mtd_speedtest_exit(void)
module_exit(mtd_speedtest_exit);
MODULE_DESCRIPTION("Speed test module");
MODULE_AUTHOR("Adrian Hunter");
MODULE_LICENSE("GPL");
