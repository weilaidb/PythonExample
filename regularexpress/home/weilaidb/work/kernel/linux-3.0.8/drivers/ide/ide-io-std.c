#if defined(CONFIG_ARM) || defined(CONFIG_M68K) || defined(CONFIG_MIPS) || \
defined(CONFIG_PARISC) || defined(CONFIG_PPC) || defined(CONFIG_SPARC)
static u8 ide_inb(unsigned long port)
static void ide_outb(u8 val, unsigned long port)
static u8 ide_mm_inb(unsigned long port)
static void ide_mm_outb(u8 value, unsigned long port)
void ide_exec_command(ide_hwif_t *hwif, u8 cmd)
EXPORT_SYMBOL_GPL(ide_exec_command);
u8 ide_read_status(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_read_status);
u8 ide_read_altstatus(ide_hwif_t *hwif)
EXPORT_SYMBOL_GPL(ide_read_altstatus);
void ide_write_devctl(ide_hwif_t *hwif, u8 ctl)
EXPORT_SYMBOL_GPL(ide_write_devctl);
void ide_dev_select(ide_drive_t *drive)
EXPORT_SYMBOL_GPL(ide_dev_select);
void ide_tf_load(ide_drive_t *drive, struct ide_taskfile *tf, u8 valid)
EXPORT_SYMBOL_GPL(ide_tf_load);
void ide_tf_read(ide_drive_t *drive, struct ide_taskfile *tf, u8 valid)
EXPORT_SYMBOL_GPL(ide_tf_read);
static void ata_vlb_sync(unsigned long port)
void ide_input_data(ide_drive_t *drive, struct ide_cmd *cmd, void *buf,
unsigned int len)
EXPORT_SYMBOL_GPL(ide_input_data);
void ide_output_data(ide_drive_t *drive, struct ide_cmd *cmd, void *buf,
unsigned int len)
EXPORT_SYMBOL_GPL(ide_output_data);
const struct ide_tp_ops default_tp_ops = ;
