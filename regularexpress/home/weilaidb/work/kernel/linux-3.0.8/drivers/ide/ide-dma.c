static const struct drive_list_entry drive_whitelist[] = ;
static const struct drive_list_entry drive_blacklist[] = ;
ide_startstop_t ide_dma_intr(ide_drive_t *drive)
int ide_dma_good_drive(ide_drive_t *drive)
static int ide_dma_map_sg(ide_drive_t *drive, struct ide_cmd *cmd)
void ide_dma_unmap_sg(ide_drive_t *drive, struct ide_cmd *cmd)
EXPORT_SYMBOL_GPL(ide_dma_unmap_sg);
void ide_dma_off_quietly(ide_drive_t *drive)
EXPORT_SYMBOL(ide_dma_off_quietly);
void ide_dma_off(ide_drive_t *drive)
EXPORT_SYMBOL(ide_dma_off);
void ide_dma_on(ide_drive_t *drive)
int __ide_dma_bad_drive(ide_drive_t *drive)
EXPORT_SYMBOL(__ide_dma_bad_drive);
static const u8 xfer_mode_bases[] = ;
static unsigned int ide_get_mode_mask(ide_drive_t *drive, u8 base, u8 req_mode)
u8 ide_find_dma_mode(ide_drive_t *drive, u8 req_mode)
static int ide_tune_dma(ide_drive_t *drive)
static int ide_dma_check(ide_drive_t *drive)
int ide_set_dma(ide_drive_t *drive)
void ide_check_dma_crc(ide_drive_t *drive)
void ide_dma_lost_irq(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_dma_lost_irq);
ide_startstop_t ide_dma_timeout_retry(ide_drive_t *drive, int error)
void ide_release_dma_engine(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_release_dma_engine);
int ide_allocate_dma_engine(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_allocate_dma_engine);
int ide_dma_prepare(ide_drive_t *drive, struct ide_cmd *cmd)
