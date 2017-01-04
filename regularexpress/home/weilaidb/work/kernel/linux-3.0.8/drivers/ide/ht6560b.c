#define DRV_NAME	"ht6560b"
#define HT6560B_VERSION "v0.08"
#define HT_CONFIG_PORT	  0x3e6
static inline u8 HT_CONFIG(ide_drive_t *drive)
#define HT_CONFIG_DEFAULT 0x1c
#define HT_SECONDARY_IF	  0x01
#define HT_PREFETCH_MODE  0x20
static inline u8 HT_TIMING(ide_drive_t *drive)
#define HT_TIMING_DEFAULT 0xff
static void ht6560b_dev_select(ide_drive_t *drive)
static int __init try_to_init_ht6560b(void)
static u8 ht_pio2timings(ide_drive_t *drive, const u8 pio)
static DEFINE_SPINLOCK(ht6560b_lock);
static void ht_set_prefetch(ide_drive_t *drive, u8 state)
static void ht6560b_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void __init ht6560b_init_dev(ide_drive_t *drive)
static int probe_ht6560b;
module_param_named(probe, probe_ht6560b, bool, 0);
MODULE_PARM_DESC(probe, "probe for HT6560B chipset");
static const struct ide_tp_ops ht6560b_tp_ops = ;
static const struct ide_port_ops ht6560b_port_ops = ;
static const struct ide_port_info ht6560b_port_info __initdata = ;
static int __init ht6560b_init(void)
module_init(ht6560b_init);
MODULE_AUTHOR("See Local File");
MODULE_DESCRIPTION("HT-6560B EIDE-controller support");
MODULE_LICENSE("GPL");
