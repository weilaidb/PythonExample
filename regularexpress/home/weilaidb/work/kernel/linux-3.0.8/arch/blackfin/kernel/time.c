#define	TICK_SIZE (tick_nsec / 1000)
static struct irqaction bfin_timer_irq = ;
#if defined(CONFIG_IPIPE)
void __init setup_system_timer0(void)
void __init setup_core_timer(void)
static void __init
time_sched_init(irqreturn_t(*timer_routine) (int, void *))
u32 arch_gettimeoffset(void)
__attribute__((l1_text))
irqreturn_t timer_interrupt(int irq, void *dummy)
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
