unsigned long smtc_nexttime[NR_CPUS][NR_CPUS];
static int smtc_nextinvpe[NR_CPUS];
#define MAKEVALID(x) (((x) == 0L) ? 1L : (x))
#define ISVALID(x) ((x) != 0L)
#define IS_SOONER(a, b, reference) \
(((a) - (unsigned long)(reference)) < ((b) - (unsigned long)(reference)))
#define CATCHUP_INCREMENT 64
static int mips_next_event(unsigned long delta,
struct clock_event_device *evt)
void smtc_distribute_timer(int vpe)
irqreturn_t c0_compare_interrupt(int irq, void *dev_id)
int __cpuinit smtc_clockevent_init(void)
