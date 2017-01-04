static const char *udma_str[] =
;
static const char *mwdma_str[] =
;
static const char *swdma_str[] =
;
static const char *pio_str[] =
;
const char *ide_xfer_verbose(u8 mode)
EXPORT_SYMBOL(ide_xfer_verbose);
static u8 ide_get_best_pio_mode(ide_drive_t *drive, u8 mode_wanted, u8 max_mode)
int ide_pio_need_iordy(ide_drive_t *drive, const u8 pio)
EXPORT_SYMBOL_GPL(ide_pio_need_iordy);
int ide_set_pio_mode(ide_drive_t *drive, const u8 mode)
int ide_set_dma_mode(ide_drive_t *drive, const u8 mode)
EXPORT_SYMBOL_GPL(ide_set_dma_mode);
void ide_set_pio(ide_drive_t *drive, u8 req_pio)
EXPORT_SYMBOL_GPL(ide_set_pio);
static u8 ide_rate_filter(ide_drive_t *drive, u8 speed)
int ide_set_xfer_rate(ide_drive_t *drive, u8 rate)
