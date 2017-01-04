static struct mtd_info *ams_delta_mtd = NULL;
#define NAND_MASK (AMS_DELTA_LATCH2_NAND_NRE | AMS_DELTA_LATCH2_NAND_NWE | AMS_DELTA_LATCH2_NAND_CLE | AMS_DELTA_LATCH2_NAND_ALE | AMS_DELTA_LATCH2_NAND_NCE | AMS_DELTA_LATCH2_NAND_NWP)
static struct mtd_partition partition_info[] = ;
static void ams_delta_write_byte(struct mtd_info *mtd, u_char byte)
static u_char ams_delta_read_byte(struct mtd_info *mtd)
static void ams_delta_write_buf(struct mtd_info *mtd, const u_char *buf,
int len)
static void ams_delta_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static int ams_delta_verify_buf(struct mtd_info *mtd, const u_char *buf,
int len)
static void ams_delta_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int ams_delta_nand_ready(struct mtd_info *mtd)
static int __devinit ams_delta_init(struct platform_device *pdev)
static int __devexit ams_delta_cleanup(struct platform_device *pdev)
static struct platform_driver ams_delta_nand_driver = ;
static int __init ams_delta_nand_init(void)
module_init(ams_delta_nand_init);
static void __exit ams_delta_nand_exit(void)
module_exit(ams_delta_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jonathan McDowell <noodles@earth.li>");
MODULE_DESCRIPTION("Glue layer for NAND flash on Amstrad E3 (Delta)");
