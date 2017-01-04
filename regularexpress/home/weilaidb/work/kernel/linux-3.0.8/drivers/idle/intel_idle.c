#define DEBUG
#define INTEL_IDLE_VERSION "0.4"
#define PREFIX "intel_idle: "
static struct cpuidle_driver intel_idle_driver = ;
static int max_cstate = MWAIT_MAX_NUM_CSTATES - 1;
static unsigned int mwait_substates;
#define LAPIC_TIMER_ALWAYS_RELIABLE 0xFFFFFFFF
static unsigned int lapic_timer_reliable_states = (1 << 1);
static struct cpuidle_device __percpu *intel_idle_cpuidle_devices;
static int intel_idle(struct cpuidle_device *dev, struct cpuidle_state *state);
static struct cpuidle_state *cpuidle_state_table;
static unsigned long long auto_demotion_disable_flags;
#define CPUIDLE_FLAG_TLB_FLUSHED	0x10000
static struct cpuidle_state nehalem_cstates[MWAIT_MAX_NUM_CSTATES] = ;
static struct cpuidle_state snb_cstates[MWAIT_MAX_NUM_CSTATES] = ;
static struct cpuidle_state atom_cstates[MWAIT_MAX_NUM_CSTATES] = ;
static int intel_idle(struct cpuidle_device *dev, struct cpuidle_state *state)
static void __setup_broadcast_timer(void *arg)
static int setup_broadcast_cpuhp_notify(struct notifier_block *n,
unsigned long action, void *hcpu)
static struct notifier_block setup_broadcast_notifier = ;
static void auto_demotion_disable(void *dummy)
static int intel_idle_probe(void)
static void intel_idle_cpuidle_devices_uninit(void)
static int intel_idle_cpuidle_devices_init(void)
static int __init intel_idle_init(void)
static void __exit intel_idle_exit(void)
module_init(intel_idle_init);
module_exit(intel_idle_exit);
module_param(max_cstate, int, 0444);
MODULE_AUTHOR("Len Brown <len.brown@intel.com>");
MODULE_DESCRIPTION("Cpuidle driver for Intel Hardware v" INTEL_IDLE_VERSION);
MODULE_LICENSE("GPL");
