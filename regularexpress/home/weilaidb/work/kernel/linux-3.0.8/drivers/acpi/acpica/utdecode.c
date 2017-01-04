#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utdecode")
const char *acpi_format_exception(acpi_status status)
ACPI_EXPORT_SYMBOL(acpi_format_exception)
const u8 acpi_gbl_ns_properties[ACPI_NUM_NS_TYPES] = ;
static const char acpi_gbl_hex_to_ascii[] = ;
char acpi_ut_hex_to_ascii_char(u64 integer, u32 position)
const char *acpi_gbl_region_types[ACPI_NUM_PREDEFINED_REGIONS] = ;
char *acpi_ut_get_region_name(u8 space_id)
static const char *acpi_gbl_event_types[ACPI_NUM_FIXED_EVENTS] = ;
char *acpi_ut_get_event_name(u32 event_id)
static const char acpi_gbl_bad_type[] = "UNDEFINED";
static const char *acpi_gbl_ns_type_names[] = ;
char *acpi_ut_get_type_name(acpi_object_type type)
char *acpi_ut_get_object_type_name(union acpi_operand_object *obj_desc)
char *acpi_ut_get_node_name(void *object)
static const char *acpi_gbl_desc_type_names[] = ;
char *acpi_ut_get_descriptor_name(void *object)
static const char *acpi_gbl_ref_class_names[] = ;
const char *acpi_ut_get_reference_name(union acpi_operand_object *object)
#if defined(ACPI_DEBUG_OUTPUT) || defined(ACPI_DEBUGGER)
static char *acpi_gbl_mutex_names[ACPI_NUM_MUTEX] = ;
char *acpi_ut_get_mutex_name(u32 mutex_id)
static const char *acpi_gbl_notify_value_names[] = ;
const char *acpi_ut_get_notify_name(u32 notify_value)
u8 acpi_ut_valid_object_type(acpi_object_type type)
