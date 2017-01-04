void ide_toggle_bounce(ide_drive_t *drive, int on)
u64 ide_get_lba_addr(struct ide_cmd *cmd, int lba48)
EXPORT_SYMBOL_GPL(ide_get_lba_addr);
static void ide_dump_sector(ide_drive_t *drive)
static void ide_dump_ata_error(ide_drive_t *drive, u8 err)
static void ide_dump_atapi_error(ide_drive_t *drive, u8 err)
u8 ide_dump_status(ide_drive_t *drive, const char *msg, u8 stat)
EXPORT_SYMBOL(ide_dump_status);
