#define AT91_MAX_STATES	2
static DEFINE_PER_CPU(struct cpuidle_device, at91_cpuidle_device);
static struct cpuidle_driver at91_idle_driver = ;
static int at91_enter_idle(struct cpuidle_device *dev,
struct cpuidle_state *state)
static int at91_init_cpuidle(void)
device_initcall(at91_init_cpuidle);
