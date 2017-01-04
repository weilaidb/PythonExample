#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utdebug")
static acpi_thread_id acpi_gbl_prev_thread_id;
static char *acpi_gbl_fn_entry_str = "----Entry";
static char *acpi_gbl_fn_exit_str = "----Exit-";
static const char *acpi_ut_trim_function_name(const char *function_name);
void acpi_ut_init_stack_ptr_trace(void)
void acpi_ut_track_stack_ptr(void)
static const char *acpi_ut_trim_function_name(const char *function_name)
void ACPI_INTERNAL_VAR_XFACE
acpi_debug_print(u32 requested_debug_level,
u32 line_number,
const char *function_name,
const char *module_name,
u32 component_id, const char *format, ...)
ACPI_EXPORT_SYMBOL(acpi_debug_print)
void ACPI_INTERNAL_VAR_XFACE
acpi_debug_print_raw(u32 requested_debug_level,
u32 line_number,
const char *function_name,
const char *module_name,
u32 component_id, const char *format, ...)
ACPI_EXPORT_SYMBOL(acpi_debug_print_raw)
void
acpi_ut_trace(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id)
ACPI_EXPORT_SYMBOL(acpi_ut_trace)
void
acpi_ut_trace_ptr(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id, void *pointer)
void
acpi_ut_trace_str(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id, char *string)
void
acpi_ut_trace_u32(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id, u32 integer)
void
acpi_ut_exit(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id)
ACPI_EXPORT_SYMBOL(acpi_ut_exit)
void
acpi_ut_status_exit(u32 line_number,
const char *function_name,
const char *module_name,
u32 component_id, acpi_status status)
ACPI_EXPORT_SYMBOL(acpi_ut_status_exit)
void
acpi_ut_value_exit(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id, u64 value)
ACPI_EXPORT_SYMBOL(acpi_ut_value_exit)
void
acpi_ut_ptr_exit(u32 line_number,
const char *function_name,
const char *module_name, u32 component_id, u8 *ptr)
void acpi_ut_dump_buffer2(u8 * buffer, u32 count, u32 display)
void acpi_ut_dump_buffer(u8 * buffer, u32 count, u32 display, u32 component_id)
