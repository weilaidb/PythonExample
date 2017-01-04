#define DEFINE_ACPI_GLOBALS
#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utglobal")
u32 acpi_dbg_level = ACPI_DEBUG_DEFAULT;
u32 acpi_dbg_layer = 0;
u32 acpi_gbl_nesting_level = 0;
u8 acpi_gbl_db_terminate_threads = FALSE;
u8 acpi_gbl_abort_method = FALSE;
u8 acpi_gbl_method_executing = FALSE;
u32 acpi_gbl_startup_flags = 0;
u8 acpi_gbl_shutdown = TRUE;
const char *acpi_gbl_sleep_state_names[ACPI_S_STATE_COUNT] = ;
const char *acpi_gbl_lowest_dstate_names[ACPI_NUM_sx_w_METHODS] = ;
const char *acpi_gbl_highest_dstate_names[ACPI_NUM_sx_d_METHODS] = ;
const struct acpi_predefined_names acpi_gbl_pre_defined_names[] = ;
struct acpi_bit_register_info acpi_gbl_bit_register_info[ACPI_NUM_BITREG] = ;
struct acpi_fixed_event_info acpi_gbl_fixed_event_info[ACPI_NUM_FIXED_EVENTS] = ;
acpi_status acpi_ut_init_globals(void)
ACPI_EXPORT_SYMBOL(acpi_gbl_FADT)
ACPI_EXPORT_SYMBOL(acpi_dbg_level)
ACPI_EXPORT_SYMBOL(acpi_dbg_layer)
ACPI_EXPORT_SYMBOL(acpi_current_gpe_count)
