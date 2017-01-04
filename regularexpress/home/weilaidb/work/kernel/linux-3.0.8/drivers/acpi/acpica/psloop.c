#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("psloop")
static u32 acpi_gbl_depth = 0;
static acpi_status acpi_ps_get_aml_opcode(struct acpi_walk_state *walk_state);
static acpi_status
acpi_ps_build_named_op(struct acpi_walk_state *walk_state,
u8 * aml_op_start,
union acpi_parse_object *unnamed_op,
union acpi_parse_object **op);
static acpi_status
acpi_ps_create_op(struct acpi_walk_state *walk_state,
u8 * aml_op_start, union acpi_parse_object **new_op);
static acpi_status
acpi_ps_get_arguments(struct acpi_walk_state *walk_state,
u8 * aml_op_start, union acpi_parse_object *op);
static acpi_status
acpi_ps_complete_op(struct acpi_walk_state *walk_state,
union acpi_parse_object **op, acpi_status status);
static acpi_status
acpi_ps_complete_final_op(struct acpi_walk_state *walk_state,
union acpi_parse_object *op, acpi_status status);
static void
acpi_ps_link_module_code(union acpi_parse_object *parent_op,
u8 *aml_start, u32 aml_length, acpi_owner_id owner_id);
static acpi_status acpi_ps_get_aml_opcode(struct acpi_walk_state *walk_state)
static acpi_status
acpi_ps_build_named_op(struct acpi_walk_state *walk_state,
u8 * aml_op_start,
union acpi_parse_object *unnamed_op,
union acpi_parse_object **op)
static acpi_status
acpi_ps_create_op(struct acpi_walk_state *walk_state,
u8 * aml_op_start, union acpi_parse_object **new_op)
static acpi_status
acpi_ps_get_arguments(struct acpi_walk_state *walk_state,
u8 * aml_op_start, union acpi_parse_object *op)
static void
acpi_ps_link_module_code(union acpi_parse_object *parent_op,
u8 *aml_start, u32 aml_length, acpi_owner_id owner_id)
static acpi_status
acpi_ps_complete_op(struct acpi_walk_state *walk_state,
union acpi_parse_object **op, acpi_status status)
static acpi_status
acpi_ps_complete_final_op(struct acpi_walk_state *walk_state,
union acpi_parse_object *op, acpi_status status)
acpi_status acpi_ps_parse_loop(struct acpi_walk_state *walk_state)
