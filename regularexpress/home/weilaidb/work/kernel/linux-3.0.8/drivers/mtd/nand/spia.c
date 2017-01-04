static struct mtd_info *spia_mtd = NULL;
#define SPIA_IO_BASE	0xd0000000
#define SPIA_FIO_BASE	0xf0000000
#define SPIA_PEDR	0x0080
#define SPIA_PEDDR	0x00c0
static int spia_io_base = SPIA_IO_BASE;
static int spia_fio_base = SPIA_FIO_BASE;
static int spia_pedr = SPIA_PEDR;
static int spia_peddr = SPIA_PEDDR;
module_param(spia_io_base, int, 0);
module_param(spia_fio_base, int, 0);
module_param(spia_pedr, int, 0);
module_param(spia_peddr, int, 0);
static const struct mtd_partition partition_info[] = ;
#define NUM_PARTITIONS 2
static void spia_hwcontrol(struct mtd_info *mtd, int cmd)
static int __init spia_init(void)
module_init(spia_init);
static void __exit spia_cleanup(void)
module_exit(spia_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Steven J. Hill <sjhill@realitydiluted.com");
MODULE_DESCRIPTION("Board-specific glue layer for NAND flash on SPIA board");
