#define PFX "speedstep-lib: "
static int relaxed_check;
#define relaxed_check 0
static unsigned int pentium3_get_frequency(enum speedstep_processor processor)
static unsigned int pentiumM_get_frequency(void)
static unsigned int pentium_core_get_frequency(void)
static unsigned int pentium4_get_frequency(void)
unsigned int speedstep_get_frequency(enum speedstep_processor processor)
EXPORT_SYMBOL_GPL(speedstep_get_frequency);
unsigned int speedstep_detect_processor(void)
EXPORT_SYMBOL_GPL(speedstep_detect_processor);
unsigned int speedstep_get_freqs(enum speedstep_processor processor,
unsigned int *low_speed,
unsigned int *high_speed,
unsigned int *transition_latency,
void (*set_state) (unsigned int state))
EXPORT_SYMBOL_GPL(speedstep_get_freqs);
module_param(relaxed_check, int, 0444);
MODULE_PARM_DESC(relaxed_check,
"Don't do all checks for speedstep capability.");
MODULE_AUTHOR("Dominik Brodowski <linux@brodo.de>");
MODULE_DESCRIPTION("Library for Intel SpeedStep 1 or 2 cpufreq drivers.");
MODULE_LICENSE("GPL");
