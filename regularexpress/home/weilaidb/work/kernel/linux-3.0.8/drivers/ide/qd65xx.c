#define DRV_NAME "qd65xx"
static int timings[4]=;
static void qd65xx_dev_select(ide_drive_t *drive)
static u8 qd6500_compute_timing (ide_hwif_t *hwif, int active_time, int recovery_time)
static u8 qd6580_compute_timing (int active_time, int recovery_time)
static int qd_find_disk_type (ide_drive_t *drive,
int *active_time, int *recovery_time)
static void qd_set_timing (ide_drive_t *drive, u8 timing)
static void qd6500_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void qd6580_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int __init qd_testreg(int port)
static void __init qd6500_init_dev(ide_drive_t *drive)
static void __init qd6580_init_dev(ide_drive_t *drive)
static const struct ide_tp_ops qd65xx_tp_ops = ;
static const struct ide_port_ops qd6500_port_ops = ;
static const struct ide_port_ops qd6580_port_ops = ;
static const struct ide_port_info qd65xx_port_info __initdata = ;
static int __init qd_probe(int base)
static int probe_qd65xx;
module_param_named(probe, probe_qd65xx, bool, 0);
MODULE_PARM_DESC(probe, "probe for QD65xx chipsets");
static int __init qd65xx_init(void)
module_init(qd65xx_init);
MODULE_AUTHOR("Samuel Thibault");
MODULE_DESCRIPTION("support of qd65xx vlb ide chipset");
MODULE_LICENSE("GPL");
