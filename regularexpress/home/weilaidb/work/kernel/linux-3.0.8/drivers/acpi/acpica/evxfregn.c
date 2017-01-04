#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evxfregn")
acpi_status
acpi_install_address_space_handler(acpi_handle device,
acpi_adr_space_type space_id,
acpi_adr_space_handler handler,
acpi_adr_space_setup setup, void *context)
ACPI_EXPORT_SYMBOL(acpi_install_address_space_handler)
acpi_status
acpi_remove_address_space_handler(acpi_handle device,
acpi_adr_space_type space_id,
acpi_adr_space_handler handler)
ACPI_EXPORT_SYMBOL(acpi_remove_address_space_handler)
