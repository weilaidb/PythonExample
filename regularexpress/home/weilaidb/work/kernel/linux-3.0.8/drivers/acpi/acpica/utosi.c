#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utosi")
static struct acpi_interface_info acpi_default_supported_interfaces[] = ;
acpi_status acpi_ut_initialize_interfaces(void)
void acpi_ut_interface_terminate(void)
acpi_status acpi_ut_install_interface(acpi_string interface_name)
acpi_status acpi_ut_remove_interface(acpi_string interface_name)
struct acpi_interface_info *acpi_ut_get_interface(acpi_string interface_name)
acpi_status acpi_ut_osi_implementation(struct acpi_walk_state * walk_state)
