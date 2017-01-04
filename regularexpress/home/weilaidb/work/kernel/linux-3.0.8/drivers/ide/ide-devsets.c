DEFINE_MUTEX(ide_setting_mtx);
ide_devset_get(io_32bit, io_32bit);
static int set_io_32bit(ide_drive_t *drive, int arg)
ide_devset_get_flag(ksettings, IDE_DFLAG_KEEP_SETTINGS);
static int set_ksettings(ide_drive_t *drive, int arg)
ide_devset_get_flag(using_dma, IDE_DFLAG_USING_DMA);
static int set_using_dma(ide_drive_t *drive, int arg)
static int set_pio_mode_abuse(ide_hwif_t *hwif, u8 req_pio)
static int set_pio_mode(ide_drive_t *drive, int arg)
ide_devset_get_flag(unmaskirq, IDE_DFLAG_UNMASK);
static int set_unmaskirq(ide_drive_t *drive, int arg)
ide_ext_devset_rw_sync(io_32bit, io_32bit);
ide_ext_devset_rw_sync(keepsettings, ksettings);
ide_ext_devset_rw_sync(unmaskirq, unmaskirq);
ide_ext_devset_rw_sync(using_dma, using_dma);
__IDE_DEVSET(pio_mode, DS_SYNC, NULL, set_pio_mode);
int ide_devset_execute(ide_drive_t *drive, const struct ide_devset *setting,
int arg)
ide_startstop_t ide_do_devset(ide_drive_t *drive, struct request *rq)
