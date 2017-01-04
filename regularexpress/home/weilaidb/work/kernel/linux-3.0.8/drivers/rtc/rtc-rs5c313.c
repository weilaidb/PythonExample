#define DRV_NAME	"rs5c313"
#define DRV_VERSION 	"1.13"
#define SCSMR1		0xFFE00000
#define SCSCR1		0xFFE00008
#define SCSMR1_CA	0x80
#define SCSCR1_CKE	0x03
#define SCSPTR1		0xFFE0001C
#define SCSPTR1_EIO	0x80
#define SCSPTR1_SPB1IO	0x08
#define SCSPTR1_SPB1DT	0x04
#define SCSPTR1_SPB0IO	0x02
#define SCSPTR1_SPB0DT	0x01
#define SDA_OEN		SCSPTR1_SPB1IO
#define SDA		SCSPTR1_SPB1DT
#define SCL_OEN		SCSPTR1_SPB0IO
#define SCL		SCSPTR1_SPB0DT
#define RS5C313_CE	0xB0000003
#define RS5C313_CE_RTCCE	0x02
unsigned char scsptr1_data;
#define RS5C313_CEENABLE    __raw_writeb(RS5C313_CE_RTCCE, RS5C313_CE);
#define RS5C313_CEDISABLE   __raw_writeb(0x00, RS5C313_CE)
#define RS5C313_MISCOP      __raw_writeb(0x02, 0xB0000008)
static void rs5c313_init_port(void)
static void rs5c313_write_data(unsigned char data)
static unsigned char rs5c313_read_data(void)
#define RS5C313_ADDR_SEC	0x00
#define RS5C313_ADDR_SEC10	0x01
#define RS5C313_ADDR_MIN	0x02
#define RS5C313_ADDR_MIN10	0x03
#define RS5C313_ADDR_HOUR	0x04
#define RS5C313_ADDR_HOUR10	0x05
#define RS5C313_ADDR_WEEK	0x06
#define RS5C313_ADDR_INTINTVREG	0x07
#define RS5C313_ADDR_DAY	0x08
#define RS5C313_ADDR_DAY10	0x09
#define RS5C313_ADDR_MON	0x0A
#define RS5C313_ADDR_MON10	0x0B
#define RS5C313_ADDR_YEAR	0x0C
#define RS5C313_ADDR_YEAR10	0x0D
#define RS5C313_ADDR_CNTREG	0x0E
#define RS5C313_ADDR_TESTREG	0x0F
#define RS5C313_CNTREG_ADJ_BSY	0x01
#define RS5C313_CNTREG_WTEN_XSTP	0x02
#define RS5C313_CNTREG_12_24	0x04
#define RS5C313_CNTREG_CTFG	0x08
#define RS5C313_TESTREG_TEST	0x01
#define RS5C313_CNTBIT_READ	0x40
#define RS5C313_CNTBIT_AD	0x20
#define RS5C313_CNTBIT_DT	0x10
static unsigned char rs5c313_read_reg(unsigned char addr)
static void rs5c313_write_reg(unsigned char addr, unsigned char data)
static inline unsigned char rs5c313_read_cntreg(void)
static inline void rs5c313_write_cntreg(unsigned char data)
static inline void rs5c313_write_intintvreg(unsigned char data)
static int rs5c313_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int rs5c313_rtc_set_time(struct device *dev, struct rtc_time *tm)
static void rs5c313_check_xstp_bit(void)
static const struct rtc_class_ops rs5c313_rtc_ops = ;
static int rs5c313_rtc_probe(struct platform_device *pdev)
static int __devexit rs5c313_rtc_remove(struct platform_device *pdev)
static struct platform_driver rs5c313_rtc_platform_driver = ;
static int __init rs5c313_rtc_init(void)
static void __exit rs5c313_rtc_exit(void)
module_init(rs5c313_rtc_init);
module_exit(rs5c313_rtc_exit);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("kogiidena , Nobuhiro Iwamatsu <iwamatsu@nigauri.org>");
MODULE_DESCRIPTION("Ricoh RS5C313 RTC device driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
