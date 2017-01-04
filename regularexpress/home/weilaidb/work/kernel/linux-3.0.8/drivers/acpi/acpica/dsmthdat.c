#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsmthdat")
static void
acpi_ds_method_data_delete_value(u8 type,
u32 index, struct acpi_walk_state *walk_state);
static acpi_status
acpi_ds_method_data_set_value(u8 type,
u32 index,
union acpi_operand_object *object,
struct acpi_walk_state *walk_state);
acpi_object_type
acpi_ds_method_data_get_type(u16 opcode,
u32 index, struct acpi_walk_state *walk_state);
void acpi_ds_method_data_init(struct acpi_walk_state *walk_state)
void acpi_ds_method_data_delete_all(struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_method_data_init_args(union acpi_operand_object **params,
u32 max_param_count,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_method_data_get_node(u8 type,
u32 index,
struct acpi_walk_state *walk_state,
struct acpi_namespace_node **node)
static acpi_status
acpi_ds_method_data_set_value(u8 type,
u32 index,
union acpi_operand_object *object,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_method_data_get_value(u8 type,
u32 index,
struct acpi_walk_state *walk_state,
union acpi_operand_object **dest_desc)
static void
acpi_ds_method_data_delete_value(u8 type,
u32 index, struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_store_object_to_local(u8 type,
u32 index,
union acpi_operand_object *obj_desc,
struct acpi_walk_state *walk_state)
acpi_object_type
acpi_ds_method_data_get_type(u16 opcode,
u32 index, struct acpi_walk_state *walk_state)
