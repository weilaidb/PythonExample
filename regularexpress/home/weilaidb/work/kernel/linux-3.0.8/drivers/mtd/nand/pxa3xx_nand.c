#define	CHIP_DELAY_TIMEOUT	(2 * HZ/10)
#define NAND_STOP_DELAY		(2 * HZ/50)
#define PAGE_CHUNK_SIZE		(2048)
#define NDCR		(0x00)
#define NDTR0CS0	(0x04)
#define NDTR1CS0	(0x0C)
#define NDSR		(0x14)
#define NDPCR		(0x18)
#define NDBDR0		(0x1C)
#define NDBDR1		(0x20)
#define NDDB		(0x40)
#define NDCB0		(0x48)
#define NDCB1		(0x4C)
#define NDCB2		(0x50)
#define NDCR_SPARE_EN		(0x1 << 31)
#define NDCR_ECC_EN		(0x1 << 30)
#define NDCR_DMA_EN		(0x1 << 29)
#define NDCR_ND_RUN		(0x1 << 28)
#define NDCR_DWIDTH_C		(0x1 << 27)
#define NDCR_DWIDTH_M		(0x1 << 26)
#define NDCR_PAGE_SZ		(0x1 << 24)
#define NDCR_NCSX		(0x1 << 23)
#define NDCR_ND_MODE		(0x3 << 21)
#define NDCR_NAND_MODE   	(0x0)
#define NDCR_CLR_PG_CNT		(0x1 << 20)
#define NDCR_STOP_ON_UNCOR	(0x1 << 19)
#define NDCR_RD_ID_CNT_MASK	(0x7 << 16)
#define NDCR_RD_ID_CNT(x)	(((x) << 16) & NDCR_RD_ID_CNT_MASK)
#define NDCR_RA_START		(0x1 << 15)
#define NDCR_PG_PER_BLK		(0x1 << 14)
#define NDCR_ND_ARB_EN		(0x1 << 12)
#define NDCR_INT_MASK           (0xFFF)
#define NDSR_MASK		(0xfff)
#define NDSR_RDY                (0x1 << 12)
#define NDSR_FLASH_RDY          (0x1 << 11)
#define NDSR_CS0_PAGED		(0x1 << 10)
#define NDSR_CS1_PAGED		(0x1 << 9)
#define NDSR_CS0_CMDD		(0x1 << 8)
#define NDSR_CS1_CMDD		(0x1 << 7)
#define NDSR_CS0_BBD		(0x1 << 6)
#define NDSR_CS1_BBD		(0x1 << 5)
#define NDSR_DBERR		(0x1 << 4)
#define NDSR_SBERR		(0x1 << 3)
#define NDSR_WRDREQ		(0x1 << 2)
#define NDSR_RDDREQ		(0x1 << 1)
#define NDSR_WRCMDREQ		(0x1)
#define NDCB0_ST_ROW_EN         (0x1 << 26)
#define NDCB0_AUTO_RS		(0x1 << 25)
#define NDCB0_CSEL		(0x1 << 24)
#define NDCB0_CMD_TYPE_MASK	(0x7 << 21)
#define NDCB0_CMD_TYPE(x)	(((x) << 21) & NDCB0_CMD_TYPE_MASK)
#define NDCB0_NC		(0x1 << 20)
#define NDCB0_DBC		(0x1 << 19)
#define NDCB0_ADDR_CYC_MASK	(0x7 << 16)
#define NDCB0_ADDR_CYC(x)	(((x) << 16) & NDCB0_ADDR_CYC_MASK)
#define NDCB0_CMD2_MASK		(0xff << 8)
#define NDCB0_CMD1_MASK		(0xff)
#define NDCB0_ADDR_CYC_SHIFT	(16)
#define nand_writel(info, off, val)	\
__raw_writel((val), (info)->mmio_base + (off))
#define nand_readl(info, off)		\
__raw_readl((info)->mmio_base + (off))
enum ;
enum ;
struct pxa3xx_nand_info ;
static int use_dma = 1;
module_param(use_dma, bool, 0444);
MODULE_PARM_DESC(use_dma, "enable DMA for data transferring to/from NAND HW");
static struct pxa3xx_nand_cmdset default_cmdset = ;
static struct pxa3xx_nand_timing timing[] = ;
static struct pxa3xx_nand_flash builtin_flash_types[] = ;
#define DEFAULT_FLASH_TYPE (&builtin_flash_types[0])
const char *mtd_names[] = ;
#define NDTR0_tCH(c)	(min((c), 7) << 19)
#define NDTR0_tCS(c)	(min((c), 7) << 16)
#define NDTR0_tWH(c)	(min((c), 7) << 11)
#define NDTR0_tWP(c)	(min((c), 7) << 8)
#define NDTR0_tRH(c)	(min((c), 7) << 3)
#define NDTR0_tRP(c)	(min((c), 7) << 0)
#define NDTR1_tR(c)	(min((c), 65535) << 16)
#define NDTR1_tWHR(c)	(min((c), 15) << 4)
#define NDTR1_tAR(c)	(min((c), 15) << 0)
#define ns2cycle(ns, clk)	(int)((ns) * (clk / 1000000) / 1000)
static void pxa3xx_nand_set_timing(struct pxa3xx_nand_info *info,
const struct pxa3xx_nand_timing *t)
static void pxa3xx_set_datasize(struct pxa3xx_nand_info *info)
static void pxa3xx_nand_start(struct pxa3xx_nand_info *info)
static void pxa3xx_nand_stop(struct pxa3xx_nand_info *info)
static void enable_int(struct pxa3xx_nand_info *info, uint32_t int_mask)
static void disable_int(struct pxa3xx_nand_info *info, uint32_t int_mask)
static void handle_data_pio(struct pxa3xx_nand_info *info)
static void start_data_dma(struct pxa3xx_nand_info *info)
static void pxa3xx_nand_data_dma_irq(int channel, void *data)
static irqreturn_t pxa3xx_nand_irq(int irq, void *devid)
static int pxa3xx_nand_dev_ready(struct mtd_info *mtd)
static inline int is_buf_blank(uint8_t *buf, size_t len)
static int prepare_command_pool(struct pxa3xx_nand_info *info, int command,
uint16_t column, int page_addr)
static void pxa3xx_nand_cmdfunc(struct mtd_info *mtd, unsigned command,
int column, int page_addr)
static void pxa3xx_nand_write_page_hwecc(struct mtd_info *mtd,
struct nand_chip *chip, const uint8_t *buf)
static int pxa3xx_nand_read_page_hwecc(struct mtd_info *mtd,
struct nand_chip *chip, uint8_t *buf, int page)
static uint8_t pxa3xx_nand_read_byte(struct mtd_info *mtd)
static u16 pxa3xx_nand_read_word(struct mtd_info *mtd)
static void pxa3xx_nand_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static void pxa3xx_nand_write_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static int pxa3xx_nand_verify_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static void pxa3xx_nand_select_chip(struct mtd_info *mtd, int chip)
static int pxa3xx_nand_waitfunc(struct mtd_info *mtd, struct nand_chip *this)
static int pxa3xx_nand_config_flash(struct pxa3xx_nand_info *info,
const struct pxa3xx_nand_flash *f)
static int pxa3xx_nand_detect_config(struct pxa3xx_nand_info *info)
#define MAX_BUFF_SIZE	PAGE_SIZE
static int pxa3xx_nand_init_buff(struct pxa3xx_nand_info *info)
static int pxa3xx_nand_sensing(struct pxa3xx_nand_info *info)
static int pxa3xx_nand_scan(struct mtd_info *mtd)
static
struct pxa3xx_nand_info *alloc_nand_resource(struct platform_device *pdev)
static int pxa3xx_nand_remove(struct platform_device *pdev)
static int pxa3xx_nand_probe(struct platform_device *pdev)
static int pxa3xx_nand_suspend(struct platform_device *pdev, pm_message_t state)
static int pxa3xx_nand_resume(struct platform_device *pdev)
#define pxa3xx_nand_suspend	NULL
#define pxa3xx_nand_resume	NULL
static struct platform_driver pxa3xx_nand_driver = ;
static int __init pxa3xx_nand_init(void)
module_init(pxa3xx_nand_init);
static void __exit pxa3xx_nand_exit(void)
module_exit(pxa3xx_nand_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PXA3xx NAND controller driver");
