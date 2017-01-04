#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("psargs")
static u32
acpi_ps_get_next_package_length(struct acpi_parse_state *parser_state);
static union acpi_parse_object *acpi_ps_get_next_field(struct acpi_parse_state
*parser_state);
static u32
acpi_ps_get_next_package_length(struct acpi_parse_state *parser_state)
u8 *acpi_ps_get_next_package_end(struct acpi_parse_state *parser_state)
char *acpi_ps_get_next_namestring(struct acpi_parse_state *parser_state)
acpi_status
acpi_ps_get_next_namepath(struct acpi_walk_state *walk_state,
struct acpi_parse_state *parser_state,
union acpi_parse_object *arg, u8 possible_method_call)
void
acpi_ps_get_next_simple_arg(struct acpi_parse_state *parser_state,
u32 arg_type, union acpi_parse_object *arg)
static union acpi_parse_object *acpi_ps_get_next_field(struct acpi_parse_state
*parser_state)
acpi_status
acpi_ps_get_next_arg(struct acpi_walk_state *walk_state,
struct acpi_parse_state *parser_state,
u32 arg_type, union acpi_parse_object **return_arg)
