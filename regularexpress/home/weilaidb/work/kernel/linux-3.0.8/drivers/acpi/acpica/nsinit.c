#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsinit")
static acpi_status
acpi_ns_init_one_object(acpi_handle obj_handle,
u32 level, void *context, void **return_value);
static acpi_status
acpi_ns_init_one_device(acpi_handle obj_handle,
u32 nesting_level, void *context, void **return_value);
static acpi_status
acpi_ns_find_ini_methods(acpi_handle obj_handle,
u32 nesting_level, void *context, void **return_value);
acpi_status acpi_ns_initialize_objects(void)
acpi_status acpi_ns_initialize_devices(void)
static acpi_status
acpi_ns_init_one_object(acpi_handle obj_handle,
u32 level, void *context, void **return_value)
static acpi_status
acpi_ns_find_ini_methods(acpi_handle obj_handle,
u32 nesting_level, void *context, void **return_value)
static acpi_status
acpi_ns_init_one_device(acpi_handle obj_handle,
u32 nesting_level, void *context, void **return_value)
