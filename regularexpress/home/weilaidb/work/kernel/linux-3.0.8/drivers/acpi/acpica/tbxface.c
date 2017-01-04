#define _COMPONENT          ACPI_TABLES
ACPI_MODULE_NAME("tbxface")
static acpi_status acpi_tb_load_namespace(void);
static int no_auto_ssdt;
acpi_status acpi_allocate_root_table(u32 initial_table_count)
acpi_status __init
acpi_initialize_tables(struct acpi_table_desc * initial_table_array,
u32 initial_table_count, u8 allow_resize)
acpi_status acpi_reallocate_root_table(void)
acpi_status acpi_load_table(struct acpi_table_header *table_ptr)
ACPI_EXPORT_SYMBOL(acpi_load_table)
acpi_status
acpi_get_table_header(char *signature,
u32 instance, struct acpi_table_header *out_table_header)
ACPI_EXPORT_SYMBOL(acpi_get_table_header)
acpi_status acpi_unload_table_id(acpi_owner_id id)
ACPI_EXPORT_SYMBOL(acpi_unload_table_id)
acpi_status
acpi_get_table_with_size(char *signature,
u32 instance, struct acpi_table_header **out_table,
acpi_size *tbl_size)
acpi_status
acpi_get_table(char *signature,
u32 instance, struct acpi_table_header **out_table)
ACPI_EXPORT_SYMBOL(acpi_get_table)
acpi_status
acpi_get_table_by_index(u32 table_index, struct acpi_table_header **table)
ACPI_EXPORT_SYMBOL(acpi_get_table_by_index)
static acpi_status acpi_tb_load_namespace(void)
acpi_status acpi_load_tables(void)
ACPI_EXPORT_SYMBOL(acpi_load_tables)
acpi_status
acpi_install_table_handler(acpi_tbl_handler handler, void *context)
ACPI_EXPORT_SYMBOL(acpi_install_table_handler)
acpi_status acpi_remove_table_handler(acpi_tbl_handler handler)
ACPI_EXPORT_SYMBOL(acpi_remove_table_handler)
static int __init acpi_no_auto_ssdt_setup(char *s)
__setup("acpi_no_auto_ssdt", acpi_no_auto_ssdt_setup);
