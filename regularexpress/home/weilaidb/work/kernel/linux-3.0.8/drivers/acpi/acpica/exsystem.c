#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exsystem")
acpi_status acpi_ex_system_wait_semaphore(acpi_semaphore semaphore, u16 timeout)
acpi_status acpi_ex_system_wait_mutex(acpi_mutex mutex, u16 timeout)
acpi_status acpi_ex_system_do_stall(u32 how_long)
acpi_status acpi_ex_system_do_sleep(u64 how_long)
acpi_status acpi_ex_system_signal_event(union acpi_operand_object * obj_desc)
acpi_status
acpi_ex_system_wait_event(union acpi_operand_object *time_desc,
union acpi_operand_object *obj_desc)
acpi_status acpi_ex_system_reset_event(union acpi_operand_object *obj_desc)
