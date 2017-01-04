#define PREFIX			"ACPI: "
#define _COMPONENT		ACPI_PROCESSOR_COMPONENT
ACPI_MODULE_NAME("processor_core");
static int __init set_no_mwait(const struct dmi_system_id *id)
static struct dmi_system_id __initdata processor_idle_dmi_table[] = ;
static int map_lapic_id(struct acpi_subtable_header *entry,
u32 acpi_id, int *apic_id)
static int map_x2apic_id(struct acpi_subtable_header *entry,
int device_declaration, u32 acpi_id, int *apic_id)
static int map_lsapic_id(struct acpi_subtable_header *entry,
int device_declaration, u32 acpi_id, int *apic_id)
static int map_madt_entry(int type, u32 acpi_id)
static int map_mat_entry(acpi_handle handle, int type, u32 acpi_id)
int acpi_get_cpuid(acpi_handle handle, int type, u32 acpi_id)
EXPORT_SYMBOL_GPL(acpi_get_cpuid);
static bool __init processor_physically_present(acpi_handle handle)
static void __cpuinit acpi_set_pdc_bits(u32 *buf)
static struct acpi_object_list *__cpuinit acpi_processor_alloc_pdc(void)
static int __cpuinit
acpi_processor_eval_pdc(acpi_handle handle, struct acpi_object_list *pdc_in)
void __cpuinit acpi_processor_set_pdc(acpi_handle handle)
static acpi_status __init
early_init_pdc(acpi_handle handle, u32 lvl, void *context, void **rv)
void __init acpi_early_processor_set_pdc(void)
