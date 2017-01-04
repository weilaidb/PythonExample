#if defined(CONFIG_CYCLES_CLOCKSOURCE)
static notrace cycle_t bfin_read_cycles(struct clocksource *cs)
static struct clocksource bfin_cs_cycles = ;
static inline unsigned long long bfin_cs_cycles_sched_clock(void)
static int __init bfin_cs_cycles_init(void)
# define bfin_cs_cycles_init()
void __init setup_gptimer0(void)
static cycle_t bfin_read_gptimer0(struct clocksource *cs)
static struct clocksource bfin_cs_gptimer0 = ;
static inline unsigned long long bfin_cs_gptimer0_sched_clock(void)
static int __init bfin_cs_gptimer0_init(void)
# define bfin_cs_gptimer0_init()
#if defined(CONFIG_GPTMR0_CLOCKSOURCE) || defined(CONFIG_CYCLES_CLOCKSOURCE)
notrace unsigned long long sched_clock(void)
#if defined(CONFIG_TICKSOURCE_GPTMR0)
static int bfin_gptmr0_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void bfin_gptmr0_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static void bfin_gptmr0_ack(void)
static void __init bfin_gptmr0_init(void)
__attribute__((l1_text))
irqreturn_t bfin_gptmr0_interrupt(int irq, void *dev_id)
static struct irqaction gptmr0_irq = ;
static struct clock_event_device clockevent_gptmr0 = ;
static void __init bfin_gptmr0_clockevent_init(struct clock_event_device *evt)
#if defined(CONFIG_TICKSOURCE_CORETMR)
static DEFINE_PER_CPU(struct clock_event_device, coretmr_events);
static int bfin_coretmr_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void bfin_coretmr_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
void bfin_coretmr_init(void)
__attribute__((l1_text))
irqreturn_t bfin_coretmr_interrupt(int irq, void *dev_id)
static struct irqaction coretmr_irq = ;
void bfin_coretmr_clockevent_init(void)
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
