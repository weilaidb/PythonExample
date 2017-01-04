#define REALLY_SLOW_IO
#define DRV_NAME "umc8672"
#define UMC_DRIVE0      1
#define UMC_DRIVE1      1
#define UMC_DRIVE2      1
#define UMC_DRIVE3      1
static u8 current_speeds[4] = ;
static const u8 pio_to_umc [5] = ;
static const u8 speedtab [3][12] = ;
static void out_umc(char port, char wert)
static inline u8 in_umc(char port)
static void umc_set_speeds(u8 speeds[])
static void umc_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops umc8672_port_ops = ;
static const struct ide_port_info umc8672_port_info __initdata = ;
static int __init umc8672_probe(void)
static int probe_umc8672;
module_param_named(probe, probe_umc8672, bool, 0);
MODULE_PARM_DESC(probe, "probe for UMC8672 chipset");
static int __init umc8672_init(void)
module_init(umc8672_init);
MODULE_AUTHOR("Wolfram Podien");
MODULE_DESCRIPTION("Support for UMC 8672 IDE chipset");
MODULE_LICENSE("GPL");
