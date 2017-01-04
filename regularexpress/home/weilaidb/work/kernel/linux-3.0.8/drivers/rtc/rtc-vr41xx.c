MODULE_AUTHOR("Yoichi Yuasa <yuasa@linux-mips.org>");
MODULE_DESCRIPTION("NEC VR4100 series RTC driver");
MODULE_LICENSE("GPL v2");
#define ETIMELREG		0x00
#define ETIMEMREG		0x02
#define ETIMEHREG		0x04
#define ECMPLREG		0x08
#define ECMPMREG		0x0a
#define ECMPHREG		0x0c
#define RTCL1LREG		0x10
#define RTCL1HREG		0x12
#define RTCL1CNTLREG		0x14
#define RTCL1CNTHREG		0x16
#define RTCL2LREG		0x18
#define RTCL2HREG		0x1a
#define RTCL2CNTLREG		0x1c
#define RTCL2CNTHREG		0x1e
#define TCLKLREG		0x00
#define TCLKHREG		0x02
#define TCLKCNTLREG		0x04
#define TCLKCNTHREG		0x06
#define RTCINTREG		0x1e
#define TCLOCK_INT		0x08
#define RTCLONG2_INT		0x04
#define RTCLONG1_INT		0x02
#define ELAPSEDTIME_INT	0x01
#define RTC_FREQUENCY		32768
#define MAX_PERIODIC_RATE	6553
static void __iomem *rtc1_base;
static void __iomem *rtc2_base;
#define rtc1_read(offset)		readw(rtc1_base + (offset))
#define rtc1_write(offset, value)	writew((value), rtc1_base + (offset))
#define rtc2_read(offset)		readw(rtc2_base + (offset))
#define rtc2_write(offset, value)	writew((value), rtc2_base + (offset))
static unsigned long epoch = 1970;
static DEFINE_SPINLOCK(rtc_lock);
static char rtc_name[] = "RTC";
static unsigned long periodic_count;
static unsigned int alarm_enabled;
static int aie_irq;
static int pie_irq;
static inline unsigned long read_elapsed_second(void)
static inline void write_elapsed_second(unsigned long sec)
static void vr41xx_rtc_release(struct device *dev)
static int vr41xx_rtc_read_time(struct device *dev, struct rtc_time *time)
static int vr41xx_rtc_set_time(struct device *dev, struct rtc_time *time)
static int vr41xx_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *wkalrm)
static int vr41xx_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *wkalrm)
static int vr41xx_rtc_ioctl(struct device *dev, unsigned int cmd, unsigned long arg)
static int vr41xx_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static irqreturn_t elapsedtime_interrupt(int irq, void *dev_id)
static irqreturn_t rtclong1_interrupt(int irq, void *dev_id)
static const struct rtc_class_ops vr41xx_rtc_ops = ;
static int __devinit rtc_probe(struct platform_device *pdev)
static int __devexit rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:RTC");
static struct platform_driver rtc_platform_driver = ;
static int __init vr41xx_rtc_init(void)
static void __exit vr41xx_rtc_exit(void)
module_init(vr41xx_rtc_init);
module_exit(vr41xx_rtc_exit);
