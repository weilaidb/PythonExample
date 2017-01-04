#define _COMPONENT          ACPI_HARDWARE
ACPI_MODULE_NAME("hwtimer")
acpi_status acpi_get_timer_resolution(u32 * resolution)
ACPI_EXPORT_SYMBOL(acpi_get_timer_resolution)
acpi_status acpi_get_timer(u32 * ticks)
ACPI_EXPORT_SYMBOL(acpi_get_timer)
acpi_status
acpi_get_timer_duration(u32 start_ticks, u32 end_ticks, u32 * time_elapsed)
ACPI_EXPORT_SYMBOL(acpi_get_timer_duration)
