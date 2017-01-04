void SELECT_MASK(ide_drive_t *drive, int mask)
u8 ide_read_error(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_read_error);
void ide_fix_driveid(u16 *id)
void ide_fixstring(u8 *s, const int bytecount, const int byteswap)
EXPORT_SYMBOL(ide_fixstring);
int __ide_wait_stat(ide_drive_t *drive, u8 good, u8 bad,
unsigned long timeout, u8 *rstat)
int ide_wait_stat(ide_startstop_t *startstop, ide_drive_t *drive, u8 good,
u8 bad, unsigned long timeout)
EXPORT_SYMBOL(ide_wait_stat);
int ide_in_drive_list(u16 *id, const struct drive_list_entry *table)
EXPORT_SYMBOL_GPL(ide_in_drive_list);
static const struct drive_list_entry ivb_list[] = ;
u8 eighty_ninty_three(ide_drive_t *drive)
static const char *nien_quirk_list[] = ;
void ide_check_nien_quirk_list(ide_drive_t *drive)
int ide_driveid_update(ide_drive_t *drive)
int ide_config_drive_speed(ide_drive_t *drive, u8 speed)
void __ide_set_handler(ide_drive_t *drive, ide_handler_t *handler,
unsigned int timeout)
void ide_set_handler(ide_drive_t *drive, ide_handler_t *handler,
unsigned int timeout)
EXPORT_SYMBOL(ide_set_handler);
void ide_execute_command(ide_drive_t *drive, struct ide_cmd *cmd,
ide_handler_t *handler, unsigned timeout)
int ide_wait_not_busy(ide_hwif_t *hwif, unsigned long timeout)
