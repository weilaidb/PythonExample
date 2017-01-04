#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsutils")
static u8 acpi_ns_valid_path_separator(char sep);
acpi_name acpi_ns_find_parent_name(struct acpi_namespace_node *node_to_search);
void
acpi_ns_print_node_pathname(struct acpi_namespace_node *node,
const char *message)
u8 acpi_ns_valid_root_prefix(char prefix)
static u8 acpi_ns_valid_path_separator(char sep)
acpi_object_type acpi_ns_get_type(struct acpi_namespace_node * node)
u32 acpi_ns_local(acpi_object_type type)
void acpi_ns_get_internal_name_length(struct acpi_namestring_info *info)
acpi_status acpi_ns_build_internal_name(struct acpi_namestring_info *info)
acpi_status
acpi_ns_internalize_name(const char *external_name, char **converted_name)
acpi_status
acpi_ns_externalize_name(u32 internal_name_length,
const char *internal_name,
u32 * converted_name_length, char **converted_name)
struct acpi_namespace_node *acpi_ns_validate_handle(acpi_handle handle)
void acpi_ns_terminate(void)
u32 acpi_ns_opens_scope(acpi_object_type type)
acpi_status
acpi_ns_get_node(struct acpi_namespace_node *prefix_node,
const char *pathname,
u32 flags, struct acpi_namespace_node **return_node)
