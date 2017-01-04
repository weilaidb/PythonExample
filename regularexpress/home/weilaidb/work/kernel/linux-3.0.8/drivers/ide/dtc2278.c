#define DRV_NAME "dtc2278"
#undef ALWAYS_SET_DTC2278_PIO_MODE
static void sub22 (char b, char c)
static DEFINE_SPINLOCK(dtc2278_lock);
static void dtc2278_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops dtc2278_port_ops = ;
static const struct ide_port_info dtc2278_port_info __initdata = ;
static int __init dtc2278_probe(void)
static int probe_dtc2278;
module_param_named(probe, probe_dtc2278, bool, 0);
MODULE_PARM_DESC(probe, "probe for DTC2278xx chipsets");
static int __init dtc2278_init(void)
module_init(dtc2278_init);
MODULE_AUTHOR("See Local File");
MODULE_DESCRIPTION("support of DTC-2278 VLB IDE chipsets");
MODULE_LICENSE("GPL");
