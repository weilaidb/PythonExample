#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("psscope")
union acpi_parse_object *acpi_ps_get_parent_scope(struct acpi_parse_state
*parser_state)
u8 acpi_ps_has_completed_scope(struct acpi_parse_state * parser_state)
acpi_status
acpi_ps_init_scope(struct acpi_parse_state * parser_state,
union acpi_parse_object * root_op)
acpi_status
acpi_ps_push_scope(struct acpi_parse_state *parser_state,
union acpi_parse_object *op,
u32 remaining_args, u32 arg_count)
void
acpi_ps_pop_scope(struct acpi_parse_state *parser_state,
union acpi_parse_object **op, u32 * arg_list, u32 * arg_count)
void acpi_ps_cleanup_scope(struct acpi_parse_state *parser_state)
