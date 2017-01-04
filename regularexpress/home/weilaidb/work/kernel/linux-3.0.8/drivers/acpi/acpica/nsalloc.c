#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsalloc")
struct acpi_namespace_node *acpi_ns_create_node(u32 name)
void acpi_ns_delete_node(struct acpi_namespace_node *node)
void acpi_ns_remove_node(struct acpi_namespace_node *node)
void acpi_ns_install_node(struct acpi_walk_state *walk_state, struct acpi_namespace_node *parent_node,
struct acpi_namespace_node *node,
acpi_object_type type)
void acpi_ns_delete_children(struct acpi_namespace_node *parent_node)
void acpi_ns_delete_namespace_subtree(struct acpi_namespace_node *parent_node)
void acpi_ns_delete_namespace_by_owner(acpi_owner_id owner_id)
