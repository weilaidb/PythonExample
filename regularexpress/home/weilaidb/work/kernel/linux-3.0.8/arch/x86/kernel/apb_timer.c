#define APBT_MASK			CLOCKSOURCE_MASK(32)
#define APBT_SHIFT			22
#define APBT_CLOCKEVENT_RATING		110
#define APBT_CLOCKSOURCE_RATING		250
#define APBT_MIN_DELTA_USEC		200
#define EVT_TO_APBT_DEV(evt) container_of(evt, struct apbt_dev, evt)
#define APBT_CLOCKEVENT0_NUM   (0)
#define APBT_CLOCKEVENT1_NUM   (1)
#define APBT_CLOCKSOURCE_NUM   (2)
static unsigned long apbt_address;
static int apb_timer_block_enabled;
static void __iomem *apbt_virt_address;
static int phy_cs_timer_id;
static uint64_t apbt_freq;
static void apbt_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt);
static int apbt_next_event(unsigned long delta,
struct clock_event_device *evt);
static cycle_t apbt_read_clocksource(struct clocksource *cs);
static void apbt_restart_clocksource(struct clocksource *cs);
struct apbt_dev ;
static DEFINE_PER_CPU(struct apbt_dev, cpu_apbt_dev);
static unsigned int apbt_num_timers_used;
static struct apbt_dev *apbt_devs;
static	inline unsigned long apbt_readl_reg(unsigned long a)
static inline void apbt_writel_reg(unsigned long d, unsigned long a)
static inline unsigned long apbt_readl(int n, unsigned long a)
static inline void apbt_writel(int n, unsigned long d, unsigned long a)
static inline void apbt_set_mapping(void)
static inline void apbt_clear_mapping(void)
static inline int is_apbt_capable(void)
static struct clocksource clocksource_apbt = ;
static struct clock_event_device apbt_clockevent = ;
static void apbt_start_counter(int n)
static irqreturn_t apbt_interrupt_handler(int irq, void *data)
static void apbt_restart_clocksource(struct clocksource *cs)
static void apbt_enable_int(int n)
static void apbt_disable_int(int n)
static int __init apbt_clockevent_register(void)
static void apbt_setup_irq(struct apbt_dev *adev)
void apbt_setup_secondary_clock(void)
static int apbt_cpuhp_notify(struct notifier_block *n,
unsigned long action, void *hcpu)
static __init int apbt_late_init(void)
fs_initcall(apbt_late_init);
void apbt_setup_secondary_clock(void)
static void apbt_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int apbt_next_event(unsigned long delta,
struct clock_event_device *evt)
static cycle_t apbt_read_clocksource(struct clocksource *cs)
static int apbt_clocksource_register(void)
void __init apbt_time_init(void)
static inline void apbt_disable(int n)
unsigned long apbt_quick_calibrate()
