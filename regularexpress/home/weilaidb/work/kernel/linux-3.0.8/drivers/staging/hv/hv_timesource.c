#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define HV_CLOCK_SHIFT	22
static cycle_t read_hv_clock(struct clocksource *arg)
static struct clocksource hyperv_cs = ;
static const struct dmi_system_id __initconst
hv_timesource_dmi_table[] __maybe_unused  = ;
MODULE_DEVICE_TABLE(dmi, hv_timesource_dmi_table);
static const struct pci_device_id __initconst
hv_timesource_pci_table[] __maybe_unused = ;
MODULE_DEVICE_TABLE(pci, hv_timesource_pci_table);
static int __init init_hv_clocksource(void)
module_init(init_hv_clocksource);
MODULE_DESCRIPTION("HyperV based clocksource");
MODULE_AUTHOR("K. Y. Srinivasan <ksrinivasan@novell.com>");
MODULE_LICENSE("GPL");
