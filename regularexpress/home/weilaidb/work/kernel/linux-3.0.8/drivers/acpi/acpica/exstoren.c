#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exstoren")
acpi_status
acpi_ex_resolve_object(union acpi_operand_object **source_desc_ptr,
acpi_object_type target_type,
struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_store_object_to_object(union acpi_operand_object *source_desc,
union acpi_operand_object *dest_desc,
union acpi_operand_object **new_desc,
struct acpi_walk_state *walk_state)
