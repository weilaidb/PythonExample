#define _LINUX_CLOCKCHIPS_H
struct clock_event_device;
enum clock_event_mode ;
enum clock_event_nofitiers ;
#define CLOCK_EVT_FEAT_PERIODIC		0x000001
#define CLOCK_EVT_FEAT_ONESHOT		0x000002
#define CLOCK_EVT_FEAT_C3STOP		0x000004
#define CLOCK_EVT_FEAT_DUMMY		0x000008
struct clock_event_device  ____cacheline_aligned;
static inline unsigned long div_sc(unsigned long ticks, unsigned long nsec,
int shift)
extern u64 clockevent_delta2ns(unsigned long latch,
struct clock_event_device *evt);
extern void clockevents_register_device(struct clock_event_device *dev);
extern void clockevents_config_and_register(struct clock_event_device *dev,
u32 freq, unsigned long min_delta,
unsigned long max_delta);
extern int clockevents_update_freq(struct clock_event_device *ce, u32 freq);
extern void clockevents_exchange_device(struct clock_event_device *old,
struct clock_event_device *new);
extern void clockevents_set_mode(struct clock_event_device *dev,
enum clock_event_mode mode);
extern int clockevents_register_notifier(struct notifier_block *nb);
extern int clockevents_program_event(struct clock_event_device *dev,
ktime_t expires, ktime_t now);
extern void clockevents_handle_noop(struct clock_event_device *dev);
static inline void
clockevents_calc_mult_shift(struct clock_event_device *ce, u32 freq, u32 minsec)
extern void clockevents_notify(unsigned long reason, void *arg);
# define clockevents_notify(reason, arg) do  while (0)
#define clockevents_notify(reason, arg) do  while (0)
