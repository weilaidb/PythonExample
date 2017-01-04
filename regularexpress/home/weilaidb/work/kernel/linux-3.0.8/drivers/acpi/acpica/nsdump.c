#define _COMPONENT          ACPI_NAMESPACE
ACPI_MODULE_NAME("nsdump")
void acpi_ns_dump_root_devices(void);
static acpi_status
acpi_ns_dump_one_device(acpi_handle obj_handle,
u32 level, void *context, void **return_value);
#if defined(ACPI_DEBUG_OUTPUT) || defined(ACPI_DEBUGGER)
void acpi_ns_print_pathname(u32 num_segments, char *pathname)
void
acpi_ns_dump_pathname(acpi_handle handle, char *msg, u32 level, u32 component)
acpi_status
acpi_ns_dump_one_object(acpi_handle obj_handle,
u32 level, void *context, void **return_value)
void
acpi_ns_dump_objects(acpi_object_type type,
u8 display_type,
u32 max_depth,
acpi_owner_id owner_id, acpi_handle start_handle)
void acpi_ns_dump_entry(acpi_handle handle, u32 debug_level)
void acpi_ns_dump_tables(acpi_handle search_base, u32 max_depth)
