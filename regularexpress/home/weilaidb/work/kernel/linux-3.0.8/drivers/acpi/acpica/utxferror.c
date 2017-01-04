#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utxferror")
extern FILE *acpi_gbl_output_file;
#define ACPI_MSG_REDIRECT_BEGIN \
FILE                            *output_file = acpi_gbl_output_file; \
acpi_os_redirect_output (stderr);
#define ACPI_MSG_REDIRECT_END \
acpi_os_redirect_output (output_file);
#define ACPI_MSG_REDIRECT_BEGIN
#define ACPI_MSG_REDIRECT_END
#define ACPI_MSG_ERROR          "ACPI Error: "
#define ACPI_MSG_EXCEPTION      "ACPI Exception: "
#define ACPI_MSG_WARNING        "ACPI Warning: "
#define ACPI_MSG_INFO           "ACPI: "
#define ACPI_MSG_SUFFIX \
acpi_os_printf (" (%8.8X/%s-%u)\n", ACPI_CA_VERSION, module_name, line_number)
void ACPI_INTERNAL_VAR_XFACE
acpi_error(const char *module_name, u32 line_number, const char *format, ...)
ACPI_EXPORT_SYMBOL(acpi_error)
void ACPI_INTERNAL_VAR_XFACE
acpi_exception(const char *module_name,
u32 line_number, acpi_status status, const char *format, ...)
ACPI_EXPORT_SYMBOL(acpi_exception)
void ACPI_INTERNAL_VAR_XFACE
acpi_warning(const char *module_name, u32 line_number, const char *format, ...)
ACPI_EXPORT_SYMBOL(acpi_warning)
void ACPI_INTERNAL_VAR_XFACE
acpi_info(const char *module_name, u32 line_number, const char *format, ...)
ACPI_EXPORT_SYMBOL(acpi_info)
#if !defined (ACPI_NO_ERROR_MESSAGES) && !defined (ACPI_BIN_APP)
void ACPI_INTERNAL_VAR_XFACE
acpi_ut_predefined_warning(const char *module_name,
u32 line_number,
char *pathname,
u8 node_flags, const char *format, ...)
void ACPI_INTERNAL_VAR_XFACE
acpi_ut_predefined_info(const char *module_name,
u32 line_number,
char *pathname, u8 node_flags, const char *format, ...)
void
acpi_ut_namespace_error(const char *module_name,
u32 line_number,
const char *internal_name, acpi_status lookup_status)
void
acpi_ut_method_error(const char *module_name,
u32 line_number,
const char *message,
struct acpi_namespace_node *prefix_node,
const char *path, acpi_status method_status)
