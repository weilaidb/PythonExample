#define _ACPI_PMTMR_H_
#define PMTMR_TICKS_PER_SEC 3579545
#define ACPI_PM_MASK CLOCKSOURCE_MASK(24)
#define ACPI_PM_OVRRUN	(1<<24)
extern u32 acpi_pm_read_verified(void);
extern u32 pmtmr_ioport;
static inline u32 acpi_pm_read_early(void)
static inline u32 acpi_pm_read_early(void)
