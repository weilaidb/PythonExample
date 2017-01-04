#define DRV_NAME	"rtc-ds1302"
#define DRV_VERSION	"0.1.1"
#define	RTC_CMD_READ	0x81
#define	RTC_CMD_WRITE	0x80
#define RTC_ADDR_RAM0	0x20
#define RTC_ADDR_TCR	0x08
#define	RTC_ADDR_YEAR	0x06
#define	RTC_ADDR_DAY	0x05
#define	RTC_ADDR_MON	0x04
#define	RTC_ADDR_DATE	0x03
#define	RTC_ADDR_HOUR	0x02
#define	RTC_ADDR_MIN	0x01
#define	RTC_ADDR_SEC	0x00
#define	RTC_RESET	0x1000
#define	RTC_IODATA	0x0800
#define	RTC_SCLK	0x0400
#define set_dp(x)	SECUREEDGE_WRITE_IOPORT(x, 0x1c00)
#define get_dp()	SECUREEDGE_READ_IOPORT()
#define ds1302_set_tx()
#define ds1302_set_rx()
static inline int ds1302_hw_init(void)
static inline void ds1302_reset(void)
static inline void ds1302_clock(void)
static inline void ds1302_start(void)
static inline void ds1302_stop(void)
static inline void ds1302_txbit(int bit)
static inline int ds1302_rxbit(void)
#error "Add support for your platform"
static void ds1302_sendbits(unsigned int val)
static unsigned int ds1302_recvbits(void)
static unsigned int ds1302_readbyte(unsigned int addr)
static void ds1302_writebyte(unsigned int addr, unsigned int val)
static int ds1302_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int ds1302_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int ds1302_rtc_ioctl(struct device *dev, unsigned int cmd,
unsigned long arg)
static struct rtc_class_ops ds1302_rtc_ops = ;
static int __init ds1302_rtc_probe(struct platform_device *pdev)
static int __devexit ds1302_rtc_remove(struct platform_device *pdev)
static struct platform_driver ds1302_platform_driver = ;
static int __init ds1302_rtc_init(void)
static void __exit ds1302_rtc_exit(void)
module_init(ds1302_rtc_init);
module_exit(ds1302_rtc_exit);
MODULE_DESCRIPTION("Dallas DS1302 RTC driver");
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("Paul Mundt, David McCullough");
MODULE_LICENSE("GPL v2");
