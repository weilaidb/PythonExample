#define _COMPONENT          ACPI_RESOURCES
ACPI_MODULE_NAME("rsdump")
#if defined(ACPI_DEBUG_OUTPUT) || defined(ACPI_DEBUGGER)
static void acpi_rs_out_string(char *title, char *value);
static void acpi_rs_out_integer8(char *title, u8 value);
static void acpi_rs_out_integer16(char *title, u16 value);
static void acpi_rs_out_integer32(char *title, u32 value);
static void acpi_rs_out_integer64(char *title, u64 value);
static void acpi_rs_out_title(char *title);
static void acpi_rs_dump_byte_list(u16 length, u8 * data);
static void acpi_rs_dump_dword_list(u8 length, u32 * data);
static void acpi_rs_dump_short_byte_list(u8 length, u8 * data);
static void
acpi_rs_dump_resource_source(struct acpi_resource_source *resource_source);
static void acpi_rs_dump_address_common(union acpi_resource_data *resource);
static void
acpi_rs_dump_descriptor(void *resource, struct acpi_rsdump_info *table);
#define ACPI_RSD_OFFSET(f)          (u8) ACPI_OFFSET (union acpi_resource_data,f)
#define ACPI_PRT_OFFSET(f)          (u8) ACPI_OFFSET (struct acpi_pci_routing_table,f)
#define ACPI_RSD_TABLE_SIZE(name)   (sizeof(name) / sizeof (struct acpi_rsdump_info))
struct acpi_rsdump_info acpi_rs_dump_irq[7] = ;
struct acpi_rsdump_info acpi_rs_dump_dma[6] = ;
struct acpi_rsdump_info acpi_rs_dump_start_dpf[4] = ;
struct acpi_rsdump_info acpi_rs_dump_end_dpf[1] = ;
struct acpi_rsdump_info acpi_rs_dump_io[6] = ;
struct acpi_rsdump_info acpi_rs_dump_fixed_io[3] = ;
struct acpi_rsdump_info acpi_rs_dump_vendor[3] = ;
struct acpi_rsdump_info acpi_rs_dump_end_tag[1] = ;
struct acpi_rsdump_info acpi_rs_dump_memory24[6] = ;
struct acpi_rsdump_info acpi_rs_dump_memory32[6] = ;
struct acpi_rsdump_info acpi_rs_dump_fixed_memory32[4] = ;
struct acpi_rsdump_info acpi_rs_dump_address16[8] = ;
struct acpi_rsdump_info acpi_rs_dump_address32[8] = ;
struct acpi_rsdump_info acpi_rs_dump_address64[8] = ;
struct acpi_rsdump_info acpi_rs_dump_ext_address64[8] = ;
struct acpi_rsdump_info acpi_rs_dump_ext_irq[8] = ;
struct acpi_rsdump_info acpi_rs_dump_generic_reg[6] = ;
static struct acpi_rsdump_info acpi_rs_dump_general_flags[5] = ;
static struct acpi_rsdump_info acpi_rs_dump_memory_flags[5] = ;
static struct acpi_rsdump_info acpi_rs_dump_io_flags[4] = ;
static struct acpi_rsdump_info acpi_rs_dump_prt[5] = ;
static void
acpi_rs_dump_descriptor(void *resource, struct acpi_rsdump_info *table)
static void
acpi_rs_dump_resource_source(struct acpi_resource_source *resource_source)
static void acpi_rs_dump_address_common(union acpi_resource_data *resource)
void acpi_rs_dump_resource_list(struct acpi_resource *resource_list)
void acpi_rs_dump_irq_list(u8 * route_table)
static void acpi_rs_out_string(char *title, char *value)
static void acpi_rs_out_integer8(char *title, u8 value)
static void acpi_rs_out_integer16(char *title, u16 value)
static void acpi_rs_out_integer32(char *title, u32 value)
static void acpi_rs_out_integer64(char *title, u64 value)
static void acpi_rs_out_title(char *title)
static void acpi_rs_dump_byte_list(u16 length, u8 * data)
static void acpi_rs_dump_short_byte_list(u8 length, u8 * data)
static void acpi_rs_dump_dword_list(u8 length, u32 * data)
