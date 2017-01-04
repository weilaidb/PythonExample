static struct cpufreq_driver integrator_driver;
#define CM_ID  	IO_ADDRESS(INTEGRATOR_HDR_ID)
#define CM_OSC	IO_ADDRESS(INTEGRATOR_HDR_OSC)
#define CM_STAT IO_ADDRESS(INTEGRATOR_HDR_STAT)
#define CM_LOCK IO_ADDRESS(INTEGRATOR_HDR_LOCK)
static const struct icst_params lclk_params = ;
static const struct icst_params cclk_params = ;
static int integrator_verify_policy(struct cpufreq_policy *policy)
static int integrator_set_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static unsigned int integrator_get(unsigned int cpu)
static int integrator_cpufreq_init(struct cpufreq_policy *policy)
static struct cpufreq_driver integrator_driver = ;
static int __init integrator_cpu_init(void)
static void __exit integrator_cpu_exit(void)
MODULE_AUTHOR ("Russell M. King");
MODULE_DESCRIPTION ("cpufreq driver for ARM Integrator CPUs");
MODULE_LICENSE ("GPL");
module_init(integrator_cpu_init);
module_exit(integrator_cpu_exit);
