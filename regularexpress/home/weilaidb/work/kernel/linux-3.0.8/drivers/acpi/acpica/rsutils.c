#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rsutils")
u8 acpi_rs_decode_bitmask(u16 mask, u8 * list)
u16 acpi_rs_encode_bitmask(u8 * list, u8 count)
void
acpi_rs_move_data(void *destination, void *source, u16 item_count, u8 move_type)
void
acpi_rs_set_resource_length(acpi_rsdesc_size total_length,
union aml_resource *aml)
void
acpi_rs_set_resource_header(u8 descriptor_type,
acpi_rsdesc_size total_length,
union aml_resource *aml)
static u16 acpi_rs_strcpy(char *destination, char *source)
acpi_rs_length
acpi_rs_get_resource_source(acpi_rs_length resource_length,
acpi_rs_length minimum_length,
struct acpi_resource_source * resource_source,
union aml_resource * aml, char *string_ptr)
acpi_rsdesc_size
acpi_rs_set_resource_source(union aml_resource * aml,
acpi_rs_length minimum_length,
struct acpi_resource_source * resource_source)
acpi_status
acpi_rs_get_prt_method_data(struct acpi_namespace_node * node,
struct acpi_buffer * ret_buffer)
acpi_status
acpi_rs_get_crs_method_data(struct acpi_namespace_node *node,
struct acpi_buffer *ret_buffer)
acpi_status
acpi_rs_get_prs_method_data(struct acpi_namespace_node *node,
struct acpi_buffer *ret_buffer)
acpi_status
acpi_rs_get_method_data(acpi_handle handle,
char *path, struct acpi_buffer *ret_buffer)
acpi_status
acpi_rs_set_srs_method_data(struct acpi_namespace_node *node,
struct acpi_buffer *in_buffer)
