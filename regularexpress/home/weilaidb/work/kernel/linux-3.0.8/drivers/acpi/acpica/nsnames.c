#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsnames")
acpi_status
acpi_ns_build_external_path(struct acpi_namespace_node *node,
acpi_size size, char *name_buffer)
char *acpi_ns_get_external_pathname(struct acpi_namespace_node *node)
acpi_size acpi_ns_get_pathname_length(struct acpi_namespace_node *node)
acpi_status
acpi_ns_handle_to_pathname(acpi_handle target_handle,
struct acpi_buffer * buffer)
