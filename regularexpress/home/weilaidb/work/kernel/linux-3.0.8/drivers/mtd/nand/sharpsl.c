struct sharpsl_nand ;
#define mtd_to_sharpsl(_mtd)	container_of(_mtd, struct sharpsl_nand, mtd)
#define ECCLPLB		0x00
#define ECCLPUB		0x04
#define ECCCP		0x08
#define ECCCNTR		0x0C
#define ECCCLRR		0x10
#define FLASHIO		0x14
#define FLASHCTL	0x18
#define FLRYBY		(1 << 5)
#define FLCE1		(1 << 4)
#define FLWP		(1 << 3)
#define FLALE		(1 << 2)
#define FLCLE		(1 << 1)
#define FLCE0		(1 << 0)
static void sharpsl_nand_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int sharpsl_nand_dev_ready(struct mtd_info *mtd)
static void sharpsl_nand_enable_hwecc(struct mtd_info *mtd, int mode)
static int sharpsl_nand_calculate_ecc(struct mtd_info *mtd, const u_char * dat, u_char * ecc_code)
static const char *part_probes[] = ;
static int __devinit sharpsl_nand_probe(struct platform_device *pdev)
static int __devexit sharpsl_nand_remove(struct platform_device *pdev)
static struct platform_driver sharpsl_nand_driver = ;
static int __init sharpsl_nand_init(void)
module_init(sharpsl_nand_init);
static void __exit sharpsl_nand_exit(void)
module_exit(sharpsl_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Richard Purdie <rpurdie@rpsys.net>");
MODULE_DESCRIPTION("Device specific logic for NAND flash on Sharp SL-C7xx Series");
