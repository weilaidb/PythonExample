#define GPIO_NAND_CS	(11)
#define GPIO_NAND_RB	(89)
static struct mtd_info *cmx270_nand_mtd;
static void __iomem *cmx270_nand_io;
static struct mtd_partition partition_info[] = ;
#define NUM_PARTITIONS (ARRAY_SIZE(partition_info))
const char *part_probes[] = ;
static u_char cmx270_read_byte(struct mtd_info *mtd)
static void cmx270_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void cmx270_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static int cmx270_verify_buf(struct mtd_info *mtd, const u_char *buf, int len)
static inline void nand_cs_on(void)
static void nand_cs_off(void)
static void cmx270_hwcontrol(struct mtd_info *mtd, int dat,
unsigned int ctrl)
static int cmx270_device_ready(struct mtd_info *mtd)
static int __init cmx270_init(void)
module_init(cmx270_init);
static void __exit cmx270_cleanup(void)
module_exit(cmx270_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("NAND flash driver for Compulab CM-X270 Module");
