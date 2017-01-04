#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utlock")
acpi_status acpi_ut_create_rw_lock(struct acpi_rw_lock *lock)
void acpi_ut_delete_rw_lock(struct acpi_rw_lock *lock)
acpi_status acpi_ut_acquire_read_lock(struct acpi_rw_lock *lock)
acpi_status acpi_ut_release_read_lock(struct acpi_rw_lock *lock)
acpi_status acpi_ut_acquire_write_lock(struct acpi_rw_lock *lock)
void acpi_ut_release_write_lock(struct acpi_rw_lock *lock)
