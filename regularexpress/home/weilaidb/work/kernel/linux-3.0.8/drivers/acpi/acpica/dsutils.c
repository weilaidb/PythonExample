#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsutils")
void acpi_ds_clear_implicit_return(struct acpi_walk_state *walk_state)
u8
acpi_ds_do_implicit_return(union acpi_operand_object *return_desc,
struct acpi_walk_state *walk_state, u8 add_reference)
u8
acpi_ds_is_result_used(union acpi_parse_object * op,
struct acpi_walk_state * walk_state)
void
acpi_ds_delete_result_if_not_used(union acpi_parse_object *op,
union acpi_operand_object *result_obj,
struct acpi_walk_state *walk_state)
acpi_status acpi_ds_resolve_operands(struct acpi_walk_state *walk_state)
void acpi_ds_clear_operands(struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_create_operand(struct acpi_walk_state *walk_state,
union acpi_parse_object *arg, u32 arg_index)
acpi_status
acpi_ds_create_operands(struct acpi_walk_state *walk_state,
union acpi_parse_object *first_arg)
acpi_status acpi_ds_evaluate_name_path(struct acpi_walk_state *walk_state)
