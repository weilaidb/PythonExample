#define DRV_NAME	"bf5xx-nand"
#define DRV_VERSION	"1.2"
#define DRV_AUTHOR	"Bryan Wu <bryan.wu@analog.com>"
#define DRV_DESC	"BF5xx on-chip NAND FLash Controller Driver"
#define NBUSY       0x01
#define WB_FULL     0x02
#define PG_WR_STAT  0x04
#define PG_RD_STAT  0x08
#define WB_EMPTY    0x10
#define NBUSYIRQ    0x01
#define WB_OVF      0x02
#define WB_EDGE     0x04
#define RD_RDY      0x08
#define WR_DONE     0x10
#define ECC_RST     0x01
#define PG_RD_START 0x01
#define PG_WR_START 0x02
static int hardware_ecc = 1;
static int hardware_ecc;
static const unsigned short bfin_nfc_pin_req[] =
;
static struct nand_ecclayout bootrom_ecclayout = ;
struct bf5xx_nand_info ;
static struct bf5xx_nand_info *mtd_to_nand_info(struct mtd_info *mtd)
static struct bf5xx_nand_info *to_nand_info(struct platform_device *pdev)
static struct bf5xx_nand_platform *to_nand_plat(struct platform_device *pdev)
static void bf5xx_nand_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int bf5xx_nand_devready(struct mtd_info *mtd)
static int bf5xx_nand_correct_data_256(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *calc_ecc)
static int bf5xx_nand_correct_data(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *calc_ecc)
static void bf5xx_nand_enable_hwecc(struct mtd_info *mtd, int mode)
static int bf5xx_nand_calculate_ecc(struct mtd_info *mtd,
const u_char *dat, u_char *ecc_code)
static void bf5xx_nand_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static uint8_t bf5xx_nand_read_byte(struct mtd_info *mtd)
static void bf5xx_nand_write_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static void bf5xx_nand_read_buf16(struct mtd_info *mtd, uint8_t *buf, int len)
static void bf5xx_nand_write_buf16(struct mtd_info *mtd,
const uint8_t *buf, int len)
static irqreturn_t bf5xx_nand_dma_irq(int irq, void *dev_id)
static void bf5xx_nand_dma_rw(struct mtd_info *mtd,
uint8_t *buf, int is_read)
static void bf5xx_nand_dma_read_buf(struct mtd_info *mtd,
uint8_t *buf, int len)
static void bf5xx_nand_dma_write_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static int bf5xx_nand_read_page_raw(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static void bf5xx_nand_write_page_raw(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static int bf5xx_nand_dma_init(struct bf5xx_nand_info *info)
static void bf5xx_nand_dma_remove(struct bf5xx_nand_info *info)
static int bf5xx_nand_hw_init(struct bf5xx_nand_info *info)
static int __devinit bf5xx_nand_add_partition(struct bf5xx_nand_info *info)
static int __devexit bf5xx_nand_remove(struct platform_device *pdev)
static int bf5xx_nand_scan(struct mtd_info *mtd)
static int __devinit bf5xx_nand_probe(struct platform_device *pdev)
static int bf5xx_nand_suspend(struct platform_device *dev, pm_message_t pm)
static int bf5xx_nand_resume(struct platform_device *dev)
#define bf5xx_nand_suspend NULL
#define bf5xx_nand_resume NULL
static struct platform_driver bf5xx_nand_driver = ;
static int __init bf5xx_nand_init(void)
static void __exit bf5xx_nand_exit(void)
module_init(bf5xx_nand_init);
module_exit(bf5xx_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION(DRV_DESC);
MODULE_ALIAS("platform:" DRV_NAME);
