static struct pci_dev *speedstep_chipset_dev;
static enum speedstep_processor speedstep_processor;
static u32 pmbase;
static struct cpufreq_frequency_table speedstep_freqs[] = ;
static int speedstep_find_register(void)
static void speedstep_set_state(unsigned int state)
static void _speedstep_set_state(void *_state)
static int speedstep_activate(void)
static unsigned int speedstep_detect_chipset(void)
static void get_freq_data(void *_speed)
static unsigned int speedstep_get(unsigned int cpu)
static int speedstep_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int speedstep_verify(struct cpufreq_policy *policy)
struct get_freqs ;
static void get_freqs_on_cpu(void *_get_freqs)
static int speedstep_cpu_init(struct cpufreq_policy *policy)
static int speedstep_cpu_exit(struct cpufreq_policy *policy)
static struct freq_attr *speedstep_attr[] = ;
static struct cpufreq_driver speedstep_driver = ;
static int __init speedstep_init(void)
static void __exit speedstep_exit(void)
MODULE_AUTHOR("Dave Jones <davej@redhat.com>, "
"Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("Speedstep driver for Intel mobile processors on chipsets "
"with ICH-M southbridges.");
MODULE_LICENSE("GPL");
module_init(speedstep_init);
module_exit(speedstep_exit);
