#define _COMPONENT          ACPI_TABLES
ACPI_MODULE_NAME("tbfadt")
static ACPI_INLINE void
acpi_tb_init_generic_address(struct acpi_generic_address *generic_address,
u8 space_id, u8 byte_width, u64 address);
static void acpi_tb_convert_fadt(void);
static void acpi_tb_validate_fadt(void);
static void acpi_tb_setup_fadt_registers(void);
typedef struct acpi_fadt_info  acpi_fadt_info;
#define ACPI_FADT_REQUIRED          1
#define ACPI_FADT_SEPARATE_LENGTH   2
static struct acpi_fadt_info fadt_info_table[] = ;
#define ACPI_FADT_INFO_ENTRIES \
(sizeof (fadt_info_table) / sizeof (struct acpi_fadt_info))
typedef struct acpi_fadt_pm_info  acpi_fadt_pm_info;
static struct acpi_fadt_pm_info fadt_pm_info_table[] = ;
#define ACPI_FADT_PM_INFO_ENTRIES \
(sizeof (fadt_pm_info_table) / sizeof (struct acpi_fadt_pm_info))
static ACPI_INLINE void
acpi_tb_init_generic_address(struct acpi_generic_address *generic_address,
u8 space_id, u8 byte_width, u64 address)
void acpi_tb_parse_fadt(u32 table_index)
void acpi_tb_create_local_fadt(struct acpi_table_header *table, u32 length)
static void acpi_tb_convert_fadt(void)
static void acpi_tb_validate_fadt(void)
static void acpi_tb_setup_fadt_registers(void)
