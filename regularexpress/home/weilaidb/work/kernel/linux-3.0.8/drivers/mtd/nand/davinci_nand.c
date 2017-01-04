struct davinci_nand_info ;
static DEFINE_SPINLOCK(davinci_nand_lock);
static bool ecc4_busy;
#define to_davinci_nand(m) container_of(m, struct davinci_nand_info, mtd)
static inline unsigned int davinci_nand_readl(struct davinci_nand_info *info,
int offset)
static inline void davinci_nand_writel(struct davinci_nand_info *info,
int offset, unsigned long value)
static void nand_davinci_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static void nand_davinci_select_chip(struct mtd_info *mtd, int chip)
static inline uint32_t nand_davinci_readecc_1bit(struct mtd_info *mtd)
static void nand_davinci_hwctl_1bit(struct mtd_info *mtd, int mode)
static int nand_davinci_calculate_1bit(struct mtd_info *mtd,
const u_char *dat, u_char *ecc_code)
static int nand_davinci_correct_1bit(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *calc_ecc)
static void nand_davinci_hwctl_4bit(struct mtd_info *mtd, int mode)
static void
nand_davinci_readecc_4bit(struct davinci_nand_info *info, u32 code[4])
static int nand_davinci_calculate_4bit(struct mtd_info *mtd,
const u_char *dat, u_char *ecc_code)
static int nand_davinci_correct_4bit(struct mtd_info *mtd,
u_char *data, u_char *ecc_code, u_char *null)
static void nand_davinci_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static void nand_davinci_write_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static int nand_davinci_dev_ready(struct mtd_info *mtd)
static struct nand_ecclayout hwecc4_small __initconst = ;
static struct nand_ecclayout hwecc4_2048 __initconst = ;
static int __init nand_davinci_probe(struct platform_device *pdev)
static int __exit nand_davinci_remove(struct platform_device *pdev)
static struct platform_driver nand_davinci_driver = ;
MODULE_ALIAS("platform:davinci_nand");
static int __init nand_davinci_init(void)
module_init(nand_davinci_init);
static void __exit nand_davinci_exit(void)
module_exit(nand_davinci_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("Davinci NAND flash driver");
