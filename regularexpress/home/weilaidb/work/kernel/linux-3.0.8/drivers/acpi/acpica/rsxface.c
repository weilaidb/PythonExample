#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rsxface")
#define ACPI_COPY_FIELD(out, in, field)  ((out)->field = (in)->field)
#define ACPI_COPY_ADDRESS(out, in)                      \
ACPI_COPY_FIELD(out, in, resource_type);             \
ACPI_COPY_FIELD(out, in, producer_consumer);         \
ACPI_COPY_FIELD(out, in, decode);                    \
ACPI_COPY_FIELD(out, in, min_address_fixed);         \
ACPI_COPY_FIELD(out, in, max_address_fixed);         \
ACPI_COPY_FIELD(out, in, info);                      \
ACPI_COPY_FIELD(out, in, granularity);               \
ACPI_COPY_FIELD(out, in, minimum);                   \
ACPI_COPY_FIELD(out, in, maximum);                   \
ACPI_COPY_FIELD(out, in, translation_offset);        \
ACPI_COPY_FIELD(out, in, address_length);            \
ACPI_COPY_FIELD(out, in, resource_source);
static acpi_status
acpi_rs_match_vendor_resource(struct acpi_resource *resource, void *context);
static acpi_status
acpi_rs_validate_parameters(acpi_handle device_handle,
struct acpi_buffer *buffer,
struct acpi_namespace_node **return_node);
static acpi_status
acpi_rs_validate_parameters(acpi_handle device_handle,
struct acpi_buffer *buffer,
struct acpi_namespace_node **return_node)
acpi_status
acpi_get_irq_routing_table(acpi_handle device_handle,
struct acpi_buffer *ret_buffer)
ACPI_EXPORT_SYMBOL(acpi_get_irq_routing_table)
acpi_status
acpi_get_current_resources(acpi_handle device_handle,
struct acpi_buffer *ret_buffer)
ACPI_EXPORT_SYMBOL(acpi_get_current_resources)
acpi_status
acpi_get_possible_resources(acpi_handle device_handle,
struct acpi_buffer *ret_buffer)
ACPI_EXPORT_SYMBOL(acpi_get_possible_resources)
acpi_status
acpi_set_current_resources(acpi_handle device_handle,
struct acpi_buffer *in_buffer)
ACPI_EXPORT_SYMBOL(acpi_set_current_resources)
acpi_status
acpi_resource_to_address64(struct acpi_resource *resource,
struct acpi_resource_address64 *out)
ACPI_EXPORT_SYMBOL(acpi_resource_to_address64)
acpi_status
acpi_get_vendor_resource(acpi_handle device_handle,
char *name,
struct acpi_vendor_uuid * uuid,
struct acpi_buffer * ret_buffer)
ACPI_EXPORT_SYMBOL(acpi_get_vendor_resource)
static acpi_status
acpi_rs_match_vendor_resource(struct acpi_resource *resource, void *context)
acpi_status
acpi_walk_resources(acpi_handle device_handle,
char *name,
acpi_walk_resource_callback user_function, void *context)
ACPI_EXPORT_SYMBOL(acpi_walk_resources)
