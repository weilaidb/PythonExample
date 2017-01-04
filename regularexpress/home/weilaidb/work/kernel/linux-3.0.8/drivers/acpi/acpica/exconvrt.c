#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exconvrt")
static u32
acpi_ex_convert_to_ascii(u64 integer, u16 base, u8 *string, u8 max_length);
acpi_status
acpi_ex_convert_to_integer(union acpi_operand_object *obj_desc,
union acpi_operand_object **result_desc, u32 flags)
acpi_status
acpi_ex_convert_to_buffer(union acpi_operand_object *obj_desc,
union acpi_operand_object **result_desc)
static u32
acpi_ex_convert_to_ascii(u64 integer, u16 base, u8 *string, u8 data_width)
acpi_status
acpi_ex_convert_to_string(union acpi_operand_object * obj_desc,
union acpi_operand_object ** result_desc, u32 type)
acpi_status
acpi_ex_convert_to_target_type(acpi_object_type destination_type,
union acpi_operand_object *source_desc,
union acpi_operand_object **result_desc,
struct acpi_walk_state *walk_state)
