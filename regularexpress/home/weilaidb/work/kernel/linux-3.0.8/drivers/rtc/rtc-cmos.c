struct cmos_rtc ;
#define is_valid_irq(n)		((n) > 0)
static const char driver_name[] = "rtc_cmos";
#define	RTC_IRQMASK	(RTC_PF | RTC_AF | RTC_UF)
static inline int is_intr(u8 rtc_intr)
static inline int is_hpet_enabled(void)
static inline int hpet_mask_rtc_irq_bit(unsigned long mask)
static inline int hpet_set_rtc_irq_bit(unsigned long mask)
static inline int
hpet_set_alarm_time(unsigned char hrs, unsigned char min, unsigned char sec)
static inline int hpet_set_periodic_freq(unsigned long freq)
static inline int hpet_rtc_dropped_irq(void)
static inline int hpet_rtc_timer_init(void)
extern irq_handler_t hpet_rtc_interrupt;
static inline int hpet_register_irq_handler(irq_handler_t handler)
static inline int hpet_unregister_irq_handler(irq_handler_t handler)
#define can_bank2	true
static inline unsigned char cmos_read_bank2(unsigned char addr)
static inline void cmos_write_bank2(unsigned char val, unsigned char addr)
#define can_bank2	false
static inline unsigned char cmos_read_bank2(unsigned char addr)
static inline void cmos_write_bank2(unsigned char val, unsigned char addr)
static int cmos_read_time(struct device *dev, struct rtc_time *t)
static int cmos_set_time(struct device *dev, struct rtc_time *t)
static int cmos_read_alarm(struct device *dev, struct rtc_wkalrm *t)
static void cmos_checkintr(struct cmos_rtc *cmos, unsigned char rtc_control)
static void cmos_irq_enable(struct cmos_rtc *cmos, unsigned char mask)
static void cmos_irq_disable(struct cmos_rtc *cmos, unsigned char mask)
static int cmos_set_alarm(struct device *dev, struct rtc_wkalrm *t)
static int cmos_alarm_irq_enable(struct device *dev, unsigned int enabled)
#if defined(CONFIG_RTC_INTF_PROC) || defined(CONFIG_RTC_INTF_PROC_MODULE)
static int cmos_procfs(struct device *dev, struct seq_file *seq)
#define	cmos_procfs	NULL
static const struct rtc_class_ops cmos_rtc_ops = ;
#define NVRAM_OFFSET	(RTC_REG_D + 1)
static ssize_t
cmos_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t
cmos_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute nvram = ;
static struct cmos_rtc	cmos_rtc;
static irqreturn_t cmos_interrupt(int irq, void *p)
#define	INITSECTION
#define	INITSECTION	__init
static int INITSECTION
cmos_do_probe(struct device *dev, struct resource *ports, int rtc_irq)
static void cmos_do_shutdown(void)
static void __exit cmos_do_remove(struct device *dev)
static int cmos_suspend(struct device *dev)
static inline int cmos_poweroff(struct device *dev)
static int cmos_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(cmos_pm_ops, cmos_suspend, cmos_resume);
static inline int cmos_poweroff(struct device *dev)
static u32 rtc_handler(void *context)
static inline void rtc_wake_setup(void)
static void rtc_wake_on(struct device *dev)
static void rtc_wake_off(struct device *dev)
static struct cmos_rtc_board_info acpi_rtc_info;
static void __devinit
cmos_wake_setup(struct device *dev)
static void __devinit
cmos_wake_setup(struct device *dev)
static int __devinit
cmos_pnp_probe(struct pnp_dev *pnp, const struct pnp_device_id *id)
static void __exit cmos_pnp_remove(struct pnp_dev *pnp)
static int cmos_pnp_suspend(struct pnp_dev *pnp, pm_message_t mesg)
static int cmos_pnp_resume(struct pnp_dev *pnp)
#define	cmos_pnp_suspend	NULL
#define	cmos_pnp_resume		NULL
static void cmos_pnp_shutdown(struct pnp_dev *pnp)
static const struct pnp_device_id rtc_ids[] = ;
MODULE_DEVICE_TABLE(pnp, rtc_ids);
static struct pnp_driver cmos_pnp_driver = ;
static const struct of_device_id of_cmos_match[] = ;
MODULE_DEVICE_TABLE(of, of_cmos_match);
static __init void cmos_of_init(struct platform_device *pdev)
static inline void cmos_of_init(struct platform_device *pdev)
#define of_cmos_match NULL
static int __init cmos_platform_probe(struct platform_device *pdev)
static int __exit cmos_platform_remove(struct platform_device *pdev)
static void cmos_platform_shutdown(struct platform_device *pdev)
MODULE_ALIAS("platform:rtc_cmos");
static struct platform_driver cmos_platform_driver = ;
static bool pnp_driver_registered;
static bool platform_driver_registered;
static int __init cmos_init(void)
module_init(cmos_init);
static void __exit cmos_exit(void)
module_exit(cmos_exit);
MODULE_AUTHOR("David Brownell");
MODULE_DESCRIPTION("Driver for PC-style 'CMOS' RTCs");
MODULE_LICENSE("GPL");
