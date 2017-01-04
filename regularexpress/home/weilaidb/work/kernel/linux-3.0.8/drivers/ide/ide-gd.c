#if !defined(CONFIG_DEBUG_BLOCK_EXT_DEVT)
#define IDE_DISK_MINORS		(1 << PARTN_BITS)
#define IDE_DISK_MINORS		0
#define IDE_GD_VERSION	"1.18"
static DEFINE_MUTEX(ide_gd_mutex);
static unsigned long debug_mask;
module_param(debug_mask, ulong, 0644);
static DEFINE_MUTEX(ide_disk_ref_mutex);
static void ide_disk_release(struct device *);
static struct ide_disk_obj *ide_disk_get(struct gendisk *disk)
static void ide_disk_put(struct ide_disk_obj *idkp)
sector_t ide_gd_capacity(ide_drive_t *drive)
static int ide_gd_probe(ide_drive_t *);
static void ide_gd_remove(ide_drive_t *drive)
static void ide_disk_release(struct device *dev)
static void ide_gd_resume(ide_drive_t *drive)
static const struct dmi_system_id ide_coldreboot_table[] = ;
static void ide_gd_shutdown(ide_drive_t *drive)
{
if (system_state != SYSTEM_POWER_OFF)
static ide_proc_entry_t *ide_disk_proc_entries(ide_drive_t *drive)
static const struct ide_proc_devset *ide_disk_proc_devsets(ide_drive_t *drive)
static ide_startstop_t ide_gd_do_request(ide_drive_t *drive,
struct request *rq, sector_t sector)
static struct ide_driver ide_gd_driver = ;
static int ide_gd_open(struct block_device *bdev, fmode_t mode)
static int ide_gd_unlocked_open(struct block_device *bdev, fmode_t mode)
static int ide_gd_release(struct gendisk *disk, fmode_t mode)
static int ide_gd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static unsigned int ide_gd_check_events(struct gendisk *disk,
unsigned int clearing)
static void ide_gd_unlock_native_capacity(struct gendisk *disk)
static int ide_gd_revalidate_disk(struct gendisk *disk)
static int ide_gd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations ide_gd_ops = ;
static int ide_gd_probe(ide_drive_t *drive)
static int __init ide_gd_init(void)
static void __exit ide_gd_exit(void)
MODULE_ALIAS("ide:*m-disk*");
MODULE_ALIAS("ide-disk");
MODULE_ALIAS("ide:*m-floppy*");
MODULE_ALIAS("ide-floppy");
module_init(ide_gd_init);
module_exit(ide_gd_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("generic ATA/ATAPI disk driver");
