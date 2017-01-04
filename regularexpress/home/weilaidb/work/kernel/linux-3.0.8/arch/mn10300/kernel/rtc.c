DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
void read_persistent_clock(struct timespec *ts)
static int set_rtc_mmss(unsigned long nowtime)
int update_persistent_clock(struct timespec now)
void __init calibrate_clock(void)
