#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dsfield")
static acpi_status
acpi_ds_get_field_names(struct acpi_create_field_info *info,
struct acpi_walk_state *walk_state,
union acpi_parse_object *arg);
acpi_status
acpi_ds_create_buffer_field(union acpi_parse_object *op,
struct acpi_walk_state *walk_state)
static acpi_status
acpi_ds_get_field_names(struct acpi_create_field_info *info,
struct acpi_walk_state *walk_state,
union acpi_parse_object *arg)
acpi_status
acpi_ds_create_field(union acpi_parse_object *op,
struct acpi_namespace_node *region_node,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_init_field_objects(union acpi_parse_object *op,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_create_bank_field(union acpi_parse_object *op,
struct acpi_namespace_node *region_node,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_create_index_field(union acpi_parse_object *op,
struct acpi_namespace_node *region_node,
struct acpi_walk_state *walk_state)
