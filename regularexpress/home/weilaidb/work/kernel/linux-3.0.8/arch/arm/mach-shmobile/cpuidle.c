static void shmobile_enter_wfi(void)
void (*shmobile_cpuidle_modes[CPUIDLE_STATE_MAX])(void) = ;
static int shmobile_cpuidle_enter(struct cpuidle_device *dev,
struct cpuidle_state *state)
static struct cpuidle_device shmobile_cpuidle_dev;
static struct cpuidle_driver shmobile_cpuidle_driver = ;
void (*shmobile_cpuidle_setup)(struct cpuidle_device *dev);
static int shmobile_cpuidle_init(void)
late_initcall(shmobile_cpuidle_init);
