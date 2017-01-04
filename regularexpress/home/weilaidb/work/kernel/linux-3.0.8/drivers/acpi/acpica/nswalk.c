#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nswalk")
struct acpi_namespace_node *acpi_ns_get_next_node(struct acpi_namespace_node
*parent_node,
struct acpi_namespace_node
*child_node)
struct acpi_namespace_node *acpi_ns_get_next_node_typed(acpi_object_type type,
struct
acpi_namespace_node
*parent_node,
struct
acpi_namespace_node
*child_node)
acpi_status
acpi_ns_walk_namespace(acpi_object_type type,
acpi_handle start_node,
u32 max_depth,
u32 flags,
acpi_walk_callback pre_order_visit,
acpi_walk_callback post_order_visit,
void *context, void **return_value)
