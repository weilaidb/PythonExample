#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evxfgpe")
acpi_status acpi_update_all_gpes(void)
ACPI_EXPORT_SYMBOL(acpi_update_all_gpes)
acpi_status acpi_enable_gpe(acpi_handle gpe_device, u32 gpe_number)
ACPI_EXPORT_SYMBOL(acpi_enable_gpe)
acpi_status acpi_disable_gpe(acpi_handle gpe_device, u32 gpe_number)
ACPI_EXPORT_SYMBOL(acpi_disable_gpe)
acpi_status
acpi_setup_gpe_for_wake(acpi_handle wake_device,
acpi_handle gpe_device, u32 gpe_number)
ACPI_EXPORT_SYMBOL(acpi_setup_gpe_for_wake)
acpi_status acpi_set_gpe_wake_mask(acpi_handle gpe_device, u32 gpe_number, u8 action)
ACPI_EXPORT_SYMBOL(acpi_set_gpe_wake_mask)
acpi_status acpi_clear_gpe(acpi_handle gpe_device, u32 gpe_number)
ACPI_EXPORT_SYMBOL(acpi_clear_gpe)
acpi_status
acpi_get_gpe_status(acpi_handle gpe_device,
u32 gpe_number, acpi_event_status *event_status)
ACPI_EXPORT_SYMBOL(acpi_get_gpe_status)
acpi_status acpi_disable_all_gpes(void)
ACPI_EXPORT_SYMBOL(acpi_disable_all_gpes)
acpi_status acpi_enable_all_runtime_gpes(void)
ACPI_EXPORT_SYMBOL(acpi_enable_all_runtime_gpes)
acpi_status
acpi_install_gpe_block(acpi_handle gpe_device,
struct acpi_generic_address *gpe_block_address,
u32 register_count, u32 interrupt_number)
ACPI_EXPORT_SYMBOL(acpi_install_gpe_block)
acpi_status acpi_remove_gpe_block(acpi_handle gpe_device)
ACPI_EXPORT_SYMBOL(acpi_remove_gpe_block)
acpi_status
acpi_get_gpe_device(u32 index, acpi_handle *gpe_device)
ACPI_EXPORT_SYMBOL(acpi_get_gpe_device)
