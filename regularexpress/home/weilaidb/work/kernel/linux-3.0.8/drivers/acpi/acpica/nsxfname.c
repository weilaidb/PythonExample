#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsxfname")
static char *acpi_ns_copy_device_id(struct acpica_device_id *dest,
struct acpica_device_id *source,
char *string_area);
acpi_status
acpi_get_handle(acpi_handle parent,
acpi_string pathname, acpi_handle * ret_handle)
ACPI_EXPORT_SYMBOL(acpi_get_handle)
acpi_status
acpi_get_name(acpi_handle handle, u32 name_type, struct acpi_buffer * buffer)
ACPI_EXPORT_SYMBOL(acpi_get_name)
static char *acpi_ns_copy_device_id(struct acpica_device_id *dest,
struct acpica_device_id *source,
char *string_area)
acpi_status
acpi_get_object_info(acpi_handle handle,
struct acpi_device_info **return_buffer)
ACPI_EXPORT_SYMBOL(acpi_get_object_info)
acpi_status acpi_install_method(u8 *buffer)
ACPI_EXPORT_SYMBOL(acpi_install_method)
