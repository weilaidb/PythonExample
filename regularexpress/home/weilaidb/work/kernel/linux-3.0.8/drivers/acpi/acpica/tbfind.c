#define _COMPONENT          ACPI_TABLES
ACPI_MODULE_NAME("tbfind")
acpi_status
acpi_tb_find_table(char *signature,
char *oem_id, char *oem_table_id, u32 *table_index)
