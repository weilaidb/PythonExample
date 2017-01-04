#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exresolv")
static acpi_status
acpi_ex_resolve_object_to_value(union acpi_operand_object **stack_ptr,
struct acpi_walk_state *walk_state);
acpi_status
acpi_ex_resolve_to_value(union acpi_operand_object **stack_ptr,
struct acpi_walk_state *walk_state)
static acpi_status
acpi_ex_resolve_object_to_value(union acpi_operand_object **stack_ptr,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_resolve_multiple(struct acpi_walk_state *walk_state,
union acpi_operand_object *operand,
acpi_object_type * return_type,
union acpi_operand_object **return_desc)
