#define ACPI_CREATE_PREDEFINED_TABLE
#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nspredef")
static acpi_status
acpi_ns_check_package(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_check_package_list(struct acpi_predefined_data *data,
const union acpi_predefined_info *package,
union acpi_operand_object **elements, u32 count);
static acpi_status
acpi_ns_check_package_elements(struct acpi_predefined_data *data,
union acpi_operand_object **elements,
u8 type1,
u32 count1,
u8 type2, u32 count2, u32 start_index);
static acpi_status
acpi_ns_check_object_type(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr,
u32 expected_btypes, u32 package_index);
static acpi_status
acpi_ns_check_reference(struct acpi_predefined_data *data,
union acpi_operand_object *return_object);
static void acpi_ns_get_expected_types(char *buffer, u32 expected_btypes);
static const char *acpi_rtype_names[] = ;
acpi_status
acpi_ns_check_predefined_names(struct acpi_namespace_node *node,
u32 user_param_count,
acpi_status return_status,
union acpi_operand_object **return_object_ptr)
void
acpi_ns_check_parameter_count(char *pathname,
struct acpi_namespace_node *node,
u32 user_param_count,
const union acpi_predefined_info *predefined)
const union acpi_predefined_info *acpi_ns_check_for_predefined_name(struct
acpi_namespace_node
*node)
static acpi_status
acpi_ns_check_package(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_check_package_list(struct acpi_predefined_data *data,
const union acpi_predefined_info *package,
union acpi_operand_object **elements, u32 count)
static acpi_status
acpi_ns_check_package_elements(struct acpi_predefined_data *data,
union acpi_operand_object **elements,
u8 type1,
u32 count1,
u8 type2, u32 count2, u32 start_index)
static acpi_status
acpi_ns_check_object_type(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr,
u32 expected_btypes, u32 package_index)
static acpi_status
acpi_ns_check_reference(struct acpi_predefined_data *data,
union acpi_operand_object *return_object)
static void acpi_ns_get_expected_types(char *buffer, u32 expected_btypes)
