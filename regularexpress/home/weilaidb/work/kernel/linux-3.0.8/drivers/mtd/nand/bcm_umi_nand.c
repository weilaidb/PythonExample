#define USE_DMA 1
static const __devinitconst char gBanner[] = KERN_INFO \
"BCM UMI MTD NAND Driver: 1.00\n";
const char *part_probes[] = ;
#if NAND_ECC_BCH
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr largepage_bbt = ;
#if USE_DMA
#define DMA_MIN_BUFLEN	512
#define DMA_MAX_BUFLEN	PAGE_SIZE
#define USE_DIRECT_IO(len)	(((len) < DMA_MIN_BUFLEN) || \
((len) > DMA_MAX_BUFLEN))
#define DMA_MAX_LEN             1024
#define DMA_MIN_BUFLEN          0
#define DMA_MAX_BUFLEN          0
#define USE_DIRECT_IO(len)      1
static void bcm_umi_nand_read_buf(struct mtd_info *mtd, u_char * buf, int len);
static void bcm_umi_nand_write_buf(struct mtd_info *mtd, const u_char * buf,
int len);
static struct mtd_info *board_mtd;
static void __iomem *bcm_umi_io_base;
static void *virtPtr;
static dma_addr_t physPtr;
static struct completion nand_comp;
#if NAND_ECC_BCH
#if USE_DMA
static void nand_dma_handler(DMA_Device_t dev, int reason, void *userData)
static int nand_dma_init(void)
static void nand_dma_term(void)
static void nand_dma_read(void *buf, int len)
static void nand_dma_write(const void *buf, int len)
static int nand_dev_ready(struct mtd_info *mtd)
int bcm_umi_nand_inithw(void)
static void bcm_umi_nand_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static void bcm_umi_nand_write_buf(struct mtd_info *mtd, const u_char * buf,
int len)
static void bcm_umi_nand_read_buf(struct mtd_info *mtd, u_char * buf, int len)
static uint8_t readbackbuf[NAND_MAX_PAGESIZE];
static int bcm_umi_nand_verify_buf(struct mtd_info *mtd, const u_char * buf,
int len)
static int __devinit bcm_umi_nand_probe(struct platform_device *pdev)
static int bcm_umi_nand_remove(struct platform_device *pdev)
static int bcm_umi_nand_suspend(struct platform_device *pdev,
pm_message_t state)
static int bcm_umi_nand_resume(struct platform_device *pdev)
#define bcm_umi_nand_suspend   NULL
#define bcm_umi_nand_resume    NULL
static struct platform_driver nand_driver = ;
static int __init nand_init(void)
static void __exit nand_exit(void)
module_init(nand_init);
module_exit(nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Broadcom");
MODULE_DESCRIPTION("BCM UMI MTD NAND driver");
