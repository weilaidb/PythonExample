#define TIMER_BASE	BARRIER_BASE_ADDR
static unsigned int timer_baseaddr;
#define TIMER_BASE	timer_baseaddr
static unsigned int freq_div_hz;
static unsigned int timer_clock_freq;
#define TCSR0	(0x00)
#define TLR0	(0x04)
#define TCR0	(0x08)
#define TCSR1	(0x10)
#define TLR1	(0x14)
#define TCR1	(0x18)
#define TCSR_MDT	(1<<0)
#define TCSR_UDT	(1<<1)
#define TCSR_GENT	(1<<2)
#define TCSR_CAPT	(1<<3)
#define TCSR_ARHT	(1<<4)
#define TCSR_LOAD	(1<<5)
#define TCSR_ENIT	(1<<6)
#define TCSR_ENT	(1<<7)
#define TCSR_TINT	(1<<8)
#define TCSR_PWMA	(1<<9)
#define TCSR_ENALL	(1<<10)
static inline void microblaze_timer0_stop(void)
static inline void microblaze_timer0_start_periodic(unsigned long load_val)
static inline void microblaze_timer0_start_oneshot(unsigned long load_val)
static int microblaze_timer_set_next_event(unsigned long delta,
struct clock_event_device *dev)
static void microblaze_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device clockevent_microblaze_timer = ;
static inline void timer_ack(void)
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction timer_irqaction = ;
static __init void microblaze_clockevent_init(void)
static cycle_t microblaze_read(struct clocksource *cs)
static struct timecounter microblaze_tc = ;
static cycle_t microblaze_cc_read(const struct cyclecounter *cc)
static struct cyclecounter microblaze_cc = ;
static int __init init_microblaze_timecounter(void)
static struct clocksource clocksource_microblaze = ;
static int __init microblaze_clocksource_init(void)
static int timer_initialized;
void __init time_init(void)
unsigned long long notrace sched_clock(void)
