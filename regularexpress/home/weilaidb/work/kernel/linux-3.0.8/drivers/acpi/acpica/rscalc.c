#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rscalc")
static u8 acpi_rs_count_set_bits(u16 bit_field);
static acpi_rs_length
acpi_rs_struct_option_length(struct acpi_resource_source *resource_source);
static u32
acpi_rs_stream_option_length(u32 resource_length, u32 minimum_total_length);
static u8 acpi_rs_count_set_bits(u16 bit_field)
static acpi_rs_length
acpi_rs_struct_option_length(struct acpi_resource_source *resource_source)
static u32
acpi_rs_stream_option_length(u32 resource_length,
u32 minimum_aml_resource_length)
acpi_status
acpi_rs_get_aml_length(struct acpi_resource * resource, acpi_size * size_needed)
acpi_status
acpi_rs_get_list_length(u8 * aml_buffer,
u32 aml_buffer_length, acpi_size * size_needed)
acpi_status
acpi_rs_get_pci_routing_table_length(union acpi_operand_object *package_object,
acpi_size * buffer_size_needed)
