static volatile int opened, tmr_running;
static volatile time_t tmr_offs, tmr_ctr;
static volatile unsigned long ticks_offs;
static volatile int curr_tempo, curr_timebase;
static volatile unsigned long curr_ticks;
static volatile unsigned long next_event_time;
static unsigned long prev_event_time;
static void     poll_def_tmr(unsigned long dummy);
static DEFINE_SPINLOCK(lock);
static DEFINE_TIMER(def_tmr, poll_def_tmr, 0, 0);
static unsigned long
tmr2ticks(int tmr_value)
static void
poll_def_tmr(unsigned long dummy)
static void
tmr_reset(void)
static int
def_tmr_open(int dev, int mode)
static void
def_tmr_close(int dev)
static int
def_tmr_event(int dev, unsigned char *event)
static unsigned long
def_tmr_get_time(int dev)
static int def_tmr_ioctl(int dev, unsigned int cmd, void __user *arg)
static void
def_tmr_arm(int dev, long time)
struct sound_timer_operations default_sound_timer =
;
