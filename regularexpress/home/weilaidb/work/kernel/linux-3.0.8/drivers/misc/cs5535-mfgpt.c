#define DRV_NAME "cs5535-mfgpt"
static int mfgpt_reset_timers;
module_param_named(mfgptfix, mfgpt_reset_timers, int, 0644);
MODULE_PARM_DESC(mfgptfix, "Reset the MFGPT timers during init; "
"required by some broken BIOSes (ie, TinyBIOS < 0.99).");
struct cs5535_mfgpt_timer ;
static struct cs5535_mfgpt_chip  cs5535_mfgpt_chip;
int cs5535_mfgpt_toggle_event(struct cs5535_mfgpt_timer *timer, int cmp,
int event, int enable)
EXPORT_SYMBOL_GPL(cs5535_mfgpt_toggle_event);
int cs5535_mfgpt_set_irq(struct cs5535_mfgpt_timer *timer, int cmp, int *irq,
int enable)
EXPORT_SYMBOL_GPL(cs5535_mfgpt_set_irq);
struct cs5535_mfgpt_timer *cs5535_mfgpt_alloc_timer(int timer_nr, int domain)
EXPORT_SYMBOL_GPL(cs5535_mfgpt_alloc_timer);
void cs5535_mfgpt_free_timer(struct cs5535_mfgpt_timer *timer)
EXPORT_SYMBOL_GPL(cs5535_mfgpt_free_timer);
uint16_t cs5535_mfgpt_read(struct cs5535_mfgpt_timer *timer, uint16_t reg)
EXPORT_SYMBOL_GPL(cs5535_mfgpt_read);
void cs5535_mfgpt_write(struct cs5535_mfgpt_timer *timer, uint16_t reg,
uint16_t value)
EXPORT_SYMBOL_GPL(cs5535_mfgpt_write);
static void __init reset_all_timers(void)
static int __init scan_timers(struct cs5535_mfgpt_chip *mfgpt)
static int __devinit cs5535_mfgpt_probe(struct platform_device *pdev)
static struct platform_driver cs5535_mfgpt_driver = ;
static int __init cs5535_mfgpt_init(void)
module_init(cs5535_mfgpt_init);
MODULE_AUTHOR("Andres Salomon <dilinger@queued.net>");
MODULE_DESCRIPTION("CS5535/CS5536 MFGPT timer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
