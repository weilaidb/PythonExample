void __iomem *twd_base;
static unsigned long twd_timer_rate;
static void twd_set_mode(enum clock_event_mode mode,
struct clock_event_device *clk)
static int twd_set_next_event(unsigned long evt,
struct clock_event_device *unused)
int twd_timer_ack(void)
static void __cpuinit twd_calibrate_rate(void)
void __cpuinit twd_timer_setup(struct clock_event_device *clk)
