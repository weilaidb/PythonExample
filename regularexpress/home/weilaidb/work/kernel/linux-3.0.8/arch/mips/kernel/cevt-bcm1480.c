#define IMR_IP2_VAL	K_BCM1480_INT_MAP_I0
#define IMR_IP3_VAL	K_BCM1480_INT_MAP_I1
#define IMR_IP4_VAL	K_BCM1480_INT_MAP_I2
static void sibyte_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int sibyte_next_event(unsigned long delta, struct clock_event_device *cd)
static irqreturn_t sibyte_counter_handler(int irq, void *dev_id)
static DEFINE_PER_CPU(struct clock_event_device, sibyte_hpt_clockevent);
static DEFINE_PER_CPU(struct irqaction, sibyte_hpt_irqaction);
static DEFINE_PER_CPU(char [18], sibyte_hpt_name);
void __cpuinit sb1480_clockevent_init(void)
