#define __ACTABLES_H__
acpi_status acpi_allocate_root_table(u32 initial_table_count);
void acpi_tb_parse_fadt(u32 table_index);
void acpi_tb_create_local_fadt(struct acpi_table_header *table, u32 length);
acpi_status
acpi_tb_find_table(char *signature,
char *oem_id, char *oem_table_id, u32 *table_index);
acpi_status acpi_tb_resize_root_table_list(void);
acpi_status acpi_tb_verify_table(struct acpi_table_desc *table_desc);
acpi_status
acpi_tb_add_table(struct acpi_table_desc *table_desc, u32 *table_index);
acpi_status
acpi_tb_store_table(acpi_physical_address address,
struct acpi_table_header *table,
u32 length, u8 flags, u32 *table_index);
void acpi_tb_delete_table(struct acpi_table_desc *table_desc);
void acpi_tb_terminate(void);
acpi_status acpi_tb_delete_namespace_by_owner(u32 table_index);
acpi_status acpi_tb_allocate_owner_id(u32 table_index);
acpi_status acpi_tb_release_owner_id(u32 table_index);
acpi_status acpi_tb_get_owner_id(u32 table_index, acpi_owner_id *owner_id);
u8 acpi_tb_is_table_loaded(u32 table_index);
void acpi_tb_set_table_loaded_flag(u32 table_index, u8 is_loaded);
acpi_status acpi_tb_initialize_facs(void);
u8 acpi_tb_tables_loaded(void);
void
acpi_tb_print_table_header(acpi_physical_address address,
struct acpi_table_header *header);
u8 acpi_tb_checksum(u8 *buffer, u32 length);
acpi_status
acpi_tb_verify_checksum(struct acpi_table_header *table, u32 length);
void acpi_tb_check_dsdt_header(void);
struct acpi_table_header *acpi_tb_copy_dsdt(u32 table_index);
void
acpi_tb_install_table(acpi_physical_address address,
char *signature, u32 table_index);
acpi_status acpi_tb_parse_root_table(acpi_physical_address rsdp_address);
