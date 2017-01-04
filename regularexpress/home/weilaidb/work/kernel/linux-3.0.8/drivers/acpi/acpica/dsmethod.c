#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsmethod")
static acpi_status
acpi_ds_create_method_mutex(union acpi_operand_object *method_desc);
acpi_status
acpi_ds_method_error(acpi_status status, struct acpi_walk_state *walk_state)
static acpi_status
acpi_ds_create_method_mutex(union acpi_operand_object *method_desc)
acpi_status
acpi_ds_begin_method_execution(struct acpi_namespace_node *method_node,
union acpi_operand_object *obj_desc,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_call_control_method(struct acpi_thread_state *thread,
struct acpi_walk_state *this_walk_state,
union acpi_parse_object *op)
acpi_status
acpi_ds_restart_control_method(struct acpi_walk_state *walk_state,
union acpi_operand_object *return_desc)
void
acpi_ds_terminate_control_method(union acpi_operand_object *method_desc,
struct acpi_walk_state *walk_state)
