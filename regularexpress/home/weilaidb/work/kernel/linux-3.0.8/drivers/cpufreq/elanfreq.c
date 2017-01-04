#define REG_CSCIR 0x22
#define REG_CSCDR 0x23
static int max_freq;
struct s_elan_multiplier ;
static struct s_elan_multiplier elan_multiplier[] = ;
static struct cpufreq_frequency_table elanfreq_table[] = ;
static unsigned int elanfreq_get_cpu_frequency(unsigned int cpu)
static void elanfreq_set_cpu_state(unsigned int state)
;
static int elanfreq_verify(struct cpufreq_policy *policy)
static int elanfreq_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int elanfreq_cpu_init(struct cpufreq_policy *policy)
static int elanfreq_cpu_exit(struct cpufreq_policy *policy)
static int __init elanfreq_setup(char *str)
__setup("elanfreq=", elanfreq_setup);
static struct freq_attr *elanfreq_attr[] = ;
static struct cpufreq_driver elanfreq_driver = ;
static int __init elanfreq_init(void)
static void __exit elanfreq_exit(void)
module_param(max_freq, int, 0444);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert Schwebel <r.schwebel@pengutronix.de>, "
"Sven Geggus <sven@geggus.net>");
MODULE_DESCRIPTION("cpufreq driver for AMD's Elan CPUs");
module_init(elanfreq_init);
module_exit(elanfreq_exit);
