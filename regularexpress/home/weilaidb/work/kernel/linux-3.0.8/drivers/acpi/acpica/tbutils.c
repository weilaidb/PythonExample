#define _COMPONENT          ACPI_TABLES
ACPI_MODULE_NAME("tbutils")
static void acpi_tb_fix_string(char *string, acpi_size length);
static void
acpi_tb_cleanup_table_header(struct acpi_table_header *out_header,
struct acpi_table_header *header);
static acpi_physical_address
acpi_tb_get_root_table_entry(u8 *table_entry, u32 table_entry_size);
static acpi_status
acpi_tb_check_xsdt(acpi_physical_address address)
acpi_status acpi_tb_initialize_facs(void)
u8 acpi_tb_tables_loaded(void)
static void acpi_tb_fix_string(char *string, acpi_size length)
static void
acpi_tb_cleanup_table_header(struct acpi_table_header *out_header,
struct acpi_table_header *header)
void
acpi_tb_print_table_header(acpi_physical_address address,
struct acpi_table_header *header)
acpi_status acpi_tb_verify_checksum(struct acpi_table_header *table, u32 length)
u8 acpi_tb_checksum(u8 *buffer, u32 length)
void acpi_tb_check_dsdt_header(void)
struct acpi_table_header *acpi_tb_copy_dsdt(u32 table_index)
void
acpi_tb_install_table(acpi_physical_address address,
char *signature, u32 table_index)
static acpi_physical_address
acpi_tb_get_root_table_entry(u8 *table_entry, u32 table_entry_size)
acpi_status __init
acpi_tb_parse_root_table(acpi_physical_address rsdp_address)
