static struct clock_event_device clockevent_davinci;
static unsigned int davinci_clock_tick_rate;
enum ;
#define PID12			0x0
#define TIM12			0x10
#define TIM34			0x14
#define PRD12			0x18
#define PRD34			0x1c
#define TCR			0x20
#define TGCR			0x24
#define WDTCR			0x28
#define	CMP12_0			0x60
#define	CMP12_1			0x64
#define	CMP12_2			0x68
#define	CMP12_3			0x6c
#define	CMP12_4			0x70
#define	CMP12_5			0x74
#define	CMP12_6			0x78
#define	CMP12_7			0x7c
#define TCR_ENAMODE_DISABLE          0x0
#define TCR_ENAMODE_ONESHOT          0x1
#define TCR_ENAMODE_PERIODIC         0x2
#define TCR_ENAMODE_MASK             0x3
#define TGCR_TIMMODE_SHIFT           2
#define TGCR_TIMMODE_64BIT_GP        0x0
#define TGCR_TIMMODE_32BIT_UNCHAINED 0x1
#define TGCR_TIMMODE_64BIT_WDOG      0x2
#define TGCR_TIMMODE_32BIT_CHAINED   0x3
#define TGCR_TIM12RS_SHIFT           0
#define TGCR_TIM34RS_SHIFT           1
#define TGCR_RESET                   0x0
#define TGCR_UNRESET                 0x1
#define TGCR_RESET_MASK              0x3
#define WDTCR_WDEN_SHIFT             14
#define WDTCR_WDEN_DISABLE           0x0
#define WDTCR_WDEN_ENABLE            0x1
#define WDTCR_WDKEY_SHIFT            16
#define WDTCR_WDKEY_SEQ0             0xa5c6
#define WDTCR_WDKEY_SEQ1             0xda7e
struct timer_s ;
static struct timer_s timers[];
#define TIMER_OPTS_DISABLED		0x01
#define TIMER_OPTS_ONESHOT		0x02
#define TIMER_OPTS_PERIODIC		0x04
#define TIMER_OPTS_STATE_MASK		0x07
#define TIMER_OPTS_USE_COMPARE		0x80000000
#define USING_COMPARE(t)		((t)->opts & TIMER_OPTS_USE_COMPARE)
static char *id_to_name[] = ;
static int timer32_config(struct timer_s *t)
static inline u32 timer32_read(struct timer_s *t)
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static irqreturn_t freerun_interrupt(int irq, void *dev_id)
static struct timer_s timers[] = ;
static void __init timer_init(void)
static cycle_t read_cycles(struct clocksource *cs)
static cycle_t read_dummy(struct clocksource *cs)
static struct clocksource clocksource_davinci = ;
unsigned long long notrace sched_clock(void)
static int davinci_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void davinci_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device clockevent_davinci = ;
static void __init davinci_timer_init(void)
struct sys_timer davinci_timer = ;
void davinci_watchdog_reset(struct platform_device *pdev)
