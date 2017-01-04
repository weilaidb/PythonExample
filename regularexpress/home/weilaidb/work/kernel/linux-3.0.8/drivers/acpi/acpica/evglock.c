#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evglock")
static u32 acpi_ev_global_lock_handler(void *context);
acpi_status acpi_ev_init_global_lock_handler(void)
acpi_status acpi_ev_remove_global_lock_handler(void)
static u32 acpi_ev_global_lock_handler(void *context)
acpi_status acpi_ev_acquire_global_lock(u16 timeout)
acpi_status acpi_ev_release_global_lock(void)
