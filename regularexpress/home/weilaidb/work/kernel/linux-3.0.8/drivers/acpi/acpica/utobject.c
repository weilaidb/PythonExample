#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utobject")
static acpi_status
acpi_ut_get_simple_object_size(union acpi_operand_object *obj,
acpi_size * obj_length);
static acpi_status
acpi_ut_get_package_object_size(union acpi_operand_object *obj,
acpi_size * obj_length);
static acpi_status
acpi_ut_get_element_length(u8 object_type,
union acpi_operand_object *source_object,
union acpi_generic_state *state, void *context);
union acpi_operand_object *acpi_ut_create_internal_object_dbg(const char
*module_name,
u32 line_number,
u32 component_id,
acpi_object_type
type)
union acpi_operand_object *acpi_ut_create_package_object(u32 count)
union acpi_operand_object *acpi_ut_create_integer_object(u64 initial_value)
union acpi_operand_object *acpi_ut_create_buffer_object(acpi_size buffer_size)
union acpi_operand_object *acpi_ut_create_string_object(acpi_size string_size)
u8 acpi_ut_valid_internal_object(void *object)
void *acpi_ut_allocate_object_desc_dbg(const char *module_name,
u32 line_number, u32 component_id)
void acpi_ut_delete_object_desc(union acpi_operand_object *object)
static acpi_status
acpi_ut_get_simple_object_size(union acpi_operand_object *internal_object,
acpi_size * obj_length)
static acpi_status
acpi_ut_get_element_length(u8 object_type,
union acpi_operand_object *source_object,
union acpi_generic_state *state, void *context)
static acpi_status
acpi_ut_get_package_object_size(union acpi_operand_object *internal_object,
acpi_size * obj_length)
acpi_status
acpi_ut_get_object_size(union acpi_operand_object *internal_object,
acpi_size * obj_length)
