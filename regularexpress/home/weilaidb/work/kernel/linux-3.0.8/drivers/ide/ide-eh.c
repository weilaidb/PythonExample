static ide_startstop_t ide_ata_error(ide_drive_t *drive, struct request *rq,
u8 stat, u8 err)
static ide_startstop_t ide_atapi_error(ide_drive_t *drive, struct request *rq,
u8 stat, u8 err)
static ide_startstop_t __ide_error(ide_drive_t *drive, struct request *rq,
u8 stat, u8 err)
ide_startstop_t ide_error(ide_drive_t *drive, const char *msg, u8 stat)
EXPORT_SYMBOL_GPL(ide_error);
static inline void ide_complete_drive_reset(ide_drive_t *drive, int err)
static ide_startstop_t do_reset1(ide_drive_t *, int);
static ide_startstop_t atapi_reset_pollfunc(ide_drive_t *drive)
static void ide_reset_report_error(ide_hwif_t *hwif, u8 err)
static ide_startstop_t reset_pollfunc(ide_drive_t *drive)
static void ide_disk_pre_reset(ide_drive_t *drive)
static void pre_reset(ide_drive_t *drive)
static ide_startstop_t do_reset1(ide_drive_t *drive, int do_not_try_atapi)
ide_startstop_t ide_do_reset(ide_drive_t *drive)
EXPORT_SYMBOL(ide_do_reset);
