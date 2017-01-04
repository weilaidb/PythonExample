#define __ACTBL_H__
#define ACPI_SIG_DSDT           "DSDT"
#define ACPI_SIG_FADT           "FACP"
#define ACPI_SIG_FACS           "FACS"
#define ACPI_SIG_PSDT           "PSDT"
#define ACPI_SIG_RSDP           "RSD PTR "
#define ACPI_SIG_RSDT           "RSDT"
#define ACPI_SIG_XSDT           "XSDT"
#define ACPI_SIG_SSDT           "SSDT"
#define ACPI_RSDP_NAME          "RSDP"
struct acpi_table_header ;
struct acpi_generic_address ;
struct acpi_table_rsdp ;
#define ACPI_RSDP_REV0_SIZE     20
struct acpi_table_rsdt ;
struct acpi_table_xsdt ;
struct acpi_table_facs ;
#define ACPI_GLOCK_PENDING          (1)
#define ACPI_GLOCK_OWNED            (1<<1)
#define ACPI_FACS_S4_BIOS_PRESENT   (1)
#define ACPI_FACS_64BIT_WAKE        (1<<1)
#define ACPI_FACS_64BIT_ENVIRONMENT (1)
struct acpi_table_fadt ;
#define ACPI_FADT_LEGACY_DEVICES    (1)
#define ACPI_FADT_8042              (1<<1)
#define ACPI_FADT_NO_VGA            (1<<2)
#define ACPI_FADT_NO_MSI            (1<<3)
#define ACPI_FADT_NO_ASPM           (1<<4)
#define FADT2_REVISION_ID               3
#define ACPI_FADT_WBINVD            (1)
#define ACPI_FADT_WBINVD_FLUSH      (1<<1)
#define ACPI_FADT_C1_SUPPORTED      (1<<2)
#define ACPI_FADT_C2_MP_SUPPORTED   (1<<3)
#define ACPI_FADT_POWER_BUTTON      (1<<4)
#define ACPI_FADT_SLEEP_BUTTON      (1<<5)
#define ACPI_FADT_FIXED_RTC         (1<<6)
#define ACPI_FADT_S4_RTC_WAKE       (1<<7)
#define ACPI_FADT_32BIT_TIMER       (1<<8)
#define ACPI_FADT_DOCKING_SUPPORTED (1<<9)
#define ACPI_FADT_RESET_REGISTER    (1<<10)
#define ACPI_FADT_SEALED_CASE       (1<<11)
#define ACPI_FADT_HEADLESS          (1<<12)
#define ACPI_FADT_SLEEP_TYPE        (1<<13)
#define ACPI_FADT_PCI_EXPRESS_WAKE  (1<<14)
#define ACPI_FADT_PLATFORM_CLOCK    (1<<15)
#define ACPI_FADT_S4_RTC_VALID      (1<<16)
#define ACPI_FADT_REMOTE_POWER_ON   (1<<17)
#define ACPI_FADT_APIC_CLUSTER      (1<<18)
#define ACPI_FADT_APIC_PHYSICAL     (1<<19)
enum acpi_prefered_pm_profiles ;
#define ACPI_FADT_OFFSET(f)             (u8) ACPI_OFFSET (struct acpi_table_fadt, f)
union acpi_name_union ;
struct acpi_table_desc ;
#define ACPI_TABLE_ORIGIN_UNKNOWN       (0)
#define ACPI_TABLE_ORIGIN_MAPPED        (1)
#define ACPI_TABLE_ORIGIN_ALLOCATED     (2)
#define ACPI_TABLE_ORIGIN_OVERRIDE      (4)
#define ACPI_TABLE_ORIGIN_MASK          (7)
#define ACPI_TABLE_IS_LOADED            (8)
#define ACPI_FADT_V1_SIZE       (u32) (ACPI_FADT_OFFSET (flags) + 4)
#define ACPI_FADT_V2_SIZE       (u32) (ACPI_FADT_OFFSET (reserved4[0]) + 3)
#define ACPI_FADT_V3_SIZE       (u32) (sizeof (struct acpi_table_fadt))
