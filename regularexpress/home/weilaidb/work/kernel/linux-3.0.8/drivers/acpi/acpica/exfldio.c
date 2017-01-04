#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exfldio")
static acpi_status
acpi_ex_field_datum_io(union acpi_operand_object *obj_desc,
u32 field_datum_byte_offset,
u64 *value, u32 read_write);
static u8
acpi_ex_register_overflow(union acpi_operand_object *obj_desc, u64 value);
static acpi_status
acpi_ex_setup_region(union acpi_operand_object *obj_desc,
u32 field_datum_byte_offset);
static acpi_status
acpi_ex_setup_region(union acpi_operand_object *obj_desc,
u32 field_datum_byte_offset)
acpi_status
acpi_ex_access_region(union acpi_operand_object *obj_desc,
u32 field_datum_byte_offset, u64 *value, u32 function)
static u8
acpi_ex_register_overflow(union acpi_operand_object *obj_desc, u64 value)
static acpi_status
acpi_ex_field_datum_io(union acpi_operand_object *obj_desc,
u32 field_datum_byte_offset, u64 *value, u32 read_write)
acpi_status
acpi_ex_write_with_update_rule(union acpi_operand_object *obj_desc,
u64 mask,
u64 field_value, u32 field_datum_byte_offset)
acpi_status
acpi_ex_extract_from_field(union acpi_operand_object *obj_desc,
void *buffer, u32 buffer_length)
acpi_status
acpi_ex_insert_into_field(union acpi_operand_object *obj_desc,
void *buffer, u32 buffer_length)
