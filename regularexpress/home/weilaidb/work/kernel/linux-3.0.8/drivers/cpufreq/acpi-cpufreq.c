MODULE_AUTHOR("Paul Diefenbaugh, Dominik Brodowski");
MODULE_DESCRIPTION("ACPI Processor P-States Driver");
MODULE_LICENSE("GPL");
enum ;
#define INTEL_MSR_RANGE		(0xffff)
struct acpi_cpufreq_data ;
static DEFINE_PER_CPU(struct acpi_cpufreq_data *, acfreq_data);
static struct acpi_processor_performance __percpu *acpi_perf_data;
static struct cpufreq_driver acpi_cpufreq_driver;
static unsigned int acpi_pstate_strict;
static int check_est_cpu(unsigned int cpuid)
static unsigned extract_io(u32 value, struct acpi_cpufreq_data *data)
static unsigned extract_msr(u32 msr, struct acpi_cpufreq_data *data)
static unsigned extract_freq(u32 val, struct acpi_cpufreq_data *data)
struct msr_addr ;
struct io_addr ;
struct drv_cmd ;
static void do_drv_read(void *_cmd)
static void do_drv_write(void *_cmd)
static void drv_read(struct drv_cmd *cmd)
static void drv_write(struct drv_cmd *cmd)
static u32 get_cur_val(const struct cpumask *mask)
static unsigned int get_cur_freq_on_cpu(unsigned int cpu)
static unsigned int check_freqs(const struct cpumask *mask, unsigned int freq,
struct acpi_cpufreq_data *data)
static int acpi_cpufreq_target(struct cpufreq_policy *policy,
unsigned int target_freq, unsigned int relation)
static int acpi_cpufreq_verify(struct cpufreq_policy *policy)
static unsigned long
acpi_cpufreq_guess_freq(struct acpi_cpufreq_data *data, unsigned int cpu)
static void free_acpi_perf_data(void)
static int __init acpi_cpufreq_early_init(void)
static int bios_with_sw_any_bug;
static int sw_any_bug_found(const struct dmi_system_id *d)
static const struct dmi_system_id sw_any_bug_dmi_table[] = ;
static int acpi_cpufreq_blacklist(struct cpuinfo_x86 *c)
static int acpi_cpufreq_cpu_init(struct cpufreq_policy *policy)
static int acpi_cpufreq_cpu_exit(struct cpufreq_policy *policy)
static int acpi_cpufreq_resume(struct cpufreq_policy *policy)
static struct freq_attr *acpi_cpufreq_attr[] = ;
static struct cpufreq_driver acpi_cpufreq_driver = ;
static int __init acpi_cpufreq_init(void)
static void __exit acpi_cpufreq_exit(void)
module_param(acpi_pstate_strict, uint, 0644);
MODULE_PARM_DESC(acpi_pstate_strict,
"value 0 or non-zero. non-zero -> strict ACPI checks are "
"performed during frequency changes.");
late_initcall(acpi_cpufreq_init);
module_exit(acpi_cpufreq_exit);
MODULE_ALIAS("acpi");
