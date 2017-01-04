#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evxface")
acpi_status acpi_install_exception_handler(acpi_exception_handler handler)
ACPI_EXPORT_SYMBOL(acpi_install_exception_handler)
acpi_status
acpi_install_global_event_handler(ACPI_GBL_EVENT_HANDLER handler, void *context)
ACPI_EXPORT_SYMBOL(acpi_install_global_event_handler)
acpi_status
acpi_install_fixed_event_handler(u32 event,
acpi_event_handler handler, void *context)
ACPI_EXPORT_SYMBOL(acpi_install_fixed_event_handler)
acpi_status
acpi_remove_fixed_event_handler(u32 event, acpi_event_handler handler)
ACPI_EXPORT_SYMBOL(acpi_remove_fixed_event_handler)
static void
acpi_populate_handler_object(struct acpi_object_notify_handler *handler_obj,
u32 handler_type,
acpi_notify_handler handler, void *context,
struct acpi_object_notify_handler *next)
static acpi_status
acpi_add_handler_object(struct acpi_object_notify_handler *parent_obj,
acpi_notify_handler handler, void *context)
acpi_status
acpi_install_notify_handler(acpi_handle device,
u32 handler_type,
acpi_notify_handler handler, void *context)
ACPI_EXPORT_SYMBOL(acpi_install_notify_handler)
acpi_status
acpi_remove_notify_handler(acpi_handle device,
u32 handler_type, acpi_notify_handler handler)
ACPI_EXPORT_SYMBOL(acpi_remove_notify_handler)
acpi_status
acpi_install_gpe_handler(acpi_handle gpe_device,
u32 gpe_number,
u32 type, acpi_gpe_handler address, void *context)
ACPI_EXPORT_SYMBOL(acpi_install_gpe_handler)
acpi_status
acpi_remove_gpe_handler(acpi_handle gpe_device,
u32 gpe_number, acpi_gpe_handler address)
ACPI_EXPORT_SYMBOL(acpi_remove_gpe_handler)
acpi_status acpi_acquire_global_lock(u16 timeout, u32 * handle)
ACPI_EXPORT_SYMBOL(acpi_acquire_global_lock)
acpi_status acpi_release_global_lock(u32 handle)
ACPI_EXPORT_SYMBOL(acpi_release_global_lock)
