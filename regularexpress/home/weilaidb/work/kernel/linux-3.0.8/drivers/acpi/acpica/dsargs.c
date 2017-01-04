#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsargs")
static acpi_status
acpi_ds_execute_arguments(struct acpi_namespace_node *node,
struct acpi_namespace_node *scope_node,
u32 aml_length, u8 *aml_start);
static acpi_status
acpi_ds_execute_arguments(struct acpi_namespace_node *node,
struct acpi_namespace_node *scope_node,
u32 aml_length, u8 *aml_start)
acpi_status
acpi_ds_get_buffer_field_arguments(union acpi_operand_object *obj_desc)
acpi_status
acpi_ds_get_bank_field_arguments(union acpi_operand_object *obj_desc)
acpi_status acpi_ds_get_buffer_arguments(union acpi_operand_object *obj_desc)
acpi_status acpi_ds_get_package_arguments(union acpi_operand_object *obj_desc)
acpi_status acpi_ds_get_region_arguments(union acpi_operand_object *obj_desc)
