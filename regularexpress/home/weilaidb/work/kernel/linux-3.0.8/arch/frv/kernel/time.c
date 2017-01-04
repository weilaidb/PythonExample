#define TICK_SIZE (tick_nsec / 1000)
unsigned long __nongprelbss __clkin_clock_speed_HZ;
unsigned long __nongprelbss __ext_bus_clock_speed_HZ;
unsigned long __nongprelbss __res_bus_clock_speed_HZ;
unsigned long __nongprelbss __sdram_clock_speed_HZ;
unsigned long __nongprelbss __core_bus_clock_speed_HZ;
unsigned long __nongprelbss __core_clock_speed_HZ;
unsigned long __nongprelbss __dsu_clock_speed_HZ;
unsigned long __nongprelbss __serial_clock_speed_HZ;
unsigned long __delay_loops_MHz;
static irqreturn_t timer_interrupt(int irq, void *dummy);
static struct irqaction timer_irq  = ;
static irqreturn_t timer_interrupt(int irq, void *dummy)
void time_divisor_init(void)
void read_persistent_clock(struct timespec *ts)
void time_init(void)
unsigned long long sched_clock(void)
