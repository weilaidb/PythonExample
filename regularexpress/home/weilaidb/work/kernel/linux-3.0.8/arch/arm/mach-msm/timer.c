#define TIMER_MATCH_VAL         0x0000
#define TIMER_COUNT_VAL         0x0004
#define TIMER_ENABLE            0x0008
#define TIMER_ENABLE_CLR_ON_MATCH_EN    2
#define TIMER_ENABLE_EN                 1
#define TIMER_CLEAR             0x000C
#define DGT_CLK_CTL             0x0034
enum ;
#define CSR_PROTECTION          0x0020
#define CSR_PROTECTION_EN               1
#define GPT_HZ 32768
enum timer_location ;
#define MSM_GLOBAL_TIMER MSM_CLOCK_DGT
#if defined(CONFIG_ARCH_QSD8X50)
#define DGT_HZ (19200000 / 4)
#define MSM_DGT_SHIFT (0)
#elif defined(CONFIG_ARCH_MSM7X30)
#define DGT_HZ (24576000 / 4)
#define MSM_DGT_SHIFT (0)
#elif defined(CONFIG_ARCH_MSM8X60) || defined(CONFIG_ARCH_MSM8960)
#define DGT_HZ (27000000 / 4)
#define MSM_DGT_SHIFT (0)
#define DGT_HZ 19200000
#define MSM_DGT_SHIFT (5)
struct msm_clock ;
enum ;
static struct msm_clock msm_clocks[];
static struct clock_event_device *local_clock_event;
static irqreturn_t msm_timer_interrupt(int irq, void *dev_id)
static cycle_t msm_read_timer_count(struct clocksource *cs)
static struct msm_clock *clockevent_to_clock(struct clock_event_device *evt)
static int msm_timer_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void msm_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct msm_clock msm_clocks[] = ;
static void __init msm_timer_init(void)
int __cpuinit local_timer_setup(struct clock_event_device *evt)
inline int local_timer_ack(void)
struct sys_timer msm_timer = ;
