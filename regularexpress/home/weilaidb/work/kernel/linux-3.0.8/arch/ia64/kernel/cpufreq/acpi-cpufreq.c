MODULE_AUTHOR("Venkatesh Pallipadi");
MODULE_DESCRIPTION("ACPI Processor P-States Driver");
MODULE_LICENSE("GPL");
struct cpufreq_acpi_io ;
static struct cpufreq_acpi_io	*acpi_io_data[NR_CPUS];
static struct cpufreq_driver acpi_cpufreq_driver;
static int
processor_set_pstate (
u32	value)
static int
processor_get_pstate (
u32	*value)
static unsigned
extract_clock (
struct cpufreq_acpi_io *data,
unsigned value,
unsigned int cpu)
static unsigned int
processor_get_freq (
struct cpufreq_acpi_io	*data,
unsigned int		cpu)
static int
processor_set_freq (
struct cpufreq_acpi_io	*data,
unsigned int		cpu,
int			state)
static unsigned int
acpi_cpufreq_get (
unsigned int		cpu)
static int
acpi_cpufreq_target (
struct cpufreq_policy   *policy,
unsigned int target_freq,
unsigned int relation)
static int
acpi_cpufreq_verify (
struct cpufreq_policy   *policy)
static int
acpi_cpufreq_cpu_init (
struct cpufreq_policy   *policy)
static int
acpi_cpufreq_cpu_exit (
struct cpufreq_policy   *policy)
static struct freq_attr* acpi_cpufreq_attr[] = ;
static struct cpufreq_driver acpi_cpufreq_driver = ;
static int __init
acpi_cpufreq_init (void)
static void __exit
acpi_cpufreq_exit (void)
late_initcall(acpi_cpufreq_init);
module_exit(acpi_cpufreq_exit);
