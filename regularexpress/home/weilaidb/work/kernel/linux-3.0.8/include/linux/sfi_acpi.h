#define _LINUX_SFI_ACPI_H
extern int sfi_acpi_table_parse(char *signature, char *oem_id,
char *oem_table_id,
int (*handler)(struct acpi_table_header *));
static inline int acpi_sfi_table_parse(char *signature,
int (*handler)(struct acpi_table_header *))
static inline int sfi_acpi_table_parse(char *signature, char *oem_id,
char *oem_table_id,
int (*handler)(struct acpi_table_header *))
static inline int acpi_sfi_table_parse(char *signature,
int (*handler)(struct acpi_table_header *))
