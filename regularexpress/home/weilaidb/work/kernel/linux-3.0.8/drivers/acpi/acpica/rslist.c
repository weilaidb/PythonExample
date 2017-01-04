#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rslist")
acpi_status
acpi_rs_convert_aml_to_resources(u8 * aml,
u32 length,
u32 offset, u8 resource_index, void **context)
acpi_status
acpi_rs_convert_resources_to_aml(struct acpi_resource *resource,
acpi_size aml_size_needed, u8 * output_buffer)
