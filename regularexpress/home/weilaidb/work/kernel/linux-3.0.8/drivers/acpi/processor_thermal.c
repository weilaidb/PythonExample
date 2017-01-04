#define PREFIX "ACPI: "
#define ACPI_PROCESSOR_CLASS            "processor"
#define _COMPONENT              ACPI_PROCESSOR_COMPONENT
ACPI_MODULE_NAME("processor_thermal");
#define CPUFREQ_THERMAL_MIN_STEP 0
#define CPUFREQ_THERMAL_MAX_STEP 3
static DEFINE_PER_CPU(unsigned int, cpufreq_thermal_reduction_pctg);
static unsigned int acpi_thermal_cpufreq_is_init = 0;
static int cpu_has_cpufreq(unsigned int cpu)
static int acpi_thermal_cpufreq_notifier(struct notifier_block *nb,
unsigned long event, void *data)
static struct notifier_block acpi_thermal_cpufreq_notifier_block = ;
static int cpufreq_get_max_state(unsigned int cpu)
static int cpufreq_get_cur_state(unsigned int cpu)
static int cpufreq_set_cur_state(unsigned int cpu, int state)
void acpi_thermal_cpufreq_init(void)
void acpi_thermal_cpufreq_exit(void)
static int cpufreq_get_max_state(unsigned int cpu)
static int cpufreq_get_cur_state(unsigned int cpu)
static int cpufreq_set_cur_state(unsigned int cpu, int state)
int acpi_processor_get_limit_info(struct acpi_processor *pr)
static int acpi_processor_max_state(struct acpi_processor *pr)
static int
processor_get_max_state(struct thermal_cooling_device *cdev,
unsigned long *state)
static int
processor_get_cur_state(struct thermal_cooling_device *cdev,
unsigned long *cur_state)
static int
processor_set_cur_state(struct thermal_cooling_device *cdev,
unsigned long state)
struct thermal_cooling_device_ops processor_cooling_ops = ;
