#define _ASM_IA64_SN_ACPI_H
extern int sn_acpi_rev;
#define SN_ACPI_BASE_SUPPORT()   (sn_acpi_rev >= 0x20101)
