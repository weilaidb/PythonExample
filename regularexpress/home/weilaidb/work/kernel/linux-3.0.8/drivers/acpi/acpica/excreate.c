#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("excreate")
acpi_status acpi_ex_create_alias(struct acpi_walk_state *walk_state)
acpi_status acpi_ex_create_event(struct acpi_walk_state *walk_state)
acpi_status acpi_ex_create_mutex(struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_create_region(u8 * aml_start,
u32 aml_length,
u8 region_space, struct acpi_walk_state *walk_state)
acpi_status acpi_ex_create_processor(struct acpi_walk_state *walk_state)
acpi_status acpi_ex_create_power_resource(struct acpi_walk_state *walk_state)
acpi_status
acpi_ex_create_method(u8 * aml_start,
u32 aml_length, struct acpi_walk_state *walk_state)
