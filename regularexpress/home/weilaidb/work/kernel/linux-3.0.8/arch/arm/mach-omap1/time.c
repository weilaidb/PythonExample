#define OMAP_MPU_TIMER_BASE		OMAP_MPU_TIMER1_BASE
#define OMAP_MPU_TIMER_OFFSET		0x100
typedef struct  omap_mpu_timer_regs_t;
#define omap_mpu_timer_base(n)							\
((omap_mpu_timer_regs_t __iomem *)OMAP1_IO_ADDRESS(OMAP_MPU_TIMER_BASE +	\
(n)*OMAP_MPU_TIMER_OFFSET))
static inline unsigned long notrace omap_mpu_timer_read(int nr)
static inline void omap_mpu_set_autoreset(int nr)
static inline void omap_mpu_remove_autoreset(int nr)
static inline void omap_mpu_timer_start(int nr, unsigned long load_val,
int autoreset)
static inline void omap_mpu_timer_stop(int nr)
static int omap_mpu_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void omap_mpu_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device clockevent_mpu_timer1 = ;
static irqreturn_t omap_mpu_timer1_interrupt(int irq, void *dev_id)
static struct irqaction omap_mpu_timer1_irq = ;
static __init void omap_init_mpu_timer(unsigned long rate)
static DEFINE_CLOCK_DATA(cd);
static inline unsigned long long notrace _omap_mpu_sched_clock(void)
unsigned long long notrace sched_clock(void)
static unsigned long long notrace omap_mpu_sched_clock(void)
static void notrace mpu_update_sched_clock(void)
static void __init omap_init_clocksource(unsigned long rate)
static void __init omap_mpu_timer_init(void)
static inline void omap_mpu_timer_init(void)
#if defined(CONFIG_OMAP_MPU_TIMER) && defined(CONFIG_OMAP_32K_TIMER)
static unsigned long long (*preferred_sched_clock)(void);
unsigned long long notrace sched_clock(void)
static inline void preferred_sched_clock_init(bool use_32k_sched_clock)
static inline void preferred_sched_clock_init(bool use_32k_sched_clcok)
static inline int omap_32k_timer_usable(void)
static void __init omap_timer_init(void)
struct sys_timer omap_timer = ;
