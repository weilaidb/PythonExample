#define __ACPARSER_H__
#define OP_HAS_RETURN_VALUE             1
#define ACPI_VAR_ARGS                   ACPI_UINT32_MAX
#define ACPI_PARSE_DELETE_TREE          0x0001
#define ACPI_PARSE_NO_TREE_DELETE       0x0000
#define ACPI_PARSE_TREE_MASK            0x0001
#define ACPI_PARSE_LOAD_PASS1           0x0010
#define ACPI_PARSE_LOAD_PASS2           0x0020
#define ACPI_PARSE_EXECUTE              0x0030
#define ACPI_PARSE_MODE_MASK            0x0030
#define ACPI_PARSE_DEFERRED_OP          0x0100
#define ACPI_PARSE_DISASSEMBLE          0x0200
#define ACPI_PARSE_MODULE_LEVEL         0x0400
acpi_status acpi_ps_execute_method(struct acpi_evaluate_info *info);
u8 *acpi_ps_get_next_package_end(struct acpi_parse_state *parser_state);
char *acpi_ps_get_next_namestring(struct acpi_parse_state *parser_state);
void
acpi_ps_get_next_simple_arg(struct acpi_parse_state *parser_state,
u32 arg_type, union acpi_parse_object *arg);
acpi_status
acpi_ps_get_next_namepath(struct acpi_walk_state *walk_state,
struct acpi_parse_state *parser_state,
union acpi_parse_object *arg, u8 method_call);
acpi_status
acpi_ps_get_next_arg(struct acpi_walk_state *walk_state,
struct acpi_parse_state *parser_state,
u32 arg_type, union acpi_parse_object **return_arg);
union acpi_parse_object *acpi_ps_find_name(union acpi_parse_object *scope,
u32 name, u32 opcode);
union acpi_parse_object *acpi_ps_get_parent(union acpi_parse_object *op);
const struct acpi_opcode_info *acpi_ps_get_opcode_info(u16 opcode);
char *acpi_ps_get_opcode_name(u16 opcode);
u8 acpi_ps_get_argument_count(u32 op_type);
acpi_status acpi_ps_parse_aml(struct acpi_walk_state *walk_state);
u32 acpi_ps_get_opcode_size(u32 opcode);
u16 acpi_ps_peek_opcode(struct acpi_parse_state *state);
acpi_status
acpi_ps_complete_this_op(struct acpi_walk_state *walk_state,
union acpi_parse_object *op);
acpi_status
acpi_ps_next_parse_state(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
acpi_status callback_status);
acpi_status acpi_ps_parse_loop(struct acpi_walk_state *walk_state);
acpi_status
acpi_ps_init_scope(struct acpi_parse_state *parser_state,
union acpi_parse_object *root);
union acpi_parse_object *acpi_ps_get_parent_scope(struct acpi_parse_state
*state);
u8 acpi_ps_has_completed_scope(struct acpi_parse_state *parser_state);
void
acpi_ps_pop_scope(struct acpi_parse_state *parser_state,
union acpi_parse_object **op,
u32 * arg_list, u32 * arg_count);
acpi_status
acpi_ps_push_scope(struct acpi_parse_state *parser_state,
union acpi_parse_object *op,
u32 remaining_args, u32 arg_count);
void acpi_ps_cleanup_scope(struct acpi_parse_state *state);
void
acpi_ps_append_arg(union acpi_parse_object *op, union acpi_parse_object *arg);
union acpi_parse_object *acpi_ps_find(union acpi_parse_object *scope,
char *path, u16 opcode, u32 create);
union acpi_parse_object *acpi_ps_get_arg(union acpi_parse_object *op, u32 argn);
union acpi_parse_object *acpi_ps_get_depth_next(union acpi_parse_object *origin,
union acpi_parse_object *op);
acpi_status
acpi_ps_walk_parsed_aml(union acpi_parse_object *start_op,
union acpi_parse_object *end_op,
union acpi_operand_object *mth_desc,
struct acpi_namespace_node *start_node,
union acpi_operand_object **params,
union acpi_operand_object **caller_return_desc,
acpi_owner_id owner_id,
acpi_parse_downwards descending_callback,
acpi_parse_upwards ascending_callback);
acpi_status
acpi_ps_get_next_walk_op(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
acpi_parse_upwards ascending_callback);
acpi_status acpi_ps_delete_completed_op(struct acpi_walk_state *walk_state);
void acpi_ps_delete_parse_tree(union acpi_parse_object *root);
union acpi_parse_object *acpi_ps_create_scope_op(void);
void acpi_ps_init_op(union acpi_parse_object *op, u16 opcode);
union acpi_parse_object *acpi_ps_alloc_op(u16 opcode);
void acpi_ps_free_op(union acpi_parse_object *op);
u8 acpi_ps_is_leading_char(u32 c);
u8 acpi_ps_is_prefix_char(u32 c);
u32 acpi_ps_get_name(union acpi_parse_object *op);
void acpi_ps_set_name(union acpi_parse_object *op, u32 name);
u32
acpi_ps_sprint_path(char *buffer_start,
u32 buffer_size, union acpi_parse_object *op);
u32
acpi_ps_sprint_op(char *buffer_start,
u32 buffer_size, union acpi_parse_object *op);
void acpi_ps_show(union acpi_parse_object *op);
