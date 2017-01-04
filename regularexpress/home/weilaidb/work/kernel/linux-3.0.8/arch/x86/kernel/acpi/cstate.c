void acpi_processor_power_init_bm_check(struct acpi_processor_flags *flags,
unsigned int cpu)
EXPORT_SYMBOL(acpi_processor_power_init_bm_check);
struct cstate_entry ;
static struct cstate_entry __percpu *cpu_cstate_entry;
static short mwait_supported[ACPI_PROCESSOR_MAX_POWER];
#define NATIVE_CSTATE_BEYOND_HALT	(2)
static long acpi_processor_ffh_cstate_probe_cpu(void *_cx)
int acpi_processor_ffh_cstate_probe(unsigned int cpu,
struct acpi_processor_cx *cx, struct acpi_power_register *reg)
EXPORT_SYMBOL_GPL(acpi_processor_ffh_cstate_probe);
void acpi_processor_ffh_cstate_enter(struct acpi_processor_cx *cx)
EXPORT_SYMBOL_GPL(acpi_processor_ffh_cstate_enter);
static int __init ffh_cstate_init(void)
static void __exit ffh_cstate_exit(void)
arch_initcall(ffh_cstate_init);
__exitcall(ffh_cstate_exit);
