static DEFINE_PER_CPU(struct clock_event_device, local_clockevent);
void local_timer_interrupt(void)
static void dummy_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *clk)
void local_timer_setup(unsigned int cpu)
void local_timer_stop(unsigned int cpu)
