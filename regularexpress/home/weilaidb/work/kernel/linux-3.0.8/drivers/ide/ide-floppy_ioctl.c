static DEFINE_MUTEX(ide_floppy_ioctl_mutex);
static int ide_floppy_get_format_capacities(ide_drive_t *drive,
struct ide_atapi_pc *pc,
int __user *arg)
static void ide_floppy_create_format_unit_cmd(struct ide_atapi_pc *pc,
u8 *buf, int b, int l,
int flags)
static int ide_floppy_get_sfrp_bit(ide_drive_t *drive, struct ide_atapi_pc *pc)
static int ide_floppy_format_unit(ide_drive_t *drive, struct ide_atapi_pc *pc,
int __user *arg)
static int ide_floppy_get_format_progress(ide_drive_t *drive,
struct ide_atapi_pc *pc,
int __user *arg)
static int ide_floppy_lockdoor(ide_drive_t *drive, struct ide_atapi_pc *pc,
unsigned long arg, unsigned int cmd)
static int ide_floppy_format_ioctl(ide_drive_t *drive, struct ide_atapi_pc *pc,
fmode_t mode, unsigned int cmd,
void __user *argp)
int ide_floppy_ioctl(ide_drive_t *drive, struct block_device *bdev,
fmode_t mode, unsigned int cmd, unsigned long arg)
