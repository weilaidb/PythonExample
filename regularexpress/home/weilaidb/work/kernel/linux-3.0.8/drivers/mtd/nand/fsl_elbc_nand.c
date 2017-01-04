#define MAX_BANKS 8
#define ERR_BYTE 0xFF
#define FCM_TIMEOUT_MSECS 500
struct fsl_elbc_mtd ;
struct fsl_elbc_fcm_ctrl ;
static struct nand_ecclayout fsl_elbc_oob_sp_eccm0 = ;
static struct nand_ecclayout fsl_elbc_oob_sp_eccm1 = ;
static struct nand_ecclayout fsl_elbc_oob_lp_eccm0 = ;
static struct nand_ecclayout fsl_elbc_oob_lp_eccm1 = ;
static u8 scan_ff_pattern[] = ;
static struct nand_bbt_descr largepage_memorybased = ;
static u8 bbt_pattern[] = ;
static u8 mirror_pattern[] = ;
static struct nand_bbt_descr bbt_main_descr = ;
static struct nand_bbt_descr bbt_mirror_descr = ;
static void set_addr(struct mtd_info *mtd, int column, int page_addr, int oob)
static int fsl_elbc_run_command(struct mtd_info *mtd)
static void fsl_elbc_do_read(struct nand_chip *chip, int oob)
static void fsl_elbc_cmdfunc(struct mtd_info *mtd, unsigned int command,
int column, int page_addr)
static void fsl_elbc_select_chip(struct mtd_info *mtd, int chip)
static void fsl_elbc_write_buf(struct mtd_info *mtd, const u8 *buf, int len)
static u8 fsl_elbc_read_byte(struct mtd_info *mtd)
static void fsl_elbc_read_buf(struct mtd_info *mtd, u8 *buf, int len)
static int fsl_elbc_verify_buf(struct mtd_info *mtd, const u_char *buf, int len)
static int fsl_elbc_wait(struct mtd_info *mtd, struct nand_chip *chip)
static int fsl_elbc_chip_init_tail(struct mtd_info *mtd)
static int fsl_elbc_read_page(struct mtd_info *mtd,
struct nand_chip *chip,
uint8_t *buf,
int page)
static void fsl_elbc_write_page(struct mtd_info *mtd,
struct nand_chip *chip,
const uint8_t *buf)
static int fsl_elbc_chip_init(struct fsl_elbc_mtd *priv)
static int fsl_elbc_chip_remove(struct fsl_elbc_mtd *priv)
static DEFINE_MUTEX(fsl_elbc_nand_mutex);
static int __devinit fsl_elbc_nand_probe(struct platform_device *pdev)
static int fsl_elbc_nand_remove(struct platform_device *pdev)
static const struct of_device_id fsl_elbc_nand_match[] = ;
static struct platform_driver fsl_elbc_nand_driver = ;
static int __init fsl_elbc_nand_init(void)
static void __exit fsl_elbc_nand_exit(void)
module_init(fsl_elbc_nand_init);
module_exit(fsl_elbc_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Freescale");
MODULE_DESCRIPTION("Freescale Enhanced Local Bus Controller MTD NAND driver");
