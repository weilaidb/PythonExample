#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utmisc")
const char *acpi_ut_validate_exception(acpi_status status)
u8 acpi_ut_is_pci_root_bridge(char *id)
u8 acpi_ut_is_aml_table(struct acpi_table_header *table)
acpi_status acpi_ut_allocate_owner_id(acpi_owner_id * owner_id)
void acpi_ut_release_owner_id(acpi_owner_id * owner_id_ptr)
void acpi_ut_strupr(char *src_string)
void acpi_ut_print_string(char *string, u8 max_length)
u32 acpi_ut_dword_byte_swap(u32 value)
void acpi_ut_set_integer_width(u8 revision)
void
acpi_ut_display_init_pathname(u8 type,
struct acpi_namespace_node *obj_handle,
char *path)
u8 acpi_ut_valid_acpi_char(char character, u32 position)
u8 acpi_ut_valid_acpi_name(u32 name)
acpi_name acpi_ut_repair_name(char *name)
acpi_status acpi_ut_strtoul64(char *string, u32 base, u64 * ret_integer)
acpi_status
acpi_ut_create_update_state_and_push(union acpi_operand_object *object,
u16 action,
union acpi_generic_state **state_list)
acpi_status
acpi_ut_walk_package_tree(union acpi_operand_object * source_object,
void *target_object,
acpi_pkg_callback walk_callback, void *context)
