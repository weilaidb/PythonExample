#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utstate")
acpi_status
acpi_ut_create_pkg_state_and_push(void *internal_object,
void *external_object,
u16 index,
union acpi_generic_state **state_list)
void
acpi_ut_push_generic_state(union acpi_generic_state **list_head,
union acpi_generic_state *state)
union acpi_generic_state *acpi_ut_pop_generic_state(union acpi_generic_state
**list_head)
union acpi_generic_state *acpi_ut_create_generic_state(void)
struct acpi_thread_state *acpi_ut_create_thread_state(void)
union acpi_generic_state *acpi_ut_create_update_state(union acpi_operand_object
*object, u16 action)
union acpi_generic_state *acpi_ut_create_pkg_state(void *internal_object,
void *external_object,
u16 index)
union acpi_generic_state *acpi_ut_create_control_state(void)
void acpi_ut_delete_generic_state(union acpi_generic_state *state)
