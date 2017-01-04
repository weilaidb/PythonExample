#define DRV_NAME "ide-4drives"
static int probe_4drives;
module_param_named(probe, probe_4drives, bool, 0);
MODULE_PARM_DESC(probe, "probe for generic IDE chipset with 4 drives/port");
static void ide_4drives_init_dev(ide_drive_t *drive)
static const struct ide_port_ops ide_4drives_port_ops = ;
static const struct ide_port_info ide_4drives_port_info = ;
static int __init ide_4drives_init(void)
module_init(ide_4drives_init);
MODULE_AUTHOR("Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("generic IDE chipset with 4 drives/port support");
MODULE_LICENSE("GPL");
