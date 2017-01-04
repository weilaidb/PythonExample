static int exynos4_enter_idle(struct cpuidle_device *dev,
struct cpuidle_state *state);
static struct cpuidle_state exynos4_cpuidle_set[] = ;
static DEFINE_PER_CPU(struct cpuidle_device, exynos4_cpuidle_device);
static struct cpuidle_driver exynos4_idle_driver = ;
static int exynos4_enter_idle(struct cpuidle_device *dev,
struct cpuidle_state *state)
static int __init exynos4_init_cpuidle(void)
device_initcall(exynos4_init_cpuidle);
