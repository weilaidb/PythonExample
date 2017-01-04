static struct nand_ecclayout fsmc_ecc1_layout = ;
static struct nand_ecclayout fsmc_ecc4_lp_layout = ;
static struct fsmc_eccplace fsmc_ecc4_lp_place = ;
static struct nand_ecclayout fsmc_ecc4_sp_layout = ;
static struct fsmc_eccplace fsmc_ecc4_sp_place = ;
static struct mtd_partition partition_info_16KB_blk[] = ;
static struct mtd_partition partition_info_128KB_blk[] = ;
const char *part_probes[] = ;
struct fsmc_nand_data ;
static void fsmc_select_chip(struct mtd_info *mtd, int chipnr)
static void fsmc_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static void __init fsmc_nand_setup(struct fsmc_regs *regs, uint32_t bank,
uint32_t busw)
static void fsmc_enable_hwecc(struct mtd_info *mtd, int mode)
static int fsmc_read_hwecc_ecc4(struct mtd_info *mtd, const uint8_t *data,
uint8_t *ecc)
static int fsmc_read_hwecc_ecc1(struct mtd_info *mtd, const uint8_t *data,
uint8_t *ecc)
static int fsmc_read_page_hwecc(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static int fsmc_correct_data(struct mtd_info *mtd, uint8_t *dat,
uint8_t *read_ecc, uint8_t *calc_ecc)
static int __init fsmc_nand_probe(struct platform_device *pdev)
static int fsmc_nand_remove(struct platform_device *pdev)
static int fsmc_nand_suspend(struct device *dev)
static int fsmc_nand_resume(struct device *dev)
static const struct dev_pm_ops fsmc_nand_pm_ops = ;
static struct platform_driver fsmc_nand_driver = ;
static int __init fsmc_nand_init(void)
module_init(fsmc_nand_init);
static void __exit fsmc_nand_exit(void)
module_exit(fsmc_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vipin Kumar <vipin.kumar@st.com>, Ashish Priyadarshi");
MODULE_DESCRIPTION("NAND driver for SPEAr Platforms");
