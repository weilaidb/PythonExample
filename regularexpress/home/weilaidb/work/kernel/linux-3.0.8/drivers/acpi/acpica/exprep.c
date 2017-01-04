#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exprep")
static u32
acpi_ex_decode_field_access(union acpi_operand_object *obj_desc,
u8 field_flags, u32 * return_byte_alignment);
static u32
acpi_ex_generate_access(u32 field_bit_offset,
u32 field_bit_length, u32 region_length);
static u32
acpi_ex_generate_access(u32 field_bit_offset,
u32 field_bit_length, u32 region_length)
static u32
acpi_ex_decode_field_access(union acpi_operand_object *obj_desc,
u8 field_flags, u32 * return_byte_alignment)
acpi_status
acpi_ex_prep_common_field_object(union acpi_operand_object *obj_desc,
u8 field_flags,
u8 field_attribute,
u32 field_bit_position, u32 field_bit_length)
acpi_status acpi_ex_prep_field_value(struct acpi_create_field_info *info)
