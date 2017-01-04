#define PREFIX "ACPI: "
#define ACPI_PROCESSOR_CLASS		"processor"
#define ACPI_PROCESSOR_DEVICE_NAME	"Processor"
#define ACPI_PROCESSOR_FILE_INFO	"info"
#define ACPI_PROCESSOR_FILE_THROTTLING	"throttling"
#define ACPI_PROCESSOR_FILE_LIMIT	"limit"
#define ACPI_PROCESSOR_NOTIFY_PERFORMANCE 0x80
#define ACPI_PROCESSOR_NOTIFY_POWER	0x81
#define ACPI_PROCESSOR_NOTIFY_THROTTLING	0x82
#define ACPI_PROCESSOR_LIMIT_USER	0
#define ACPI_PROCESSOR_LIMIT_THERMAL	1
#define _COMPONENT		ACPI_PROCESSOR_COMPONENT
ACPI_MODULE_NAME("processor_driver");
MODULE_AUTHOR("Paul Diefenbaugh");
MODULE_DESCRIPTION("ACPI Processor Driver");
MODULE_LICENSE("GPL");
static int acpi_processor_add(struct acpi_device *device);
static int acpi_processor_remove(struct acpi_device *device, int type);
static void acpi_processor_notify(struct acpi_device *device, u32 event);
static acpi_status acpi_processor_hotadd_init(acpi_handle handle, int *p_cpu);
static int acpi_processor_handle_eject(struct acpi_processor *pr);
static const struct acpi_device_id processor_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, processor_device_ids);
static struct acpi_driver acpi_processor_driver = ;
#define INSTALL_NOTIFY_HANDLER		1
#define UNINSTALL_NOTIFY_HANDLER	2
DEFINE_PER_CPU(struct acpi_processor *, processors);
EXPORT_PER_CPU_SYMBOL(processors);
struct acpi_processor_errata errata __read_mostly;
static int acpi_processor_errata_piix4(struct pci_dev *dev)
static int acpi_processor_errata(struct acpi_processor *pr)
static int acpi_processor_get_info(struct acpi_device *device)
static DEFINE_PER_CPU(void *, processor_device_array);
static void acpi_processor_notify(struct acpi_device *device, u32 event)
static int acpi_cpu_soft_notify(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block acpi_cpu_notifier =
;
static int __cpuinit acpi_processor_add(struct acpi_device *device)
static int acpi_processor_remove(struct acpi_device *device, int type)
static int is_processor_present(acpi_handle handle)
static
int acpi_processor_device_add(acpi_handle handle, struct acpi_device **device)
static void acpi_processor_hotplug_notify(acpi_handle handle,
u32 event, void *data)
static acpi_status
processor_walk_namespace_cb(acpi_handle handle,
u32 lvl, void *context, void **rv)
static acpi_status acpi_processor_hotadd_init(acpi_handle handle, int *p_cpu)
static int acpi_processor_handle_eject(struct acpi_processor *pr)
static acpi_status acpi_processor_hotadd_init(acpi_handle handle, int *p_cpu)
static int acpi_processor_handle_eject(struct acpi_processor *pr)
static
void acpi_processor_install_hotplug_notify(void)
static
void acpi_processor_uninstall_hotplug_notify(void)
static int __init acpi_processor_init(void)
static void __exit acpi_processor_exit(void)
module_init(acpi_processor_init);
module_exit(acpi_processor_exit);
MODULE_ALIAS("processor");
