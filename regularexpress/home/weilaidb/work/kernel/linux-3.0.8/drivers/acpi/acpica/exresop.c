#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exresop")
static acpi_status
acpi_ex_check_object_type(acpi_object_type type_needed,
acpi_object_type this_type, void *object);
static acpi_status
acpi_ex_check_object_type(acpi_object_type type_needed,
acpi_object_type this_type, void *object)
acpi_status
acpi_ex_resolve_operands(u16 opcode,
union acpi_operand_object ** stack_ptr,
struct acpi_walk_state * walk_state)
