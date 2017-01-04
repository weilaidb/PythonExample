unsigned key_gc_delay = 5 * 60;
static void key_gc_timer_func(unsigned long);
static void key_garbage_collector(struct work_struct *);
static DEFINE_TIMER(key_gc_timer, key_gc_timer_func, 0, 0);
static DECLARE_WORK(key_gc_work, key_garbage_collector);
static key_serial_t key_gc_cursor;
static bool key_gc_again;
static unsigned long key_gc_executing;
static time_t key_gc_next_run = LONG_MAX;
static time_t key_gc_new_timer;
void key_schedule_gc(time_t gc_at)
static void key_gc_timer_func(unsigned long data)
static bool key_gc_keyring(struct key *keyring, time_t limit)
__releases(key_serial_lock)
static void key_garbage_collector(struct work_struct *work)
