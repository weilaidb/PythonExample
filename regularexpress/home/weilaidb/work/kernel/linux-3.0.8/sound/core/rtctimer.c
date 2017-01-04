#if defined(CONFIG_RTC) || defined(CONFIG_RTC_MODULE)
#define RTC_FREQ	1024
#define NANO_SEC	1000000000L
static int rtctimer_open(struct snd_timer *t);
static int rtctimer_close(struct snd_timer *t);
static int rtctimer_start(struct snd_timer *t);
static int rtctimer_stop(struct snd_timer *t);
static struct snd_timer_hardware rtc_hw = ;
static int rtctimer_freq = RTC_FREQ;
static struct snd_timer *rtctimer;
static struct tasklet_struct rtc_tasklet;
static rtc_task_t rtc_task;
static int
rtctimer_open(struct snd_timer *t)
static int
rtctimer_close(struct snd_timer *t)
static int
rtctimer_start(struct snd_timer *timer)
static int
rtctimer_stop(struct snd_timer *timer)
static void rtctimer_tasklet(unsigned long data)
static void rtctimer_interrupt(void *private_data)
static int __init rtctimer_init(void)
static void __exit rtctimer_exit(void)
module_init(rtctimer_init)
module_exit(rtctimer_exit)
module_param(rtctimer_freq, int, 0444);
MODULE_PARM_DESC(rtctimer_freq, "timer frequency in Hz");
MODULE_LICENSE("GPL");
MODULE_ALIAS("snd-timer-" __stringify(SNDRV_TIMER_GLOBAL_RTC));
