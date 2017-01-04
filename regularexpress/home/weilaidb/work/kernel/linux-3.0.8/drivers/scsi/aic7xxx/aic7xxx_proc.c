static void	copy_mem_info(struct info_str *info, char *data, int len);
static int	copy_info(struct info_str *info, char *fmt, ...);
static void	ahc_dump_target_state(struct ahc_softc *ahc,
struct info_str *info,
u_int our_id, char channel,
u_int target_id, u_int target_offset);
static void	ahc_dump_device_state(struct info_str *info,
struct scsi_device *dev);
static int	ahc_proc_write_seeprom(struct ahc_softc *ahc,
char *buffer, int length);
static const struct  scsi_syncrates[] = ;
static u_int
ahc_calc_syncsrate(u_int period_factor)
static void
copy_mem_info(struct info_str *info, char *data, int len)
static int
copy_info(struct info_str *info, char *fmt, ...)
static void
ahc_format_transinfo(struct info_str *info, struct ahc_transinfo *tinfo)
static void
ahc_dump_target_state(struct ahc_softc *ahc, struct info_str *info,
u_int our_id, char channel, u_int target_id,
u_int target_offset)
static void
ahc_dump_device_state(struct info_str *info, struct scsi_device *sdev)
static int
ahc_proc_write_seeprom(struct ahc_softc *ahc, char *buffer, int length)
int
ahc_linux_proc_info(struct Scsi_Host *shost, char *buffer, char **start,
off_t offset, int length, int inout)
