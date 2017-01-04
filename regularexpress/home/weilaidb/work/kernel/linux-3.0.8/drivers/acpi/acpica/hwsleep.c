#define _COMPONENT          ACPI_HARDWARE
ACPI_MODULE_NAME("hwsleep")
acpi_status
acpi_set_firmware_waking_vector(u32 physical_address)
ACPI_EXPORT_SYMBOL(acpi_set_firmware_waking_vector)
#if ACPI_MACHINE_WIDTH == 64
acpi_status
acpi_set_firmware_waking_vector64(u64 physical_address)
ACPI_EXPORT_SYMBOL(acpi_set_firmware_waking_vector64)
acpi_status acpi_enter_sleep_state_prep(u8 sleep_state)
ACPI_EXPORT_SYMBOL(acpi_enter_sleep_state_prep)
static unsigned int gts, bfs;
module_param(gts, uint, 0644);
module_param(bfs, uint, 0644);
MODULE_PARM_DESC(gts, "Enable evaluation of _GTS on suspend.");
MODULE_PARM_DESC(bfs, "Enable evaluation of _BFS on resume".);
acpi_status asmlinkage acpi_enter_sleep_state(u8 sleep_state)
ACPI_EXPORT_SYMBOL(acpi_enter_sleep_state)
acpi_status asmlinkage acpi_enter_sleep_state_s4bios(void)
ACPI_EXPORT_SYMBOL(acpi_enter_sleep_state_s4bios)
acpi_status acpi_leave_sleep_state_prep(u8 sleep_state)
acpi_status acpi_leave_sleep_state(u8 sleep_state)
ACPI_EXPORT_SYMBOL(acpi_leave_sleep_state)
