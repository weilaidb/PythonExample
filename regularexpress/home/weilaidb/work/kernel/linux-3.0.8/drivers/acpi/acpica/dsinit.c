#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsinit")
static acpi_status
acpi_ds_init_one_object(acpi_handle obj_handle,
u32 level, void *context, void **return_value);
static acpi_status
acpi_ds_init_one_object(acpi_handle obj_handle,
u32 level, void *context, void **return_value)
acpi_status
acpi_ds_initialize_objects(u32 table_index,
struct acpi_namespace_node * start_node)
