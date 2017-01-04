#define TXX9_NDFDTR	0x00
#define TXX9_NDFMCR	0x04
#define TXX9_NDFSR	0x08
#define TXX9_NDFISR	0x0c
#define TXX9_NDFIMR	0x10
#define TXX9_NDFSPR	0x14
#define TXX9_NDFRSTR	0x18
#define TXX9_NDFMCR_WE	0x80
#define TXX9_NDFMCR_ECC_ALL	0x60
#define TXX9_NDFMCR_ECC_RESET	0x60
#define TXX9_NDFMCR_ECC_READ	0x40
#define TXX9_NDFMCR_ECC_ON	0x20
#define TXX9_NDFMCR_ECC_OFF	0x00
#define TXX9_NDFMCR_CE	0x10
#define TXX9_NDFMCR_BSPRT	0x04
#define TXX9_NDFMCR_ALE	0x02
#define TXX9_NDFMCR_CLE	0x01
#define TXX9_NDFMCR_X16	0x0400
#define TXX9_NDFMCR_DMAREQ_MASK	0x0300
#define TXX9_NDFMCR_DMAREQ_NODMA	0x0000
#define TXX9_NDFMCR_DMAREQ_128	0x0100
#define TXX9_NDFMCR_DMAREQ_256	0x0200
#define TXX9_NDFMCR_DMAREQ_512	0x0300
#define TXX9_NDFMCR_CS_MASK	0x0c
#define TXX9_NDFMCR_CS(ch)	((ch) << 2)
#define TXX9_NDFSR_BUSY	0x80
#define TXX9_NDFSR_DMARUN	0x40
#define TXX9_NDFRSTR_RST	0x01
struct txx9ndfmc_priv ;
#define MAX_TXX9NDFMC_DEV	4
struct txx9ndfmc_drvdata ;
static struct platform_device *mtd_to_platdev(struct mtd_info *mtd)
static void __iomem *ndregaddr(struct platform_device *dev, unsigned int reg)
static u32 txx9ndfmc_read(struct platform_device *dev, unsigned int reg)
static void txx9ndfmc_write(struct platform_device *dev,
u32 val, unsigned int reg)
static uint8_t txx9ndfmc_read_byte(struct mtd_info *mtd)
static void txx9ndfmc_write_buf(struct mtd_info *mtd, const uint8_t *buf,
int len)
static void txx9ndfmc_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static int txx9ndfmc_verify_buf(struct mtd_info *mtd, const uint8_t *buf,
int len)
static void txx9ndfmc_cmd_ctrl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int txx9ndfmc_dev_ready(struct mtd_info *mtd)
static int txx9ndfmc_calculate_ecc(struct mtd_info *mtd, const uint8_t *dat,
uint8_t *ecc_code)
static int txx9ndfmc_correct_data(struct mtd_info *mtd, unsigned char *buf,
unsigned char *read_ecc, unsigned char *calc_ecc)
static void txx9ndfmc_enable_hwecc(struct mtd_info *mtd, int mode)
static void txx9ndfmc_initialize(struct platform_device *dev)
#define TXX9NDFMC_NS_TO_CYC(gbusclk, ns) \
DIV_ROUND_UP((ns) * DIV_ROUND_UP(gbusclk, 1000), 1000000)
static int txx9ndfmc_nand_scan(struct mtd_info *mtd)
static int __init txx9ndfmc_probe(struct platform_device *dev)
static int __exit txx9ndfmc_remove(struct platform_device *dev)
static int txx9ndfmc_resume(struct platform_device *dev)
#define txx9ndfmc_resume NULL
static struct platform_driver txx9ndfmc_driver = ;
static int __init txx9ndfmc_init(void)
static void __exit txx9ndfmc_exit(void)
module_init(txx9ndfmc_init);
module_exit(txx9ndfmc_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TXx9 SoC NAND flash controller driver");
MODULE_ALIAS("platform:txx9ndfmc");
