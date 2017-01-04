#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dswexec")
static ACPI_EXECUTE_OP acpi_gbl_op_type_dispatch[] = ;
acpi_status
acpi_ds_get_predicate_value(struct acpi_walk_state *walk_state,
union acpi_operand_object *result_obj)
acpi_status
acpi_ds_exec_begin_op(struct acpi_walk_state *walk_state,
union acpi_parse_object **out_op)
acpi_status acpi_ds_exec_end_op(struct acpi_walk_state *walk_state)
