#undef DEBUG
#define LBICTRL_LPCCTL_NR		0x00004000
#define CLE_PIN_CTL			15
#define ALE_PIN_CTL			14
static unsigned int lpcctl;
static struct mtd_info *pasemi_nand_mtd;
static const char driver_name[] = "pasemi-nand";
static void pasemi_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static void pasemi_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void pasemi_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
int pasemi_device_ready(struct mtd_info *mtd)
static int __devinit pasemi_nand_probe(struct platform_device *ofdev)
static int __devexit pasemi_nand_remove(struct platform_device *ofdev)
static const struct of_device_id pasemi_nand_match[] =
;
MODULE_DEVICE_TABLE(of, pasemi_nand_match);
static struct platform_driver pasemi_nand_driver =
;
static int __init pasemi_nand_init(void)
module_init(pasemi_nand_init);
static void __exit pasemi_nand_exit(void)
module_exit(pasemi_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Egor Martovetsky <egor@pasemi.com>");
MODULE_DESCRIPTION("NAND flash interface driver for PA Semi PWRficient");
