#define CCR_COMMAND	0x04
#define CCR_BASE	0x10
#define CCR_INTP	0x3d
#define CCR_INTE	0x48
#define CCR_EC		0x4a
#define CCR_ICC		0x4c
#define CCR_ECCC	0x5b
#define CCR_NFTC	0x60
#define CCR_NFM		0x61
#define CCR_NFPSC	0x62
#define CCR_NFDC	0x63
#define FCR_DATA	0x00
#define FCR_MODE	0x04
#define FCR_STATUS	0x05
#define FCR_ISR		0x06
#define FCR_IMR		0x07
#define FCR_MODE_DATA	0x94
#define FCR_MODE_COMMAND 0x95
#define FCR_MODE_ADDRESS 0x96
#define FCR_MODE_HWECC_CALC	0xB4
#define FCR_MODE_HWECC_RESULT	0xD4
#define FCR_MODE_HWECC_RESET	0xF4
#define FCR_MODE_POWER_ON	0x0C
#define FCR_MODE_POWER_OFF	0x08
#define FCR_MODE_LED_OFF	0x00
#define FCR_MODE_LED_ON		0x04
#define FCR_MODE_EJECT_ON	0x68
#define FCR_MODE_EJECT_OFF	0x08
#define FCR_MODE_LOCK		0x6C
#define FCR_MODE_UNLOCK		0x0C
#define FCR_MODE_CONTROLLER_ID	0x40
#define FCR_MODE_STANDBY	0x00
#define FCR_MODE_WE		0x80
#define FCR_MODE_ECC1		0x40
#define FCR_MODE_ECC0		0x20
#define FCR_MODE_CE		0x10
#define FCR_MODE_PCNT1		0x08
#define FCR_MODE_PCNT0		0x04
#define FCR_MODE_ALE		0x02
#define FCR_MODE_CLE		0x01
#define FCR_STATUS_BUSY		0x80
struct tmio_nand ;
#define mtd_to_tmio(m)			container_of(m, struct tmio_nand, mtd)
static const char *part_probes[] = ;
static void tmio_nand_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int tmio_nand_dev_ready(struct mtd_info *mtd)
static irqreturn_t tmio_irq(int irq, void *__tmio)
static int
tmio_nand_wait(struct mtd_info *mtd, struct nand_chip *nand_chip)
static u_char tmio_nand_read_byte(struct mtd_info *mtd)
static void
tmio_nand_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void tmio_nand_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static int
tmio_nand_verify_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void tmio_nand_enable_hwecc(struct mtd_info *mtd, int mode)
static int tmio_nand_calculate_ecc(struct mtd_info *mtd, const u_char *dat,
u_char *ecc_code)
static int tmio_nand_correct_data(struct mtd_info *mtd, unsigned char *buf,
unsigned char *read_ecc, unsigned char *calc_ecc)
static int tmio_hw_init(struct platform_device *dev, struct tmio_nand *tmio)
static void tmio_hw_stop(struct platform_device *dev, struct tmio_nand *tmio)
static int tmio_probe(struct platform_device *dev)
static int tmio_remove(struct platform_device *dev)
static int tmio_suspend(struct platform_device *dev, pm_message_t state)
static int tmio_resume(struct platform_device *dev)
#define tmio_suspend NULL
#define tmio_resume NULL
static struct platform_driver tmio_driver = ;
static int __init tmio_init(void)
static void __exit tmio_exit(void)
module_init(tmio_init);
module_exit(tmio_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Ian Molton, Dirk Opfer, Chris Humbert, Dmitry Baryshkov");
MODULE_DESCRIPTION("NAND flash driver on Toshiba Mobile IO controller");
MODULE_ALIAS("platform:tmio-nand");
