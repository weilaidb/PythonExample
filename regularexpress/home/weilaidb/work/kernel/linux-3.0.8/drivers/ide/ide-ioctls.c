static const struct ide_ioctl_devset ide_ioctl_settings[] = ;
int ide_setting_ioctl(ide_drive_t *drive, struct block_device *bdev,
unsigned int cmd, unsigned long arg,
const struct ide_ioctl_devset *s)
EXPORT_SYMBOL_GPL(ide_setting_ioctl);
static int ide_get_identity_ioctl(ide_drive_t *drive, unsigned int cmd,
unsigned long arg)
static int ide_get_nice_ioctl(ide_drive_t *drive, unsigned long arg)
static int ide_set_nice_ioctl(ide_drive_t *drive, unsigned long arg)
static int ide_cmd_ioctl(ide_drive_t *drive, unsigned long arg)
static int ide_task_ioctl(ide_drive_t *drive, unsigned long arg)
static int generic_drive_reset(ide_drive_t *drive)
int generic_ide_ioctl(ide_drive_t *drive, struct block_device *bdev,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(generic_ide_ioctl);
