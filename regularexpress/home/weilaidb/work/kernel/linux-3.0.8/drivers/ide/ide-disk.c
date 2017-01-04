static const u8 ide_rw_cmds[] = ;
static void ide_tf_set_cmd(ide_drive_t *drive, struct ide_cmd *cmd, u8 dma)
static ide_startstop_t __ide_do_rw_disk(ide_drive_t *drive, struct request *rq,
sector_t block)
static ide_startstop_t ide_do_rw_disk(ide_drive_t *drive, struct request *rq,
sector_t block)
static u64 idedisk_read_native_max_address(ide_drive_t *drive, int lba48)
static u64 idedisk_set_max_address(ide_drive_t *drive, u64 addr_req, int lba48)
static unsigned long long sectors_to_MB(unsigned long long n)
static const struct drive_list_entry hpa_list[] = ;
static u64 ide_disk_hpa_get_native_capacity(ide_drive_t *drive, int lba48)
static u64 ide_disk_hpa_set_capacity(ide_drive_t *drive, u64 set_max, int lba48)
static void idedisk_check_hpa(ide_drive_t *drive)
static int ide_disk_get_capacity(ide_drive_t *drive)
static void ide_disk_unlock_native_capacity(ide_drive_t *drive)
static int idedisk_prep_fn(struct request_queue *q, struct request *rq)
ide_devset_get(multcount, mult_count);
static int set_multcount(ide_drive_t *drive, int arg)
ide_devset_get_flag(nowerr, IDE_DFLAG_NOWERR);
static int set_nowerr(ide_drive_t *drive, int arg)
static int ide_do_setfeature(ide_drive_t *drive, u8 feature, u8 nsect)
static void update_flush(ide_drive_t *drive)
ide_devset_get_flag(wcache, IDE_DFLAG_WCACHE);
static int set_wcache(ide_drive_t *drive, int arg)
static int do_idedisk_flushcache(ide_drive_t *drive)
ide_devset_get(acoustic, acoustic);
static int set_acoustic(ide_drive_t *drive, int arg)
ide_devset_get_flag(addressing, IDE_DFLAG_LBA48);
static int set_addressing(ide_drive_t *drive, int arg)
ide_ext_devset_rw(acoustic, acoustic);
ide_ext_devset_rw(address, addressing);
ide_ext_devset_rw(multcount, multcount);
ide_ext_devset_rw(wcache, wcache);
ide_ext_devset_rw_sync(nowerr, nowerr);
static int ide_disk_check(ide_drive_t *drive, const char *s)
static void ide_disk_setup(ide_drive_t *drive)
static void ide_disk_flush(ide_drive_t *drive)
static int ide_disk_init_media(ide_drive_t *drive, struct gendisk *disk)
static int ide_disk_set_doorlock(ide_drive_t *drive, struct gendisk *disk,
int on)
const struct ide_disk_ops ide_ata_disk_ops = ;
