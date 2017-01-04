#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exstore")
static acpi_status
acpi_ex_store_object_to_index(union acpi_operand_object *val_desc,
union acpi_operand_object *dest_desc,
struct acpi_walk_state *walk_state);
acpi_status
acpi_ex_store(union acpi_operand_object *source_desc,
union acpi_operand_object *dest_desc,
struct acpi_walk_state *walk_state)
static acpi_status
acpi_ex_store_object_to_index(union acpi_operand_object *source_desc,
union acpi_operand_object *index_desc,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_store_object_to_node(union acpi_operand_object *source_desc,
struct acpi_namespace_node *node,
struct acpi_walk_state *walk_state,
u8 implicit_conversion)
