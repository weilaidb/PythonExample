static int smi_port;
static int smi_cmd;
static unsigned int smi_sig;
static enum speedstep_processor speedstep_processor;
static struct cpufreq_frequency_table speedstep_freqs[] = ;
#define GET_SPEEDSTEP_OWNER 0
#define GET_SPEEDSTEP_STATE 1
#define SET_SPEEDSTEP_STATE 2
#define GET_SPEEDSTEP_FREQS 4
#define SMI_TRIES 5
static int speedstep_smi_ownership(void)
static int speedstep_smi_get_freqs(unsigned int *low, unsigned int *high)
static int speedstep_get_state(void)
static void speedstep_set_state(unsigned int state)
static int speedstep_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static int speedstep_verify(struct cpufreq_policy *policy)
static int speedstep_cpu_init(struct cpufreq_policy *policy)
static int speedstep_cpu_exit(struct cpufreq_policy *policy)
static unsigned int speedstep_get(unsigned int cpu)
static int speedstep_resume(struct cpufreq_policy *policy)
static struct freq_attr *speedstep_attr[] = ;
static struct cpufreq_driver speedstep_driver = ;
static int __init speedstep_init(void)
static void __exit speedstep_exit(void)
module_param(smi_port, int, 0444);
module_param(smi_cmd,  int, 0444);
module_param(smi_sig, uint, 0444);
MODULE_PARM_DESC(smi_port, "Override the BIOS-given IST port with this value "
"-- Intel's default setting is 0xb2");
MODULE_PARM_DESC(smi_cmd, "Override the BIOS-given IST command with this value "
"-- Intel's default setting is 0x82");
MODULE_PARM_DESC(smi_sig, "Set to 1 to fake the IST signature when using the "
"SMI interface.");
MODULE_AUTHOR("Hiroshi Miura");
MODULE_DESCRIPTION("Speedstep driver for IST applet SMI interface.");
MODULE_LICENSE("GPL");
module_init(speedstep_init);
module_exit(speedstep_exit);
