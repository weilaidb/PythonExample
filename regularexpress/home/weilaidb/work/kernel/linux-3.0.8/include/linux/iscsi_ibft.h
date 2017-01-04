#define ISCSI_IBFT_H
extern struct acpi_table_ibft *ibft_addr;
unsigned long find_ibft_region(unsigned long *sizep);
static inline unsigned long find_ibft_region(unsigned long *sizep)
