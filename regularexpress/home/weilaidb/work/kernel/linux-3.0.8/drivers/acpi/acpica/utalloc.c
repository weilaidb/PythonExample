#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utalloc")
acpi_status acpi_ut_create_caches(void)
acpi_status acpi_ut_delete_caches(void)
acpi_status acpi_ut_validate_buffer(struct acpi_buffer * buffer)
acpi_status
acpi_ut_initialize_buffer(struct acpi_buffer * buffer,
acpi_size required_length)
void *acpi_ut_allocate(acpi_size size,
u32 component, const char *module, u32 line)
void *acpi_ut_allocate_zeroed(acpi_size size,
u32 component, const char *module, u32 line)
