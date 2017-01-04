#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsobject")
static acpi_status
acpi_ds_build_internal_object(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
union acpi_operand_object **obj_desc_ptr);
static acpi_status
acpi_ds_build_internal_object(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
union acpi_operand_object **obj_desc_ptr)
acpi_status
acpi_ds_build_internal_buffer_obj(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
u32 buffer_length,
union acpi_operand_object **obj_desc_ptr)
acpi_status
acpi_ds_build_internal_package_obj(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
u32 element_count,
union acpi_operand_object **obj_desc_ptr)
acpi_status
acpi_ds_create_node(struct acpi_walk_state *walk_state,
struct acpi_namespace_node *node,
union acpi_parse_object *op)
acpi_status
acpi_ds_init_object_from_op(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
u16 opcode,
union acpi_operand_object **ret_obj_desc)
