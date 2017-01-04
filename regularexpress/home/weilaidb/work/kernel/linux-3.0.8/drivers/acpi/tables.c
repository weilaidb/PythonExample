#define PREFIX			"ACPI: "
#define ACPI_MAX_TABLES		128
static char *mps_inti_flags_polarity[] = ;
static char *mps_inti_flags_trigger[] = ;
static struct acpi_table_desc initial_tables[ACPI_MAX_TABLES] __initdata;
static int acpi_apic_instance __initdata;
void acpi_table_print_madt_entry(struct acpi_subtable_header *header)
int __init
acpi_table_parse_entries(char *id,
unsigned long table_size,
int entry_id,
acpi_table_entry_handler handler,
unsigned int max_entries)
int __init
acpi_table_parse_madt(enum acpi_madt_type id,
acpi_table_entry_handler handler, unsigned int max_entries)
int __init acpi_table_parse(char *id, acpi_table_handler handler)
static void __init check_multiple_madt(void)
int __init acpi_table_init(void)
static int __init acpi_parse_apic_instance(char *str)
early_param("acpi_apic_instance", acpi_parse_apic_instance);
