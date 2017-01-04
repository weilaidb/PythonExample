#define hard_ecc	1
#define hard_ecc	0
#define no_ecc		1
#define no_ecc		0
static int use_dma = 1;
module_param(use_dma, int, 0);
static int on_flash_bbt = 0;
module_param(on_flash_bbt, int, 0);
#define ecc_readl(add, reg)				\
__raw_readl(add + ATMEL_ECC_##reg)
#define ecc_writel(add, reg, value)			\
__raw_writel((value), add + ATMEL_ECC_##reg)
static struct nand_ecclayout atmel_oobinfo_large = ;
static struct nand_ecclayout atmel_oobinfo_small = ;
struct atmel_nand_host ;
static int cpu_has_dma(void)
static void atmel_nand_enable(struct atmel_nand_host *host)
static void atmel_nand_disable(struct atmel_nand_host *host)
static void atmel_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static int atmel_nand_device_ready(struct mtd_info *mtd)
static void atmel_read_buf8(struct mtd_info *mtd, u8 *buf, int len)
static void atmel_read_buf16(struct mtd_info *mtd, u8 *buf, int len)
static void atmel_write_buf8(struct mtd_info *mtd, const u8 *buf, int len)
static void atmel_write_buf16(struct mtd_info *mtd, const u8 *buf, int len)
static void dma_complete_func(void *completion)
static int atmel_nand_dma_op(struct mtd_info *mtd, void *buf, int len,
int is_read)
static void atmel_read_buf(struct mtd_info *mtd, u8 *buf, int len)
static void atmel_write_buf(struct mtd_info *mtd, const u8 *buf, int len)
static int atmel_nand_calculate(struct mtd_info *mtd,
const u_char *dat, unsigned char *ecc_code)
static int atmel_nand_read_page(struct mtd_info *mtd,
struct nand_chip *chip, uint8_t *buf, int page)
static int atmel_nand_correct(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *isnull)
static void atmel_nand_hwctl(struct mtd_info *mtd, int mode)
static const char *part_probes[] = ;
static int __init atmel_nand_probe(struct platform_device *pdev)
static int __exit atmel_nand_remove(struct platform_device *pdev)
static struct platform_driver atmel_nand_driver = ;
static int __init atmel_nand_init(void)
static void __exit atmel_nand_exit(void)
module_init(atmel_nand_init);
module_exit(atmel_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rick Bronson");
MODULE_DESCRIPTION("NAND/SmartMedia driver for AT91 / AVR32");
MODULE_ALIAS("platform:atmel_nand");
