static volatile int initialized, opened, tmr_running;
static volatile time_t tmr_offs, tmr_ctr;
static volatile unsigned long ticks_offs;
static volatile int curr_tempo, curr_timebase;
static volatile unsigned long curr_ticks;
static volatile unsigned long next_event_time;
static unsigned long prev_event_time;
static volatile unsigned long usecs_per_tmr;
static struct sound_lowlev_timer *tmr;
static DEFINE_SPINLOCK(lock);
static unsigned long tmr2ticks(int tmr_value)
void reprogram_timer(void)
void sound_timer_syncinterval(unsigned int new_usecs)
EXPORT_SYMBOL(sound_timer_syncinterval);
static void tmr_reset(void)
static int timer_open(int dev, int mode)
static void timer_close(int dev)
static int timer_event(int dev, unsigned char *event)
static unsigned long timer_get_time(int dev)
static int timer_ioctl(int dev, unsigned int cmd, void __user *arg)
static void timer_arm(int dev, long time)
static struct sound_timer_operations sound_timer =
;
void sound_timer_interrupt(void)
EXPORT_SYMBOL(sound_timer_interrupt);
void  sound_timer_init(struct sound_lowlev_timer *t, char *name)
EXPORT_SYMBOL(sound_timer_init);
