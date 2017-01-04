void ide_tf_readback(ide_drive_t *drive, struct ide_cmd *cmd)
void ide_tf_dump(const char *s, struct ide_cmd *cmd)
int taskfile_lib_get_identify(ide_drive_t *drive, u8 *buf)
static ide_startstop_t task_no_data_intr(ide_drive_t *);
static ide_startstop_t pre_task_out_intr(ide_drive_t *, struct ide_cmd *);
static ide_startstop_t task_pio_intr(ide_drive_t *);
ide_startstop_t do_rw_taskfile(ide_drive_t *drive, struct ide_cmd *orig_cmd)
EXPORT_SYMBOL_GPL(do_rw_taskfile);
static ide_startstop_t task_no_data_intr(ide_drive_t *drive)
static u8 wait_drive_not_busy(ide_drive_t *drive)
void ide_pio_bytes(ide_drive_t *drive, struct ide_cmd *cmd,
unsigned int write, unsigned int len)
EXPORT_SYMBOL_GPL(ide_pio_bytes);
static void ide_pio_datablock(ide_drive_t *drive, struct ide_cmd *cmd,
unsigned int write)
static void ide_error_cmd(ide_drive_t *drive, struct ide_cmd *cmd)
void ide_finish_cmd(ide_drive_t *drive, struct ide_cmd *cmd, u8 stat)
static ide_startstop_t task_pio_intr(ide_drive_t *drive)
static ide_startstop_t pre_task_out_intr(ide_drive_t *drive,
struct ide_cmd *cmd)
int ide_raw_taskfile(ide_drive_t *drive, struct ide_cmd *cmd, u8 *buf,
u16 nsect)
EXPORT_SYMBOL(ide_raw_taskfile);
int ide_no_data_taskfile(ide_drive_t *drive, struct ide_cmd *cmd)
EXPORT_SYMBOL_GPL(ide_no_data_taskfile);
int ide_taskfile_ioctl(ide_drive_t *drive, unsigned long arg)
