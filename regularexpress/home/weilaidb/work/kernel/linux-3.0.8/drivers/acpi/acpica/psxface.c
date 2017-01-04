#define _COMPONENT          ACPI_PARSER
ACPI_MODULE_NAME("psxface")
static void acpi_ps_start_trace(struct acpi_evaluate_info *info);
static void acpi_ps_stop_trace(struct acpi_evaluate_info *info);
static void
acpi_ps_update_parameter_list(struct acpi_evaluate_info *info, u16 action);
acpi_status
acpi_debug_trace(char *name, u32 debug_level, u32 debug_layer, u32 flags)
static void acpi_ps_start_trace(struct acpi_evaluate_info *info)
static void acpi_ps_stop_trace(struct acpi_evaluate_info *info)
acpi_status acpi_ps_execute_method(struct acpi_evaluate_info *info)
static void
acpi_ps_update_parameter_list(struct acpi_evaluate_info *info, u16 action)
