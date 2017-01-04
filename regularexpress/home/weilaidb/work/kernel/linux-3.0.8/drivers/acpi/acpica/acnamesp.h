#define __ACNAMESP_H__
#define ACPI_NS_ALL                 ((acpi_handle)0)
#define ACPI_NS_NORMAL              0
#define ACPI_NS_NEWSCOPE            1
#define ACPI_NS_LOCAL               2
#define ACPI_NS_NO_UPSEARCH         0
#define ACPI_NS_SEARCH_PARENT       0x01
#define ACPI_NS_DONT_OPEN_SCOPE     0x02
#define ACPI_NS_NO_PEER_SEARCH      0x04
#define ACPI_NS_ERROR_IF_FOUND      0x08
#define ACPI_NS_PREFIX_IS_SCOPE     0x10
#define ACPI_NS_EXTERNAL            0x20
#define ACPI_NS_TEMPORARY           0x40
#define ACPI_NS_WALK_NO_UNLOCK      0
#define ACPI_NS_WALK_UNLOCK         0x01
#define ACPI_NS_WALK_TEMP_NODES     0x02
#define ACPI_NOT_PACKAGE_ELEMENT    ACPI_UINT32_MAX
#define ACPI_WARN_ALWAYS            0
acpi_status acpi_ns_initialize_objects(void);
acpi_status acpi_ns_initialize_devices(void);
acpi_status acpi_ns_load_namespace(void);
acpi_status
acpi_ns_load_table(u32 table_index, struct acpi_namespace_node *node);
acpi_status
acpi_ns_walk_namespace(acpi_object_type type,
acpi_handle start_object,
u32 max_depth,
u32 flags,
acpi_walk_callback pre_order_visit,
acpi_walk_callback post_order_visit,
void *context, void **return_value);
struct acpi_namespace_node *acpi_ns_get_next_node(struct acpi_namespace_node
*parent,
struct acpi_namespace_node
*child);
struct acpi_namespace_node *acpi_ns_get_next_node_typed(acpi_object_type type,
struct
acpi_namespace_node
*parent,
struct
acpi_namespace_node
*child);
acpi_status
acpi_ns_parse_table(u32 table_index, struct acpi_namespace_node *start_node);
acpi_status
acpi_ns_one_complete_parse(u32 pass_number,
u32 table_index,
struct acpi_namespace_node *start_node);
acpi_status acpi_ns_root_initialize(void);
acpi_status
acpi_ns_lookup(union acpi_generic_state *scope_info,
char *name,
acpi_object_type type,
acpi_interpreter_mode interpreter_mode,
u32 flags,
struct acpi_walk_state *walk_state,
struct acpi_namespace_node **ret_node);
struct acpi_namespace_node *acpi_ns_create_node(u32 name);
void acpi_ns_delete_node(struct acpi_namespace_node *node);
void acpi_ns_remove_node(struct acpi_namespace_node *node);
void
acpi_ns_delete_namespace_subtree(struct acpi_namespace_node *parent_handle);
void acpi_ns_delete_namespace_by_owner(acpi_owner_id owner_id);
void acpi_ns_detach_object(struct acpi_namespace_node *node);
void acpi_ns_delete_children(struct acpi_namespace_node *parent);
int acpi_ns_compare_names(char *name1, char *name2);
void acpi_ns_dump_tables(acpi_handle search_base, u32 max_depth);
void acpi_ns_dump_entry(acpi_handle handle, u32 debug_level);
void
acpi_ns_dump_pathname(acpi_handle handle, char *msg, u32 level, u32 component);
void acpi_ns_print_pathname(u32 num_segments, char *pathname);
acpi_status
acpi_ns_dump_one_object(acpi_handle obj_handle,
u32 level, void *context, void **return_value);
void
acpi_ns_dump_objects(acpi_object_type type,
u8 display_type,
u32 max_depth,
acpi_owner_id owner_id, acpi_handle start_handle);
acpi_status acpi_ns_evaluate(struct acpi_evaluate_info *info);
void acpi_ns_exec_module_code_list(void);
acpi_status
acpi_ns_check_predefined_names(struct acpi_namespace_node *node,
u32 user_param_count,
acpi_status return_status,
union acpi_operand_object **return_object);
const union acpi_predefined_info *acpi_ns_check_for_predefined_name(struct
acpi_namespace_node
*node);
void
acpi_ns_check_parameter_count(char *pathname,
struct acpi_namespace_node *node,
u32 user_param_count,
const union acpi_predefined_info *info);
u32 acpi_ns_opens_scope(acpi_object_type type);
acpi_status
acpi_ns_build_external_path(struct acpi_namespace_node *node,
acpi_size size, char *name_buffer);
char *acpi_ns_get_external_pathname(struct acpi_namespace_node *node);
char *acpi_ns_name_of_current_scope(struct acpi_walk_state *walk_state);
acpi_status
acpi_ns_handle_to_pathname(acpi_handle target_handle,
struct acpi_buffer *buffer);
u8
acpi_ns_pattern_match(struct acpi_namespace_node *obj_node, char *search_for);
acpi_status
acpi_ns_get_node(struct acpi_namespace_node *prefix_node,
const char *external_pathname,
u32 flags, struct acpi_namespace_node **out_node);
acpi_size acpi_ns_get_pathname_length(struct acpi_namespace_node *node);
acpi_status
acpi_ns_attach_object(struct acpi_namespace_node *node,
union acpi_operand_object *object, acpi_object_type type);
union acpi_operand_object *acpi_ns_get_attached_object(struct
acpi_namespace_node
*node);
union acpi_operand_object *acpi_ns_get_secondary_object(union
acpi_operand_object
*obj_desc);
acpi_status
acpi_ns_attach_data(struct acpi_namespace_node *node,
acpi_object_handler handler, void *data);
acpi_status
acpi_ns_detach_data(struct acpi_namespace_node *node,
acpi_object_handler handler);
acpi_status
acpi_ns_get_attached_data(struct acpi_namespace_node *node,
acpi_object_handler handler, void **data);
acpi_status
acpi_ns_repair_object(struct acpi_predefined_data *data,
u32 expected_btypes,
u32 package_index,
union acpi_operand_object **return_object_ptr);
acpi_status
acpi_ns_repair_package_list(struct acpi_predefined_data *data,
union acpi_operand_object **obj_desc_ptr);
acpi_status
acpi_ns_repair_null_element(struct acpi_predefined_data *data,
u32 expected_btypes,
u32 package_index,
union acpi_operand_object **return_object_ptr);
void
acpi_ns_remove_null_elements(struct acpi_predefined_data *data,
u8 package_type,
union acpi_operand_object *obj_desc);
acpi_status
acpi_ns_complex_repairs(struct acpi_predefined_data *data,
struct acpi_namespace_node *node,
acpi_status validate_status,
union acpi_operand_object **return_object_ptr);
acpi_status
acpi_ns_search_and_enter(u32 entry_name,
struct acpi_walk_state *walk_state,
struct acpi_namespace_node *node,
acpi_interpreter_mode interpreter_mode,
acpi_object_type type,
u32 flags, struct acpi_namespace_node **ret_node);
acpi_status
acpi_ns_search_one_scope(u32 entry_name,
struct acpi_namespace_node *node,
acpi_object_type type,
struct acpi_namespace_node **ret_node);
void
acpi_ns_install_node(struct acpi_walk_state *walk_state,
struct acpi_namespace_node *parent_node,
struct acpi_namespace_node *node, acpi_object_type type);
u8 acpi_ns_valid_root_prefix(char prefix);
acpi_object_type acpi_ns_get_type(struct acpi_namespace_node *node);
u32 acpi_ns_local(acpi_object_type type);
void
acpi_ns_print_node_pathname(struct acpi_namespace_node *node, const char *msg);
acpi_status acpi_ns_build_internal_name(struct acpi_namestring_info *info);
void acpi_ns_get_internal_name_length(struct acpi_namestring_info *info);
acpi_status
acpi_ns_internalize_name(const char *dotted_name, char **converted_name);
acpi_status
acpi_ns_externalize_name(u32 internal_name_length,
const char *internal_name,
u32 * converted_name_length, char **converted_name);
struct acpi_namespace_node *acpi_ns_validate_handle(acpi_handle handle);
void acpi_ns_terminate(void);
