static struct mtd_info *autcpu12_mtd = NULL;
static void __iomem *autcpu12_fio_base;
static struct mtd_partition partition_info16k[] = ;
static struct mtd_partition partition_info32k[] = ;
static struct mtd_partition partition_info64k[] = ;
static struct mtd_partition partition_info128k[] = ;
#define NUM_PARTITIONS16K 2
#define NUM_PARTITIONS32K 2
#define NUM_PARTITIONS64K 2
#define NUM_PARTITIONS128K 2
static void autcpu12_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
int autcpu12_device_ready(struct mtd_info *mtd)
static int __init autcpu12_init(void)
module_init(autcpu12_init);
static void __exit autcpu12_cleanup(void)
module_exit(autcpu12_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Gleixner <tglx@linutronix.de>");
MODULE_DESCRIPTION("Glue layer for SmartMediaCard on autronix autcpu12");
