#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsobject")
acpi_status
acpi_ns_attach_object(struct acpi_namespace_node *node,
union acpi_operand_object *object, acpi_object_type type)
void acpi_ns_detach_object(struct acpi_namespace_node *node)
union acpi_operand_object *acpi_ns_get_attached_object(struct
acpi_namespace_node
*node)
union acpi_operand_object *acpi_ns_get_secondary_object(union
acpi_operand_object
*obj_desc)
acpi_status
acpi_ns_attach_data(struct acpi_namespace_node *node,
acpi_object_handler handler, void *data)
acpi_status
acpi_ns_detach_data(struct acpi_namespace_node * node,
acpi_object_handler handler)
acpi_status
acpi_ns_get_attached_data(struct acpi_namespace_node * node,
acpi_object_handler handler, void **data)
