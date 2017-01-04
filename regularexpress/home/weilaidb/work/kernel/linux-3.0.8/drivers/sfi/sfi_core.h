struct sfi_table_key;
struct sfi_table_attr ;
#define SFI_ANY_KEY
extern int __init sfi_acpi_init(void);
extern  struct sfi_table_header *sfi_check_table(u64 paddr,
struct sfi_table_key *key);
struct sfi_table_header *sfi_get_table(struct sfi_table_key *key);
extern void sfi_put_table(struct sfi_table_header *table);
extern struct sfi_table_attr __init *sfi_sysfs_install_table(u64 pa);
extern void __init sfi_acpi_sysfs_init(void);
