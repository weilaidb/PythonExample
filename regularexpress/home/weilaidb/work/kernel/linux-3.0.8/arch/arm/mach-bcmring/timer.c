#define PROF_TIMER 1
timer_tick_rate_t timer_get_tick_rate(void)
timer_tick_count_t timer_get_tick_count(void)
timer_msec_t timer_ticks_to_msec(timer_tick_count_t ticks)
timer_msec_t timer_get_msec(void)
EXPORT_SYMBOL(timer_get_tick_count);
EXPORT_SYMBOL(timer_ticks_to_msec);
EXPORT_SYMBOL(timer_get_tick_rate);
EXPORT_SYMBOL(timer_get_msec);
