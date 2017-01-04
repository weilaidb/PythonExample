int config_drive_for_dma(ide_drive_t *drive)
u8 ide_dma_sff_read_status(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_dma_sff_read_status);
static void ide_dma_sff_write_status(ide_hwif_t *hwif, u8 val)
void ide_dma_host_set(ide_drive_t *drive, int on)
EXPORT_SYMBOL_GPL(ide_dma_host_set);
int ide_build_dmatable(ide_drive_t *drive, struct ide_cmd *cmd)
EXPORT_SYMBOL_GPL(ide_build_dmatable);
int ide_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
EXPORT_SYMBOL_GPL(ide_dma_setup);
int ide_dma_sff_timer_expiry(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_dma_sff_timer_expiry);
void ide_dma_start(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_dma_start);
int ide_dma_end(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_dma_end);
int ide_dma_test_irq(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_dma_test_irq);
const struct ide_dma_ops sff_dma_ops = ;
EXPORT_SYMBOL_GPL(sff_dma_ops);
