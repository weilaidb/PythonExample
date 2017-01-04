#define PREFIX "ACPI: "
#define ACPI_PROCESSOR_CLASS		"processor"
#define ACPI_PROCESSOR_FILE_PERFORMANCE	"performance"
#define _COMPONENT		ACPI_PROCESSOR_COMPONENT
ACPI_MODULE_NAME("processor_perflib");
static DEFINE_MUTEX(performance_mutex);
static int ignore_ppc = -1;
module_param(ignore_ppc, int, 0644);
MODULE_PARM_DESC(ignore_ppc, "If the frequency of your machine gets wrongly" \
"limited by BIOS, this should help");
#define PPC_REGISTERED   1
#define PPC_IN_USE       2
static int acpi_processor_ppc_status;
static int acpi_processor_ppc_notifier(struct notifier_block *nb,
unsigned long event, void *data)
static struct notifier_block acpi_ppc_notifier_block = ;
static int acpi_processor_get_platform_limit(struct acpi_processor *pr)
#define ACPI_PROCESSOR_NOTIFY_PERFORMANCE	0x80
static void acpi_processor_ppc_ost(acpi_handle handle, int status)
int acpi_processor_ppc_has_changed(struct acpi_processor *pr, int event_flag)
int acpi_processor_get_bios_limit(int cpu, unsigned int *limit)
EXPORT_SYMBOL(acpi_processor_get_bios_limit);
void acpi_processor_ppc_init(void)
void acpi_processor_ppc_exit(void)
static int acpi_processor_get_performance_control(struct acpi_processor *pr)
static int acpi_processor_get_performance_states(struct acpi_processor *pr)
static int acpi_processor_get_performance_info(struct acpi_processor *pr)
int acpi_processor_notify_smm(struct module *calling_module)
EXPORT_SYMBOL(acpi_processor_notify_smm);
static int acpi_processor_get_psd(struct acpi_processor	*pr)
int acpi_processor_preregister_performance(
struct acpi_processor_performance __percpu *performance)
EXPORT_SYMBOL(acpi_processor_preregister_performance);
int
acpi_processor_register_performance(struct acpi_processor_performance
*performance, unsigned int cpu)
EXPORT_SYMBOL(acpi_processor_register_performance);
void
acpi_processor_unregister_performance(struct acpi_processor_performance
*performance, unsigned int cpu)
EXPORT_SYMBOL(acpi_processor_unregister_performance);
