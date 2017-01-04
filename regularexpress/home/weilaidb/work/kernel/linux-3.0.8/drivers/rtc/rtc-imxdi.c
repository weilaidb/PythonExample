#define DTCMR     0x00
#define DTCLR     0x04
#define DCAMR     0x08
#define DCALR     0x0c
#define DCAMR_UNSET  0xFFFFFFFF
#define DCR       0x10
#define DCR_TCE   (1 << 3)
#define DSR       0x14
#define DSR_WBF   (1 << 10)
#define DSR_WNF   (1 << 9)
#define DSR_WCF   (1 << 8)
#define DSR_WEF   (1 << 7)
#define DSR_CAF   (1 << 4)
#define DSR_NVF   (1 << 1)
#define DSR_SVF   (1 << 0)
#define DIER      0x18
#define DIER_WNIE (1 << 9)
#define DIER_WCIE (1 << 8)
#define DIER_WEIE (1 << 7)
#define DIER_CAIE (1 << 4)
struct imxdi_dev ;
static void di_int_enable(struct imxdi_dev *imxdi, u32 intr)
static void di_int_disable(struct imxdi_dev *imxdi, u32 intr)
static void clear_write_error(struct imxdi_dev *imxdi)
static int di_write_wait(struct imxdi_dev *imxdi, u32 val, int reg)
static int dryice_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int dryice_rtc_set_mmss(struct device *dev, unsigned long secs)
static int dryice_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static int dryice_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int dryice_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static struct rtc_class_ops dryice_rtc_ops = ;
static irqreturn_t dryice_norm_irq(int irq, void *dev_id)
static void dryice_work(struct work_struct *work)
static int dryice_rtc_probe(struct platform_device *pdev)
static int __devexit dryice_rtc_remove(struct platform_device *pdev)
static struct platform_driver dryice_rtc_driver = ;
static int __init dryice_rtc_init(void)
static void __exit dryice_rtc_exit(void)
module_init(dryice_rtc_init);
module_exit(dryice_rtc_exit);
MODULE_AUTHOR("Freescale Semiconductor, Inc.");
MODULE_AUTHOR("Baruch Siach <baruch@tkos.co.il>");
MODULE_DESCRIPTION("IMX DryIce Realtime Clock Driver (RTC)");
MODULE_LICENSE("GPL");
