#define PRINT_PREF KERN_INFO "mtd_readtest: "
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static struct mtd_info *mtd;
static unsigned char *iobuf;
static unsigned char *iobuf1;
static unsigned char *bbt;
static int pgsize;
static int ebcnt;
static int pgcnt;
static int read_eraseblock_by_page(int ebnum)
static void dump_eraseblock(int ebnum)
static int is_block_bad(int ebnum)
static int scan_for_bad_eraseblocks(void)
static int __init mtd_readtest_init(void)
module_init(mtd_readtest_init);
static void __exit mtd_readtest_exit(void)
module_exit(mtd_readtest_exit);
MODULE_DESCRIPTION("Read test module");
MODULE_AUTHOR("Adrian Hunter");
MODULE_LICENSE("GPL");
