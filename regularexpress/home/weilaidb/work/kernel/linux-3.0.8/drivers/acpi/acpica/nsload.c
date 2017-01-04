#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsload")
acpi_status acpi_ns_unload_namespace(acpi_handle handle);
static acpi_status acpi_ns_delete_subtree(acpi_handle start_handle);
acpi_status
acpi_ns_load_table(u32 table_index, struct acpi_namespace_node *node)
acpi_status acpi_ns_load_namespace(void)
static acpi_status acpi_ns_delete_subtree(acpi_handle start_handle)
acpi_status acpi_ns_unload_namespace(acpi_handle handle)
