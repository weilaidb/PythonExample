static DEFINE_MUTEX(ide_disk_ioctl_mutex);
static const struct ide_ioctl_devset ide_disk_ioctl_settings[] = ;
int ide_disk_ioctl(ide_drive_t *drive, struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
