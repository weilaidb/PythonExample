#define NDFC_MAX_CS    4
struct ndfc_controller ;
static struct ndfc_controller ndfc_ctrl[NDFC_MAX_CS];
static void ndfc_select_chip(struct mtd_info *mtd, int chip)
static void ndfc_hwcontrol(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static int ndfc_ready(struct mtd_info *mtd)
static void ndfc_enable_hwecc(struct mtd_info *mtd, int mode)
static int ndfc_calculate_ecc(struct mtd_info *mtd,
const u_char *dat, u_char *ecc_code)
static void ndfc_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static void ndfc_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static int ndfc_verify_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static int ndfc_chip_init(struct ndfc_controller *ndfc,
struct device_node *node)
static int __devinit ndfc_probe(struct platform_device *ofdev)
static int __devexit ndfc_remove(struct platform_device *ofdev)
static const struct of_device_id ndfc_match[] = ;
MODULE_DEVICE_TABLE(of, ndfc_match);
static struct platform_driver ndfc_driver = ;
static int __init ndfc_nand_init(void)
static void __exit ndfc_nand_exit(void)
module_init(ndfc_nand_init);
module_exit(ndfc_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Gleixner <tglx@linutronix.de>");
MODULE_DESCRIPTION("OF Platform driver for NDFC");
