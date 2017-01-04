#define REG_RTC_INIR		0x00
#define REG_RTC_AER		0x04
#define REG_RTC_FCR		0x08
#define REG_RTC_TLR		0x0C
#define REG_RTC_CLR		0x10
#define REG_RTC_TSSR		0x14
#define REG_RTC_DWR		0x18
#define REG_RTC_TAR		0x1C
#define REG_RTC_CAR		0x20
#define REG_RTC_LIR		0x24
#define REG_RTC_RIER		0x28
#define REG_RTC_RIIR		0x2C
#define REG_RTC_TTR		0x30
#define RTCSET			0x01
#define AERRWENB		0x10000
#define INIRRESET		0xa5eb1357
#define AERPOWERON		0xA965
#define AERPOWEROFF		0x0000
#define LEAPYEAR		0x0001
#define TICKENB			0x80
#define TICKINTENB		0x0002
#define ALARMINTENB		0x0001
#define MODE24			0x0001
struct nuc900_rtc ;
struct nuc900_bcd_time ;
static irqreturn_t nuc900_rtc_interrupt(int irq, void *_rtc)
static int *check_rtc_access_enable(struct nuc900_rtc *nuc900_rtc)
static int nuc900_rtc_bcd2bin(unsigned int timereg,
unsigned int calreg, struct rtc_time *tm)
static void nuc900_rtc_bin2bcd(struct device *dev, struct rtc_time *settm,
struct nuc900_bcd_time *gettm)
static int nuc900_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int nuc900_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int nuc900_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int nuc900_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int nuc900_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static struct rtc_class_ops nuc900_rtc_ops = ;
static int __devinit nuc900_rtc_probe(struct platform_device *pdev)
static int __devexit nuc900_rtc_remove(struct platform_device *pdev)
static struct platform_driver nuc900_rtc_driver = ;
static int __init nuc900_rtc_init(void)
static void __exit nuc900_rtc_exit(void)
module_init(nuc900_rtc_init);
module_exit(nuc900_rtc_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("nuc910/nuc920 RTC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-rtc");
