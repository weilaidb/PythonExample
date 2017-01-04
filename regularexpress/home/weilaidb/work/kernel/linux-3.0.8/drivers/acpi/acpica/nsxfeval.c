#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsxfeval")
static void acpi_ns_resolve_references(struct acpi_evaluate_info *info);
acpi_status
acpi_evaluate_object_typed(acpi_handle handle,
acpi_string pathname,
struct acpi_object_list *external_params,
struct acpi_buffer *return_buffer,
acpi_object_type return_type)
ACPI_EXPORT_SYMBOL(acpi_evaluate_object_typed)
acpi_status
acpi_evaluate_object(acpi_handle handle,
acpi_string pathname,
struct acpi_object_list *external_params,
struct acpi_buffer *return_buffer)
ACPI_EXPORT_SYMBOL(acpi_evaluate_object)
static void acpi_ns_resolve_references(struct acpi_evaluate_info *info)
acpi_status
acpi_walk_namespace(acpi_object_type type,
acpi_handle start_object,
u32 max_depth,
acpi_walk_callback pre_order_visit,
acpi_walk_callback post_order_visit,
void *context, void **return_value)
ACPI_EXPORT_SYMBOL(acpi_walk_namespace)
static acpi_status
acpi_ns_get_device_callback(acpi_handle obj_handle,
u32 nesting_level,
void *context, void **return_value)
acpi_status
acpi_get_devices(const char *HID,
acpi_walk_callback user_function,
void *context, void **return_value)
ACPI_EXPORT_SYMBOL(acpi_get_devices)
acpi_status
acpi_attach_data(acpi_handle obj_handle,
acpi_object_handler handler, void *data)
ACPI_EXPORT_SYMBOL(acpi_attach_data)
acpi_status
acpi_detach_data(acpi_handle obj_handle, acpi_object_handler handler)
ACPI_EXPORT_SYMBOL(acpi_detach_data)
acpi_status
acpi_get_data(acpi_handle obj_handle, acpi_object_handler handler, void **data)
ACPI_EXPORT_SYMBOL(acpi_get_data)
