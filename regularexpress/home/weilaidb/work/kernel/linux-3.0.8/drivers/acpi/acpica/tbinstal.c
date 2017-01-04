#define _COMPONENT          ACPI_TABLES
ACPI_MODULE_NAME("tbinstal")
acpi_status acpi_tb_verify_table(struct acpi_table_desc *table_desc)
acpi_status
acpi_tb_add_table(struct acpi_table_desc *table_desc, u32 *table_index)
acpi_status acpi_tb_resize_root_table_list(void)
acpi_status
acpi_tb_store_table(acpi_physical_address address,
struct acpi_table_header *table,
u32 length, u8 flags, u32 *table_index)
void acpi_tb_delete_table(struct acpi_table_desc *table_desc)
void acpi_tb_terminate(void)
acpi_status acpi_tb_delete_namespace_by_owner(u32 table_index)
acpi_status acpi_tb_allocate_owner_id(u32 table_index)
acpi_status acpi_tb_release_owner_id(u32 table_index)
acpi_status acpi_tb_get_owner_id(u32 table_index, acpi_owner_id *owner_id)
u8 acpi_tb_is_table_loaded(u32 table_index)
void acpi_tb_set_table_loaded_flag(u32 table_index, u8 is_loaded)
