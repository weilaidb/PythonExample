#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("uteval")
acpi_status
acpi_ut_evaluate_object(struct acpi_namespace_node *prefix_node,
char *path,
u32 expected_return_btypes,
union acpi_operand_object **return_desc)
acpi_status
acpi_ut_evaluate_numeric_object(char *object_name,
struct acpi_namespace_node *device_node,
u64 *value)
acpi_status
acpi_ut_execute_STA(struct acpi_namespace_node *device_node, u32 * flags)
acpi_status
acpi_ut_execute_power_methods(struct acpi_namespace_node *device_node,
const char **method_names,
u8 method_count, u8 *out_values)
