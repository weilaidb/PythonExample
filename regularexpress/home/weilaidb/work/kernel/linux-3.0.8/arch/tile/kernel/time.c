static cycles_t cycles_per_sec __write_once;
cycles_t get_clock_rate(void)
#if CHIP_HAS_SPLIT_CYCLE()
cycles_t get_cycles(void)
EXPORT_SYMBOL(get_cycles);
#define SCHED_CLOCK_SHIFT 10
static unsigned long sched_clock_mult __write_once;
static cycles_t clocksource_get_cycles(struct clocksource *cs)
static struct clocksource cycle_counter_cs = ;
void __init setup_clock(void)
void __init calibrate_delay(void)
void __init time_init(void)
#define MAX_TICK 0x7fffffff
#define TILE_MINSEC 5
static int tile_timer_set_next_event(unsigned long ticks,
struct clock_event_device *evt)
static void tile_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static DEFINE_PER_CPU(struct clock_event_device, tile_timer) = ;
void __cpuinit setup_tile_timer(void)
void do_timer_interrupt(struct pt_regs *regs, int fault_num)
unsigned long long sched_clock(void)
int setup_profiling_timer(unsigned int multiplier)
cycles_t ns2cycles(unsigned long nsecs)
