#define _COMPONENT		ACPI_BUS_COMPONENT
ACPI_MODULE_NAME("utils");
static void
acpi_util_eval_error(acpi_handle h, acpi_string p, acpi_status s)
acpi_status
acpi_extract_package(union acpi_object *package,
struct acpi_buffer *format, struct acpi_buffer *buffer)
EXPORT_SYMBOL(acpi_extract_package);
acpi_status
acpi_evaluate_integer(acpi_handle handle,
acpi_string pathname,
struct acpi_object_list *arguments, unsigned long long *data)
EXPORT_SYMBOL(acpi_evaluate_integer);
acpi_status
acpi_evaluate_reference(acpi_handle handle,
acpi_string pathname,
struct acpi_object_list *arguments,
struct acpi_handle_list *list)
EXPORT_SYMBOL(acpi_evaluate_reference);
