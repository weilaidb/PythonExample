#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rscreate")
acpi_status
acpi_rs_create_resource_list(union acpi_operand_object *aml_buffer,
struct acpi_buffer *output_buffer)
acpi_status
acpi_rs_create_pci_routing_table(union acpi_operand_object *package_object,
struct acpi_buffer *output_buffer)
acpi_status
acpi_rs_create_aml_resources(struct acpi_resource *linked_list_buffer,
struct acpi_buffer *output_buffer)
