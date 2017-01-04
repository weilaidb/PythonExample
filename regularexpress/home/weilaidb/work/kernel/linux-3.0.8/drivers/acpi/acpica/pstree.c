#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("pstree")
union acpi_parse_object *acpi_ps_get_child(union acpi_parse_object *op);
union acpi_parse_object *acpi_ps_get_arg(union acpi_parse_object *op, u32 argn)
void
acpi_ps_append_arg(union acpi_parse_object *op, union acpi_parse_object *arg)
union acpi_parse_object *acpi_ps_get_depth_next(union acpi_parse_object *origin,
union acpi_parse_object *op)
union acpi_parse_object *acpi_ps_get_child(union acpi_parse_object *op)
