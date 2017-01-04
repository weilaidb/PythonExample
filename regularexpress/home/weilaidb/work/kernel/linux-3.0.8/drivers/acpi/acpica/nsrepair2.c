#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsrepair2")
typedef
acpi_status(*acpi_repair_function) (struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
typedef struct acpi_repair_info  acpi_repair_info;
static const struct acpi_repair_info *acpi_ns_match_repairable_name(struct
acpi_namespace_node
*node);
static acpi_status
acpi_ns_repair_ALR(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_repair_CID(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_repair_FDE(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_repair_HID(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_repair_PSS(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_repair_TSS(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr);
static acpi_status
acpi_ns_check_sorted_list(struct acpi_predefined_data *data,
union acpi_operand_object *return_object,
u32 expected_count,
u32 sort_index,
u8 sort_direction, char *sort_key_name);
static void
acpi_ns_sort_list(union acpi_operand_object **elements,
u32 count, u32 index, u8 sort_direction);
#define ACPI_SORT_ASCENDING     0
#define ACPI_SORT_DESCENDING    1
static const struct acpi_repair_info acpi_ns_repairable_names[] = ;
#define ACPI_FDE_FIELD_COUNT        5
#define ACPI_FDE_BYTE_BUFFER_SIZE   5
#define ACPI_FDE_DWORD_BUFFER_SIZE  (ACPI_FDE_FIELD_COUNT * sizeof (u32))
acpi_status
acpi_ns_complex_repairs(struct acpi_predefined_data *data,
struct acpi_namespace_node *node,
acpi_status validate_status,
union acpi_operand_object **return_object_ptr)
static const struct acpi_repair_info *acpi_ns_match_repairable_name(struct
acpi_namespace_node
*node)
static acpi_status
acpi_ns_repair_ALR(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_repair_FDE(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_repair_CID(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_repair_HID(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_repair_TSS(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_repair_PSS(struct acpi_predefined_data *data,
union acpi_operand_object **return_object_ptr)
static acpi_status
acpi_ns_check_sorted_list(struct acpi_predefined_data *data,
union acpi_operand_object *return_object,
u32 expected_count,
u32 sort_index,
u8 sort_direction, char *sort_key_name)
static void
acpi_ns_sort_list(union acpi_operand_object **elements,
u32 count, u32 index, u8 sort_direction)
