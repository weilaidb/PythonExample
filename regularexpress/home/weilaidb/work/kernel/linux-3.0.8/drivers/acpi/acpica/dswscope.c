#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dswscope")
void acpi_ds_scope_stack_clear(struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_scope_stack_push(struct acpi_namespace_node *node,
acpi_object_type type,
struct acpi_walk_state *walk_state)
acpi_status acpi_ds_scope_stack_pop(struct acpi_walk_state *walk_state)
