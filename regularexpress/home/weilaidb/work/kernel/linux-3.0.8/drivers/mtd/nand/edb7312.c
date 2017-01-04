static struct mtd_info *ep7312_mtd = NULL;
#define EP7312_FIO_PBASE 0x10000000
#define EP7312_PXDR	0x0001
#define EP7312_PXDDR	0x0041
static unsigned long ep7312_fio_pbase = EP7312_FIO_PBASE;
static void __iomem *ep7312_pxdr = (void __iomem *)EP7312_PXDR;
static void __iomem *ep7312_pxddr = (void __iomem *)EP7312_PXDDR;
static struct mtd_partition partition_info[] = ;
#define NUM_PARTITIONS 1
static void ep7312_hwcontrol(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static int ep7312_device_ready(struct mtd_info *mtd)
const char *part_probes[] = ;
static int __init ep7312_init(void)
module_init(ep7312_init);
static void __exit ep7312_cleanup(void)
module_exit(ep7312_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marius Groeger <mag@sysgo.de>");
MODULE_DESCRIPTION("MTD map driver for Cogent EDB7312 board");
