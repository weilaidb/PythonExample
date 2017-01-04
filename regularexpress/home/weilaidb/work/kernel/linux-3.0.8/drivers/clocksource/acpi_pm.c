u32 pmtmr_ioport __read_mostly;
static inline u32 read_pmtmr(void)
u32 acpi_pm_read_verified(void)
static cycle_t acpi_pm_read(struct clocksource *cs)
static struct clocksource clocksource_acpi_pm = ;
static int __devinitdata acpi_pm_good;
static int __init acpi_pm_good_setup(char *__str)
__setup("acpi_pm_good", acpi_pm_good_setup);
static cycle_t acpi_pm_read_slow(struct clocksource *cs)
static inline void acpi_pm_need_workaround(void)
static void __devinit acpi_pm_check_blacklist(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82371AB_3,
acpi_pm_check_blacklist);
static void __devinit acpi_pm_check_graylist(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82801DB_0,
acpi_pm_check_graylist);
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_SERVERWORKS, PCI_DEVICE_ID_SERVERWORKS_LE,
acpi_pm_check_graylist);
#define PMTMR_EXPECTED_RATE \
((CALIBRATE_LATCH * (PMTMR_TICKS_PER_SEC >> 10)) / (CLOCK_TICK_RATE>>10))
static int verify_pmtmr_rate(void)
#define verify_pmtmr_rate() (0)
#define ACPI_PM_MONOTONICITY_CHECKS 10
#define ACPI_PM_READ_CHECKS 10000
static int __init init_acpi_pm_clocksource(void)
fs_initcall(init_acpi_pm_clocksource);
static int __init parse_pmtmr(char *arg)
__setup("pmtmr=", parse_pmtmr);
