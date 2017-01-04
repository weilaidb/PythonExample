#if defined(CONFIG_TOUCHSCREEN_ADS7846) || \
defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static void *pdm360ng_gpio_base;
static int pdm360ng_get_pendown_state(void)
static struct ads7846_platform_data pdm360ng_ads7846_pdata = ;
static int __init pdm360ng_penirq_init(void)
static int pdm360ng_touchscreen_notifier_call(struct notifier_block *nb,
unsigned long event, void *__dev)
static struct notifier_block pdm360ng_touchscreen_nb = ;
static void __init pdm360ng_touchscreen_init(void)
static inline void __init pdm360ng_touchscreen_init(void)
void __init pdm360ng_init(void)
static int __init pdm360ng_probe(void)
define_machine(pdm360ng) ;
