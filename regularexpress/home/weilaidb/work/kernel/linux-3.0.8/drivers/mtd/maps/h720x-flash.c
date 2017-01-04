static struct mtd_info *mymtd;
static struct map_info h720x_map = ;
static struct mtd_partition h720x_partitions[] = ;
#define NUM_PARTITIONS ARRAY_SIZE(h720x_partitions)
static int                   nr_mtd_parts;
static struct mtd_partition *mtd_parts;
static const char *probes[] = ;
static int __init h720x_mtd_init(void)
static void __exit h720x_mtd_cleanup(void)
module_init(h720x_mtd_init);
module_exit(h720x_mtd_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Gleixner <tglx@linutronix.de>");
MODULE_DESCRIPTION("MTD map driver for Hynix evaluation boards");
