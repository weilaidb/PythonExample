#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsrepair")
static acpi_status
acpi_ns_convert_to_integer(union acpi_operand_object *original_object,
union acpi_operand_object **return_object);
static acpi_status
acpi_ns_convert_to_string(union acpi_operand_object *original_object,
union acpi_operand_object **return_object);
static acpi_status
acpi_ns_convert_to_buffer(union acpi_operand_object *original_object,
union acpi_operand_object **return_object);
static acpi_status
acpi_ns_convert_to_package(union acpi_operand_object *original_object,
union acpi_operand_object **return_object);
acpi_status
acpi_ns_repair_object(struct acpi_predefined_data *data,
u32 expected_btypes,
u32 package_index,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_convert_to_integer(union acpi_operand_object *original_object,
union acpi_operand_object **return_object)
static acpi_status
acpi_ns_convert_to_string(union acpi_operand_object *original_object,
union acpi_operand_object **return_object)
static acpi_status
acpi_ns_convert_to_buffer(union acpi_operand_object *original_object,
union acpi_operand_object **return_object)
static acpi_status
acpi_ns_convert_to_package(union acpi_operand_object *original_object,
union acpi_operand_object **return_object)
acpi_status
acpi_ns_repair_null_element(struct acpi_predefined_data *data,
u32 expected_btypes,
u32 package_index,
union acpi_operand_object **return_object_ptr)
void
acpi_ns_remove_null_elements(struct acpi_predefined_data *data,
u8 package_type,
union acpi_operand_object *obj_desc)
acpi_status
acpi_ns_repair_package_list(struct acpi_predefined_data *data,
union acpi_operand_object **obj_desc_ptr)
