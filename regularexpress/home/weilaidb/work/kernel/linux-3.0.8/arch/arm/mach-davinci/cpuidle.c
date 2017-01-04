#define DAVINCI_CPUIDLE_MAX_STATES	2
struct davinci_ops ;
#define DAVINCI_CPUIDLE_FLAGS_DDR2_PWDN	BIT(0)
static struct cpuidle_driver davinci_idle_driver = ;
static DEFINE_PER_CPU(struct cpuidle_device, davinci_cpuidle_device);
static void __iomem *ddr2_reg_base;
static void davinci_save_ddr_power(int enter, bool pdown)
static void davinci_c2state_enter(u32 flags)
static void davinci_c2state_exit(u32 flags)
static struct davinci_ops davinci_states[DAVINCI_CPUIDLE_MAX_STATES] = ;
static int davinci_enter_idle(struct cpuidle_device *dev,
struct cpuidle_state *state)
static int __init davinci_cpuidle_probe(struct platform_device *pdev)
static struct platform_driver davinci_cpuidle_driver = ;
static int __init davinci_cpuidle_init(void)
device_initcall(davinci_cpuidle_init);
