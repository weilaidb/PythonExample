static LIST_HEAD(clockevent_devices);
static LIST_HEAD(clockevents_released);
static RAW_NOTIFIER_HEAD(clockevents_chain);
static DEFINE_RAW_SPINLOCK(clockevents_lock);
u64 clockevent_delta2ns(unsigned long latch, struct clock_event_device *evt)
EXPORT_SYMBOL_GPL(clockevent_delta2ns);
void clockevents_set_mode(struct clock_event_device *dev,
enum clock_event_mode mode)
void clockevents_shutdown(struct clock_event_device *dev)
int clockevents_program_event(struct clock_event_device *dev, ktime_t expires,
ktime_t now)
int clockevents_register_notifier(struct notifier_block *nb)
static void clockevents_do_notify(unsigned long reason, void *dev)
static void clockevents_notify_released(void)
void clockevents_register_device(struct clock_event_device *dev)
EXPORT_SYMBOL_GPL(clockevents_register_device);
static void clockevents_config(struct clock_event_device *dev,
u32 freq)
void clockevents_config_and_register(struct clock_event_device *dev,
u32 freq, unsigned long min_delta,
unsigned long max_delta)
int clockevents_update_freq(struct clock_event_device *dev, u32 freq)
void clockevents_handle_noop(struct clock_event_device *dev)
void clockevents_exchange_device(struct clock_event_device *old,
struct clock_event_device *new)
void clockevents_notify(unsigned long reason, void *arg)
EXPORT_SYMBOL_GPL(clockevents_notify);
