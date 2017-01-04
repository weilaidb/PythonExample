#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("psparse")
u32 acpi_ps_get_opcode_size(u32 opcode)
u16 acpi_ps_peek_opcode(struct acpi_parse_state * parser_state)
acpi_status
acpi_ps_complete_this_op(struct acpi_walk_state * walk_state,
union acpi_parse_object * op)
acpi_status
acpi_ps_next_parse_state(struct acpi_walk_state *walk_state,
union acpi_parse_object *op,
acpi_status callback_status)
acpi_status acpi_ps_parse_aml(struct acpi_walk_state *walk_state)
