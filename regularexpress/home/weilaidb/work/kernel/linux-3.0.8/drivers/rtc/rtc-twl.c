enum ;
static const u8 twl4030_rtc_reg_map[] = ;
static const u8 twl6030_rtc_reg_map[] = ;
#define BIT_RTC_CTRL_REG_STOP_RTC_M              0x01
#define BIT_RTC_CTRL_REG_ROUND_30S_M             0x02
#define BIT_RTC_CTRL_REG_AUTO_COMP_M             0x04
#define BIT_RTC_CTRL_REG_MODE_12_24_M            0x08
#define BIT_RTC_CTRL_REG_TEST_MODE_M             0x10
#define BIT_RTC_CTRL_REG_SET_32_COUNTER_M        0x20
#define BIT_RTC_CTRL_REG_GET_TIME_M              0x40
#define BIT_RTC_STATUS_REG_RUN_M                 0x02
#define BIT_RTC_STATUS_REG_1S_EVENT_M            0x04
#define BIT_RTC_STATUS_REG_1M_EVENT_M            0x08
#define BIT_RTC_STATUS_REG_1H_EVENT_M            0x10
#define BIT_RTC_STATUS_REG_1D_EVENT_M            0x20
#define BIT_RTC_STATUS_REG_ALARM_M               0x40
#define BIT_RTC_STATUS_REG_POWER_UP_M            0x80
#define BIT_RTC_INTERRUPTS_REG_EVERY_M           0x03
#define BIT_RTC_INTERRUPTS_REG_IT_TIMER_M        0x04
#define BIT_RTC_INTERRUPTS_REG_IT_ALARM_M        0x08
#define ALL_TIME_REGS		6
static u8  *rtc_reg_map;
static int twl_rtc_read_u8(u8 *data, u8 reg)
static int twl_rtc_write_u8(u8 data, u8 reg)
static unsigned char rtc_irq_bits;
static int set_rtc_irq_bit(unsigned char bit)
static int mask_rtc_irq_bit(unsigned char bit)
static int twl_rtc_alarm_irq_enable(struct device *dev, unsigned enabled)
static int twl_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int twl_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int twl_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int twl_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static irqreturn_t twl_rtc_interrupt(int irq, void *rtc)
static struct rtc_class_ops twl_rtc_ops = ;
static int __devinit twl_rtc_probe(struct platform_device *pdev)
static int __devexit twl_rtc_remove(struct platform_device *pdev)
static void twl_rtc_shutdown(struct platform_device *pdev)
static unsigned char irqstat;
static int twl_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int twl_rtc_resume(struct platform_device *pdev)
#define twl_rtc_suspend NULL
#define twl_rtc_resume  NULL
MODULE_ALIAS("platform:twl_rtc");
static struct platform_driver twl4030rtc_driver = ;
static int __init twl_rtc_init(void)
module_init(twl_rtc_init);
static void __exit twl_rtc_exit(void)
module_exit(twl_rtc_exit);
MODULE_AUTHOR("Texas Instruments, MontaVista Software");
MODULE_LICENSE("GPL");
