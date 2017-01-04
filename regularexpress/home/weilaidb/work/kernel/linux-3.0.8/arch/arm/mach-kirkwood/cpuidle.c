#define KIRKWOOD_MAX_STATES	2
static struct cpuidle_driver kirkwood_idle_driver = ;
static DEFINE_PER_CPU(struct cpuidle_device, kirkwood_cpuidle_device);
static int kirkwood_enter_idle(struct cpuidle_device *dev,
struct cpuidle_state *state)
static int kirkwood_init_cpuidle(void)
device_initcall(kirkwood_init_cpuidle);
