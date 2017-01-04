#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exmisc")
acpi_status
acpi_ex_get_object_reference(union acpi_operand_object *obj_desc,
union acpi_operand_object **return_desc,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_concat_template(union acpi_operand_object *operand0,
union acpi_operand_object *operand1,
union acpi_operand_object **actual_return_desc,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_do_concatenate(union acpi_operand_object *operand0,
union acpi_operand_object *operand1,
union acpi_operand_object **actual_return_desc,
struct acpi_walk_state *walk_state)
u64 acpi_ex_do_math_op(u16 opcode, u64 integer0, u64 integer1)
acpi_status
acpi_ex_do_logical_numeric_op(u16 opcode,
u64 integer0, u64 integer1, u8 *logical_result)
acpi_status
acpi_ex_do_logical_op(u16 opcode,
union acpi_operand_object *operand0,
union acpi_operand_object *operand1, u8 * logical_result)
