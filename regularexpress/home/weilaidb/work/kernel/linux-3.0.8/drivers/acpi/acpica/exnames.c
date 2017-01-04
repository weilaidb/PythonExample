#define _COMPONENT          ACPI_EXECUTER
ACPI_MODULE_NAME("exnames")
static char *acpi_ex_allocate_name_string(u32 prefix_count, u32 num_name_segs);
static acpi_status
acpi_ex_name_segment(u8 ** in_aml_address, char *name_string);
static char *acpi_ex_allocate_name_string(u32 prefix_count, u32 num_name_segs)
static acpi_status acpi_ex_name_segment(u8 ** in_aml_address, char *name_string)
acpi_status
acpi_ex_get_name_string(acpi_object_type data_type,
u8 * in_aml_address,
char **out_name_string, u32 * out_name_length)
