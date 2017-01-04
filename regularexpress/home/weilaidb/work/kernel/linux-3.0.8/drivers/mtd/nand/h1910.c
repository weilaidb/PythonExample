static struct mtd_info *h1910_nand_mtd = NULL;
static struct mtd_partition partition_info[] = ;
#define NUM_PARTITIONS 1
static void h1910_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int __init h1910_init(void)
module_init(h1910_init);
static void __exit h1910_cleanup(void)
module_exit(h1910_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Joshua Wise <joshua at joshuawise dot com>");
MODULE_DESCRIPTION("NAND flash driver for iPAQ h1910");
