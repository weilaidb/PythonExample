#define _COMPONENT          ACPI_UTILITIES
ACPI_MODULE_NAME("utmath")
typedef struct uint64_struct  uint64_struct;
typedef union uint64_overlay  uint64_overlay;
acpi_status
acpi_ut_short_divide(u64 dividend,
u32 divisor, u64 *out_quotient, u32 *out_remainder)
acpi_status
acpi_ut_divide(u64 in_dividend,
u64 in_divisor, u64 *out_quotient, u64 *out_remainder)
acpi_status
acpi_ut_short_divide(u64 in_dividend,
u32 divisor, u64 *out_quotient, u32 *out_remainder)
acpi_status
acpi_ut_divide(u64 in_dividend,
u64 in_divisor, u64 *out_quotient, u64 *out_remainder)
