static struct nand_ecclayout nand_oob_sm = ;
static struct nand_ecclayout nand_oob_sm_small = ;
static int sm_block_markbad(struct mtd_info *mtd, loff_t ofs)
static struct nand_flash_dev nand_smartmedia_flash_ids[] = ;
#define XD_TYPEM       (NAND_NO_AUTOINCR | NAND_BROKEN_XD)
static struct nand_flash_dev nand_xd_flash_ids[] = ;
int sm_register_device(struct mtd_info *mtd, int smartmedia)
EXPORT_SYMBOL_GPL(sm_register_device);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxim Levitsky <maximlevitsky@gmail.com>");
MODULE_DESCRIPTION("Common SmartMedia/xD functions");
