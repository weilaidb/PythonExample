#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utmutex")
static acpi_status acpi_ut_create_mutex(acpi_mutex_handle mutex_id);
static void acpi_ut_delete_mutex(acpi_mutex_handle mutex_id);
acpi_status acpi_ut_mutex_initialize(void)
void acpi_ut_mutex_terminate(void)
static acpi_status acpi_ut_create_mutex(acpi_mutex_handle mutex_id)
static void acpi_ut_delete_mutex(acpi_mutex_handle mutex_id)
acpi_status acpi_ut_acquire_mutex(acpi_mutex_handle mutex_id)
acpi_status acpi_ut_release_mutex(acpi_mutex_handle mutex_id)
