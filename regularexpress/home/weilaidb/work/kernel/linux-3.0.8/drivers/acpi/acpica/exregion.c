#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exregion")
acpi_status
acpi_ex_system_memory_space_handler(u32 function,
acpi_physical_address address,
u32 bit_width,
u64 *value,
void *handler_context, void *region_context)
acpi_status
acpi_ex_system_io_space_handler(u32 function,
acpi_physical_address address,
u32 bit_width,
u64 *value,
void *handler_context, void *region_context)
acpi_status
acpi_ex_pci_config_space_handler(u32 function,
acpi_physical_address address,
u32 bit_width,
u64 *value,
void *handler_context, void *region_context)
acpi_status
acpi_ex_cmos_space_handler(u32 function,
acpi_physical_address address,
u32 bit_width,
u64 *value,
void *handler_context, void *region_context)
acpi_status
acpi_ex_pci_bar_space_handler(u32 function,
acpi_physical_address address,
u32 bit_width,
u64 *value,
void *handler_context, void *region_context)
acpi_status
acpi_ex_data_table_space_handler(u32 function,
acpi_physical_address address,
u32 bit_width,
u64 *value,
void *handler_context, void *region_context)
