#define _COMPONENT          ACPI_DISPATCHER
ACPI_MODULE_NAME("dswstate")
static acpi_status acpi_ds_result_stack_push(struct acpi_walk_state *ws);
static acpi_status acpi_ds_result_stack_pop(struct acpi_walk_state *ws);
acpi_status
acpi_ds_result_pop(union acpi_operand_object **object,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_result_push(union acpi_operand_object * object,
struct acpi_walk_state * walk_state)
static acpi_status acpi_ds_result_stack_push(struct acpi_walk_state *walk_state)
static acpi_status acpi_ds_result_stack_pop(struct acpi_walk_state *walk_state)
acpi_status
acpi_ds_obj_stack_push(void *object, struct acpi_walk_state * walk_state)
acpi_status
acpi_ds_obj_stack_pop(u32 pop_count, struct acpi_walk_state * walk_state)
void
acpi_ds_obj_stack_pop_and_delete(u32 pop_count,
struct acpi_walk_state *walk_state)
struct acpi_walk_state *acpi_ds_get_current_walk_state(struct acpi_thread_state
*thread)
void
acpi_ds_push_walk_state(struct acpi_walk_state *walk_state,
struct acpi_thread_state *thread)
struct acpi_walk_state *acpi_ds_pop_walk_state(struct acpi_thread_state *thread)
struct acpi_walk_state *acpi_ds_create_walk_state(acpi_owner_id owner_id, union acpi_parse_object
*origin, union acpi_operand_object
*method_desc, struct acpi_thread_state
*thread)
acpi_status
acpi_ds_init_aml_walk(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
struct acpi_namespace_node *method_node,
u8 * aml_start,
u32 aml_length,
struct acpi_evaluate_info *info, u8 pass_number)
void acpi_ds_delete_walk_state(struct acpi_walk_state *walk_state)
