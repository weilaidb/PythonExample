#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nssearch")
static acpi_status
acpi_ns_search_parent_tree(u32 target_name,
struct acpi_namespace_node *node,
acpi_object_type type,
struct acpi_namespace_node **return_node);
acpi_status
acpi_ns_search_one_scope(u32 target_name,
struct acpi_namespace_node *parent_node,
acpi_object_type type,
struct acpi_namespace_node **return_node)
static acpi_status
acpi_ns_search_parent_tree(u32 target_name,
struct acpi_namespace_node *node,
acpi_object_type type,
struct acpi_namespace_node **return_node)
acpi_status
acpi_ns_search_and_enter(u32 target_name,
struct acpi_walk_state *walk_state,
struct acpi_namespace_node *node,
acpi_interpreter_mode interpreter_mode,
acpi_object_type type,
u32 flags, struct acpi_namespace_node **return_node)
