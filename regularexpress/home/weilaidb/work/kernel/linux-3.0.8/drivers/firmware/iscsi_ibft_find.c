struct acpi_table_ibft *ibft_addr;
EXPORT_SYMBOL_GPL(ibft_addr);
static const struct  ibft_signs[] = ;
#define IBFT_SIGN_LEN 4
#define IBFT_START 0x80000
#define IBFT_END 0x100000
#define VGA_MEM 0xA0000
#define VGA_SIZE 0x20000
static int __init acpi_find_ibft(struct acpi_table_header *header)
static int __init find_ibft_in_mem(void)
unsigned long __init find_ibft_region(unsigned long *sizep)
