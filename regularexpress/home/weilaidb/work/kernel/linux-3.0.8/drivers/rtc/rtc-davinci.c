#define DAVINCI_PRTCIF_PID		0x00
#define PRTCIF_CTLR			0x04
#define PRTCIF_LDATA			0x08
#define PRTCIF_UDATA			0x0C
#define PRTCIF_INTEN			0x10
#define PRTCIF_INTFLG			0x14
#define PRTCIF_CTLR_BUSY		BIT(31)
#define PRTCIF_CTLR_SIZE		BIT(25)
#define PRTCIF_CTLR_DIR			BIT(24)
#define PRTCIF_CTLR_BENU_MSB		BIT(23)
#define PRTCIF_CTLR_BENU_3RD_BYTE	BIT(22)
#define PRTCIF_CTLR_BENU_2ND_BYTE	BIT(21)
#define PRTCIF_CTLR_BENU_LSB		BIT(20)
#define PRTCIF_CTLR_BENU_MASK		(0x00F00000)
#define PRTCIF_CTLR_BENL_MSB		BIT(19)
#define PRTCIF_CTLR_BENL_3RD_BYTE	BIT(18)
#define PRTCIF_CTLR_BENL_2ND_BYTE	BIT(17)
#define PRTCIF_CTLR_BENL_LSB		BIT(16)
#define PRTCIF_CTLR_BENL_MASK		(0x000F0000)
#define PRTCIF_INTEN_RTCSS		BIT(1)
#define PRTCIF_INTEN_RTCIF		BIT(0)
#define PRTCIF_INTEN_MASK		(PRTCIF_INTEN_RTCSS \
| PRTCIF_INTEN_RTCIF)
#define PRTCIF_INTFLG_RTCSS		BIT(1)
#define PRTCIF_INTFLG_RTCIF		BIT(0)
#define PRTCIF_INTFLG_MASK		(PRTCIF_INTFLG_RTCSS \
| PRTCIF_INTFLG_RTCIF)
#define PRTCSS_RTC_INTC_EXTENA1		(0x0C)
#define PRTCSS_RTC_CTRL			(0x10)
#define PRTCSS_RTC_WDT			(0x11)
#define PRTCSS_RTC_TMR0			(0x12)
#define PRTCSS_RTC_TMR1			(0x13)
#define PRTCSS_RTC_CCTRL		(0x14)
#define PRTCSS_RTC_SEC			(0x15)
#define PRTCSS_RTC_MIN			(0x16)
#define PRTCSS_RTC_HOUR			(0x17)
#define PRTCSS_RTC_DAY0			(0x18)
#define PRTCSS_RTC_DAY1			(0x19)
#define PRTCSS_RTC_AMIN			(0x1A)
#define PRTCSS_RTC_AHOUR		(0x1B)
#define PRTCSS_RTC_ADAY0		(0x1C)
#define PRTCSS_RTC_ADAY1		(0x1D)
#define PRTCSS_RTC_CLKC_CNT		(0x20)
#define PRTCSS_RTC_INTC_EXTENA1_MASK	(0x07)
#define PRTCSS_RTC_CTRL_WDTBUS		BIT(7)
#define PRTCSS_RTC_CTRL_WEN		BIT(6)
#define PRTCSS_RTC_CTRL_WDRT		BIT(5)
#define PRTCSS_RTC_CTRL_WDTFLG		BIT(4)
#define PRTCSS_RTC_CTRL_TE		BIT(3)
#define PRTCSS_RTC_CTRL_TIEN		BIT(2)
#define PRTCSS_RTC_CTRL_TMRFLG		BIT(1)
#define PRTCSS_RTC_CTRL_TMMD		BIT(0)
#define PRTCSS_RTC_CCTRL_CALBUSY	BIT(7)
#define PRTCSS_RTC_CCTRL_DAEN		BIT(5)
#define PRTCSS_RTC_CCTRL_HAEN		BIT(4)
#define PRTCSS_RTC_CCTRL_MAEN		BIT(3)
#define PRTCSS_RTC_CCTRL_ALMFLG		BIT(2)
#define PRTCSS_RTC_CCTRL_AIEN		BIT(1)
#define PRTCSS_RTC_CCTRL_CAEN		BIT(0)
static DEFINE_SPINLOCK(davinci_rtc_lock);
struct davinci_rtc ;
static inline void rtcif_write(struct davinci_rtc *davinci_rtc,
u32 val, u32 addr)
static inline u32 rtcif_read(struct davinci_rtc *davinci_rtc, u32 addr)
static inline void rtcif_wait(struct davinci_rtc *davinci_rtc)
static inline void rtcss_write(struct davinci_rtc *davinci_rtc,
unsigned long val, u8 addr)
static inline u8 rtcss_read(struct davinci_rtc *davinci_rtc, u8 addr)
static inline void davinci_rtcss_calendar_wait(struct davinci_rtc *davinci_rtc)
static irqreturn_t davinci_rtc_interrupt(int irq, void *class_dev)
static int
davinci_rtc_ioctl(struct device *dev, unsigned int cmd, unsigned long arg)
static int convertfromdays(u16 days, struct rtc_time *tm)
static int convert2days(u16 *days, struct rtc_time *tm)
static int davinci_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int davinci_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int davinci_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static int davinci_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int davinci_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static struct rtc_class_ops davinci_rtc_ops = ;
static int __init davinci_rtc_probe(struct platform_device *pdev)
static int __devexit davinci_rtc_remove(struct platform_device *pdev)
static struct platform_driver davinci_rtc_driver = ;
static int __init rtc_init(void)
module_init(rtc_init);
static void __exit rtc_exit(void)
module_exit(rtc_exit);
MODULE_AUTHOR("Miguel Aguilar <miguel.aguilar@ridgerun.com>");
MODULE_DESCRIPTION("Texas Instruments DaVinci PRTC Driver");
MODULE_LICENSE("GPL");
