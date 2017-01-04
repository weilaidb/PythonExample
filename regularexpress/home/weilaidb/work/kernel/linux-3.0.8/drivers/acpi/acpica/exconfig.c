#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exconfig")
static acpi_status
acpi_ex_add_table(u32 table_index,
struct acpi_namespace_node *parent_node,
union acpi_operand_object **ddb_handle);
static acpi_status
acpi_ex_region_read(union acpi_operand_object *obj_desc,
u32 length, u8 *buffer);
static acpi_status
acpi_ex_add_table(u32 table_index,
struct acpi_namespace_node *parent_node,
union acpi_operand_object **ddb_handle)
acpi_status
acpi_ex_load_table_op(struct acpi_walk_state *walk_state,
union acpi_operand_object **return_desc)
static acpi_status
acpi_ex_region_read(union acpi_operand_object *obj_desc, u32 length, u8 *buffer)
acpi_status
acpi_ex_load_op(union acpi_operand_object *obj_desc,
union acpi_operand_object *target,
struct acpi_walk_state *walk_state)
acpi_status acpi_ex_unload_table(union acpi_operand_object *ddb_handle)
