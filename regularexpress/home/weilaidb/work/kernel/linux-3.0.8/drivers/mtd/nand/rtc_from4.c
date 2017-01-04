static struct mtd_info *rtc_from4_mtd = NULL;
#define RTC_FROM4_MAX_CHIPS	2
#define SH77X9_BCR1	((volatile unsigned short *)(0xFFFFFF60))
#define SH77X9_BCR2	((volatile unsigned short *)(0xFFFFFF62))
#define SH77X9_WCR1	((volatile unsigned short *)(0xFFFFFF64))
#define SH77X9_WCR2	((volatile unsigned short *)(0xFFFFFF66))
#define SH77X9_MCR	((volatile unsigned short *)(0xFFFFFF68))
#define SH77X9_PCR	((volatile unsigned short *)(0xFFFFFF6C))
#define SH77X9_FRQCR	((volatile unsigned short *)(0xFFFFFF80))
#define RTC_FROM4_FIO_BASE	0x14000000
#define RTC_FROM4_CLE		(1 << 5)
#define RTC_FROM4_ALE		(1 << 4)
#define RTC_FROM4_NAND_ADDR_SLOT3	(0x00800000)
#define RTC_FROM4_NAND_ADDR_SLOT4	(0x00C00000)
#define RTC_FROM4_NAND_ADDR_FPGA	(0x01000000)
#define RTC_FROM4_NAND_ADDR_MASK	(RTC_FROM4_NAND_ADDR_SLOT3 | RTC_FROM4_NAND_ADDR_SLOT4 | RTC_FROM4_NAND_ADDR_FPGA)
#define RTC_FROM4_FPGA_SR		(RTC_FROM4_NAND_ADDR_FPGA | 0x00000002)
#define RTC_FROM4_DEVICE_READY		0x0001
#define RTC_FROM4_RS_ECC_CTL		(RTC_FROM4_NAND_ADDR_FPGA | 0x00000050)
#define RTC_FROM4_RS_ECC_CTL_CLR	(1 << 7)
#define RTC_FROM4_RS_ECC_CTL_GEN	(1 << 6)
#define RTC_FROM4_RS_ECC_CTL_FD_E	(1 << 5)
#define RTC_FROM4_RS_ECC		(RTC_FROM4_NAND_ADDR_FPGA | 0x00000060)
#define RTC_FROM4_RS_ECCN		(RTC_FROM4_NAND_ADDR_FPGA | 0x00000080)
#define RTC_FROM4_RS_ECC_CHK		(RTC_FROM4_NAND_ADDR_FPGA | 0x00000070)
#define RTC_FROM4_RS_ECC_CHK_ERROR	(1 << 7)
#define ERR_STAT_ECC_AVAILABLE		0x20
#define RTC_FROM4_HWECC	1
#define RTC_FROM4_NO_VIRTBLOCKS	0
static void __iomem *rtc_from4_fio_base = (void *)P2SEGADDR(RTC_FROM4_FIO_BASE);
static const struct mtd_partition partition_info[] = ;
#define NUM_PARTITIONS 1
static uint8_t bbt_pattern[] = ;
static uint8_t mirror_pattern[] = ;
static struct nand_bbt_descr rtc_from4_bbt_main_descr = ;
static struct nand_bbt_descr rtc_from4_bbt_mirror_descr = ;
static struct rs_control *rs_decoder;
static struct nand_ecclayout rtc_from4_nand_oobinfo = ;
static void rtc_from4_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static void rtc_from4_nand_select_chip(struct mtd_info *mtd, int chip)
static int rtc_from4_nand_device_ready(struct mtd_info *mtd)
static void deplete(struct mtd_info *mtd, int chip)
static void rtc_from4_enable_hwecc(struct mtd_info *mtd, int mode)
static void rtc_from4_calculate_ecc(struct mtd_info *mtd, const u_char *dat, u_char *ecc_code)
static int rtc_from4_correct_data(struct mtd_info *mtd, const u_char *buf, u_char *ecc1, u_char *ecc2)
static int rtc_from4_errstat(struct mtd_info *mtd, struct nand_chip *this,
int state, int status, int page)
static int __init rtc_from4_init(void)
module_init(rtc_from4_init);
static void __exit rtc_from4_cleanup(void)
module_exit(rtc_from4_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("d.marlin <dmarlin@redhat.com");
MODULE_DESCRIPTION("Board-specific glue layer for AG-AND flash on Renesas FROM_BOARD4");
