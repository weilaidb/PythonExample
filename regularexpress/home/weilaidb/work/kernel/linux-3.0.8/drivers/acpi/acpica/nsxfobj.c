#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsxfobj")
acpi_status acpi_get_id(acpi_handle handle, acpi_owner_id * ret_id)
ACPI_EXPORT_SYMBOL(acpi_get_id)
acpi_status acpi_get_type(acpi_handle handle, acpi_object_type * ret_type)
ACPI_EXPORT_SYMBOL(acpi_get_type)
acpi_status acpi_get_parent(acpi_handle handle, acpi_handle * ret_handle)
ACPI_EXPORT_SYMBOL(acpi_get_parent)
acpi_status
acpi_get_next_object(acpi_object_type type,
acpi_handle parent,
acpi_handle child, acpi_handle * ret_handle)
ACPI_EXPORT_SYMBOL(acpi_get_next_object)
