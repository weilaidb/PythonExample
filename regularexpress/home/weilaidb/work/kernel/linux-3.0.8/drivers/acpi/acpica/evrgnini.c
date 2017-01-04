#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evrgnini")
static u8 acpi_ev_is_pci_root_bridge(struct acpi_namespace_node *node);
acpi_status
acpi_ev_system_memory_region_setup(acpi_handle handle,
u32 function,
void *handler_context, void **region_context)
acpi_status
acpi_ev_io_space_region_setup(acpi_handle handle,
u32 function,
void *handler_context, void **region_context)
acpi_status
acpi_ev_pci_config_region_setup(acpi_handle handle,
u32 function,
void *handler_context, void **region_context)
static u8 acpi_ev_is_pci_root_bridge(struct acpi_namespace_node *node)
acpi_status
acpi_ev_pci_bar_region_setup(acpi_handle handle,
u32 function,
void *handler_context, void **region_context)
acpi_status
acpi_ev_cmos_region_setup(acpi_handle handle,
u32 function,
void *handler_context, void **region_context)
acpi_status
acpi_ev_default_region_setup(acpi_handle handle,
u32 function,
void *handler_context, void **region_context)
acpi_status
acpi_ev_initialize_region(union acpi_operand_object *region_obj,
u8 acpi_ns_locked)
