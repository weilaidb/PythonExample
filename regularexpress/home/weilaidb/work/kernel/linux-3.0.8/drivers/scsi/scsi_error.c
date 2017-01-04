#define SENSE_TIMEOUT		(10*HZ)
#define BUS_RESET_SETTLE_TIME   (10)
#define HOST_RESET_SETTLE_TIME  (10)
static int scsi_eh_try_stu(struct scsi_cmnd *scmd);
void scsi_eh_wakeup(struct Scsi_Host *shost)
void scsi_schedule_eh(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(scsi_schedule_eh);
int scsi_eh_scmd_add(struct scsi_cmnd *scmd, int eh_flag)
enum blk_eh_timer_return scsi_times_out(struct request *req)
int scsi_block_when_processing_errors(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_block_when_processing_errors);
static inline void scsi_eh_prt_fail_stats(struct Scsi_Host *shost,
struct list_head *work_q)
static int scsi_check_sense(struct scsi_cmnd *scmd)
static void scsi_handle_queue_ramp_up(struct scsi_device *sdev)
static void scsi_handle_queue_full(struct scsi_device *sdev)
static int scsi_eh_completed_normally(struct scsi_cmnd *scmd)
static void scsi_eh_done(struct scsi_cmnd *scmd)
static int scsi_try_host_reset(struct scsi_cmnd *scmd)
static int scsi_try_bus_reset(struct scsi_cmnd *scmd)
static void __scsi_report_device_reset(struct scsi_device *sdev, void *data)
static int scsi_try_target_reset(struct scsi_cmnd *scmd)
static int scsi_try_bus_device_reset(struct scsi_cmnd *scmd)
static int scsi_try_to_abort_cmd(struct scsi_host_template *hostt, struct scsi_cmnd *scmd)
static void scsi_abort_eh_cmnd(struct scsi_cmnd *scmd)
void scsi_eh_prep_cmnd(struct scsi_cmnd *scmd, struct scsi_eh_save *ses,
unsigned char *cmnd, int cmnd_size, unsigned sense_bytes)
EXPORT_SYMBOL(scsi_eh_prep_cmnd);
void scsi_eh_restore_cmnd(struct scsi_cmnd* scmd, struct scsi_eh_save *ses)
EXPORT_SYMBOL(scsi_eh_restore_cmnd);
static int scsi_send_eh_cmnd(struct scsi_cmnd *scmd, unsigned char *cmnd,
int cmnd_size, int timeout, unsigned sense_bytes)
static int scsi_request_sense(struct scsi_cmnd *scmd)
void scsi_eh_finish_cmd(struct scsi_cmnd *scmd, struct list_head *done_q)
EXPORT_SYMBOL(scsi_eh_finish_cmd);
int scsi_eh_get_sense(struct list_head *work_q,
struct list_head *done_q)
EXPORT_SYMBOL_GPL(scsi_eh_get_sense);
static int scsi_eh_tur(struct scsi_cmnd *scmd)
static int scsi_eh_test_devices(struct list_head *cmd_list,
struct list_head *work_q,
struct list_head *done_q, int try_stu)
static int scsi_eh_abort_cmds(struct list_head *work_q,
struct list_head *done_q)
static int scsi_eh_try_stu(struct scsi_cmnd *scmd)
static int scsi_eh_stu(struct Scsi_Host *shost,
struct list_head *work_q,
struct list_head *done_q)
static int scsi_eh_bus_device_reset(struct Scsi_Host *shost,
struct list_head *work_q,
struct list_head *done_q)
static int scsi_eh_target_reset(struct Scsi_Host *shost,
struct list_head *work_q,
struct list_head *done_q)
static int scsi_eh_bus_reset(struct Scsi_Host *shost,
struct list_head *work_q,
struct list_head *done_q)
static int scsi_eh_host_reset(struct list_head *work_q,
struct list_head *done_q)
static void scsi_eh_offline_sdevs(struct list_head *work_q,
struct list_head *done_q)
int scsi_noretry_cmd(struct scsi_cmnd *scmd)
int scsi_decide_disposition(struct scsi_cmnd *scmd)
static void eh_lock_door_done(struct request *req, int uptodate)
static void scsi_eh_lock_door(struct scsi_device *sdev)
static void scsi_restart_operations(struct Scsi_Host *shost)
void scsi_eh_ready_devs(struct Scsi_Host *shost,
struct list_head *work_q,
struct list_head *done_q)
EXPORT_SYMBOL_GPL(scsi_eh_ready_devs);
void scsi_eh_flush_done_q(struct list_head *done_q)
EXPORT_SYMBOL(scsi_eh_flush_done_q);
static void scsi_unjam_host(struct Scsi_Host *shost)
int scsi_error_handler(void *data)
void scsi_report_bus_reset(struct Scsi_Host *shost, int channel)
EXPORT_SYMBOL(scsi_report_bus_reset);
void scsi_report_device_reset(struct Scsi_Host *shost, int channel, int target)
EXPORT_SYMBOL(scsi_report_device_reset);
static void
scsi_reset_provider_done_command(struct scsi_cmnd *scmd)
int
scsi_reset_provider(struct scsi_device *dev, int flag)
EXPORT_SYMBOL(scsi_reset_provider);
int scsi_normalize_sense(const u8 *sense_buffer, int sb_len,
struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL(scsi_normalize_sense);
int scsi_command_normalize_sense(struct scsi_cmnd *cmd,
struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL(scsi_command_normalize_sense);
const u8 * scsi_sense_desc_find(const u8 * sense_buffer, int sb_len,
int desc_type)
EXPORT_SYMBOL(scsi_sense_desc_find);
int scsi_get_sense_info_fld(const u8 * sense_buffer, int sb_len,
u64 * info_out)
EXPORT_SYMBOL(scsi_get_sense_info_fld);
void scsi_build_sense_buffer(int desc, u8 *buf, u8 key, u8 asc, u8 ascq)
EXPORT_SYMBOL(scsi_build_sense_buffer);
