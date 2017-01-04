static void stmmac_timer_handler(void *data)
#define STMMAC_TIMER_MSG(timer, freq) \
printk(KERN_INFO "stmmac_timer: %s Timer ON (freq %dHz)\n", timer, freq);
#if defined(CONFIG_STMMAC_RTC_TIMER)
static struct rtc_device *stmmac_rtc;
static rtc_task_t stmmac_task;
static void stmmac_rtc_start(unsigned int new_freq)
static void stmmac_rtc_stop(void)
int stmmac_open_ext_timer(struct net_device *dev, struct stmmac_timer *tm)
int stmmac_close_ext_timer(void)
#elif defined(CONFIG_STMMAC_TMU_TIMER)
#define TMU_CHANNEL "tmu2_clk"
static struct clk *timer_clock;
static void stmmac_tmu_start(unsigned int new_freq)
static void stmmac_tmu_stop(void)
int stmmac_open_ext_timer(struct net_device *dev, struct stmmac_timer *tm)
int stmmac_close_ext_timer(void)
