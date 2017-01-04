#define MIN_DELTA_LIMIT		(NSEC_PER_SEC / HZ)
static int tick_increase_min_delta(struct clock_event_device *dev)
int tick_dev_program_event(struct clock_event_device *dev, ktime_t expires,
int force)
int tick_program_event(ktime_t expires, int force)
void tick_resume_oneshot(void)
void tick_setup_oneshot(struct clock_event_device *newdev,
void (*handler)(struct clock_event_device *),
ktime_t next_event)
int tick_switch_to_oneshot(void (*handler)(struct clock_event_device *))
int tick_oneshot_mode_active(void)
int tick_init_highres(void)
