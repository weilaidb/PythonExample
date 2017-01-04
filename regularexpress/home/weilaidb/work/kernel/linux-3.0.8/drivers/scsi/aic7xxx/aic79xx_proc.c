static void	copy_mem_info(struct info_str *info, char *data, int len);
static int	copy_info(struct info_str *info, char *fmt, ...);
static void	ahd_dump_target_state(struct ahd_softc *ahd,
struct info_str *info,
u_int our_id, char channel,
u_int target_id);
static void	ahd_dump_device_state(struct info_str *info,
struct scsi_device *sdev);
static int	ahd_proc_write_seeprom(struct ahd_softc *ahd,
char *buffer, int length);
static const struct  scsi_syncrates[] = ;
static u_int
ahd_calc_syncsrate(u_int period_factor)
static void
copy_mem_info(struct info_str *info, char *data, int len)
static int
copy_info(struct info_str *info, char *fmt, ...)
static void
ahd_format_transinfo(struct info_str *info, struct ahd_transinfo *tinfo)
static void
ahd_dump_target_state(struct ahd_softc *ahd, struct info_str *info,
u_int our_id, char channel, u_int target_id)
static void
ahd_dump_device_state(struct info_str *info, struct scsi_device *sdev)
static int
ahd_proc_write_seeprom(struct ahd_softc *ahd, char *buffer, int length)
int
ahd_linux_proc_info(struct Scsi_Host *shost, char *buffer, char **start,
off_t offset, int length, int inout)
