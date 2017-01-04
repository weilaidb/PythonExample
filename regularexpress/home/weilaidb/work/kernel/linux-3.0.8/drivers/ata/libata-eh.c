enum ;
static const unsigned long ata_eh_reset_timeouts[] = ;
static const unsigned long ata_eh_identify_timeouts[] = ;
static const unsigned long ata_eh_flush_timeouts[] = ;
static const unsigned long ata_eh_other_timeouts[] = ;
struct ata_eh_cmd_timeout_ent ;
#define CMDS(cmds...)	(const u8 [])
static const struct ata_eh_cmd_timeout_ent
ata_eh_cmd_timeout_table[ATA_EH_CMD_TIMEOUT_TABLE_SIZE] = ;
#undef CMDS
static void __ata_port_freeze(struct ata_port *ap);
static void ata_eh_handle_port_suspend(struct ata_port *ap);
static void ata_eh_handle_port_resume(struct ata_port *ap);
static void ata_eh_handle_port_suspend(struct ata_port *ap)
static void ata_eh_handle_port_resume(struct ata_port *ap)
static void __ata_ehi_pushv_desc(struct ata_eh_info *ehi, const char *fmt,
va_list args)
void __ata_ehi_push_desc(struct ata_eh_info *ehi, const char *fmt, ...)
void ata_ehi_push_desc(struct ata_eh_info *ehi, const char *fmt, ...)
void ata_ehi_clear_desc(struct ata_eh_info *ehi)
void ata_port_desc(struct ata_port *ap, const char *fmt, ...)
void ata_port_pbar_desc(struct ata_port *ap, int bar, ssize_t offset,
const char *name)
static int ata_lookup_timeout_table(u8 cmd)
unsigned long ata_internal_cmd_timeout(struct ata_device *dev, u8 cmd)
void ata_internal_cmd_timed_out(struct ata_device *dev, u8 cmd)
static void ata_ering_record(struct ata_ering *ering, unsigned int eflags,
unsigned int err_mask)
static struct ata_ering_entry *ata_ering_top(struct ata_ering *ering)
int ata_ering_map(struct ata_ering *ering,
int (*map_fn)(struct ata_ering_entry *, void *),
void *arg)
int ata_ering_clear_cb(struct ata_ering_entry *ent, void *void_arg)
static void ata_ering_clear(struct ata_ering *ering)
static unsigned int ata_eh_dev_action(struct ata_device *dev)
static void ata_eh_clear_action(struct ata_link *link, struct ata_device *dev,
struct ata_eh_info *ehi, unsigned int action)
void ata_eh_acquire(struct ata_port *ap)
void ata_eh_release(struct ata_port *ap)
enum blk_eh_timer_return ata_scsi_timed_out(struct scsi_cmnd *cmd)
static void ata_eh_unload(struct ata_port *ap)
void ata_scsi_error(struct Scsi_Host *host)
void ata_scsi_cmd_error_handler(struct Scsi_Host *host, struct ata_port *ap,
struct list_head *eh_work_q)
EXPORT_SYMBOL(ata_scsi_cmd_error_handler);
void ata_scsi_port_error_handler(struct Scsi_Host *host, struct ata_port *ap)
EXPORT_SYMBOL_GPL(ata_scsi_port_error_handler);
void ata_port_wait_eh(struct ata_port *ap)
static int ata_eh_nr_in_flight(struct ata_port *ap)
void ata_eh_fastdrain_timerfn(unsigned long arg)
static void ata_eh_set_pending(struct ata_port *ap, int fastdrain)
void ata_qc_schedule_eh(struct ata_queued_cmd *qc)
void ata_port_schedule_eh(struct ata_port *ap)
static int ata_do_link_abort(struct ata_port *ap, struct ata_link *link)
int ata_link_abort(struct ata_link *link)
int ata_port_abort(struct ata_port *ap)
static void __ata_port_freeze(struct ata_port *ap)
int ata_port_freeze(struct ata_port *ap)
int sata_async_notification(struct ata_port *ap)
void ata_eh_freeze_port(struct ata_port *ap)
void ata_eh_thaw_port(struct ata_port *ap)
static void ata_eh_scsidone(struct scsi_cmnd *scmd)
static void __ata_eh_qc_complete(struct ata_queued_cmd *qc)
void ata_eh_qc_complete(struct ata_queued_cmd *qc)
void ata_eh_qc_retry(struct ata_queued_cmd *qc)
void ata_dev_disable(struct ata_device *dev)
void ata_eh_detach_dev(struct ata_device *dev)
void ata_eh_about_to_do(struct ata_link *link, struct ata_device *dev,
unsigned int action)
void ata_eh_done(struct ata_link *link, struct ata_device *dev,
unsigned int action)
static const char *ata_err_string(unsigned int err_mask)
static unsigned int ata_read_log_page(struct ata_device *dev,
u8 page, void *buf, unsigned int sectors)
static int ata_eh_read_log_10h(struct ata_device *dev,
int *tag, struct ata_taskfile *tf)
static unsigned int atapi_eh_tur(struct ata_device *dev, u8 *r_sense_key)
static unsigned int atapi_eh_request_sense(struct ata_device *dev,
u8 *sense_buf, u8 dfl_sense_key)
static void ata_eh_analyze_serror(struct ata_link *link)
void ata_eh_analyze_ncq_error(struct ata_link *link)
static unsigned int ata_eh_analyze_tf(struct ata_queued_cmd *qc,
const struct ata_taskfile *tf)
static int ata_eh_categorize_error(unsigned int eflags, unsigned int err_mask,
int *xfer_ok)
struct speed_down_verdict_arg ;
static int speed_down_verdict_cb(struct ata_ering_entry *ent, void *void_arg)
static unsigned int ata_eh_speed_down_verdict(struct ata_device *dev)
static unsigned int ata_eh_speed_down(struct ata_device *dev,
unsigned int eflags, unsigned int err_mask)
static void ata_eh_link_autopsy(struct ata_link *link)
void ata_eh_autopsy(struct ata_port *ap)
const char *ata_get_cmd_descript(u8 command)
static void ata_eh_link_report(struct ata_link *link)
void ata_eh_report(struct ata_port *ap)
static int ata_do_reset(struct ata_link *link, ata_reset_fn_t reset,
unsigned int *classes, unsigned long deadline,
bool clear_classes)
static int ata_eh_followup_srst_needed(struct ata_link *link,
int rc, const unsigned int *classes)
int ata_eh_reset(struct ata_link *link, int classify,
ata_prereset_fn_t prereset, ata_reset_fn_t softreset,
ata_reset_fn_t hardreset, ata_postreset_fn_t postreset)
static inline void ata_eh_pull_park_action(struct ata_port *ap)
static void ata_eh_park_issue_cmd(struct ata_device *dev, int park)
static int ata_eh_revalidate_and_attach(struct ata_link *link,
struct ata_device **r_failed_dev)
int ata_set_mode(struct ata_link *link, struct ata_device **r_failed_dev)
static int atapi_eh_clear_ua(struct ata_device *dev)
static int ata_eh_maybe_retry_flush(struct ata_device *dev)
static int ata_eh_set_lpm(struct ata_link *link, enum ata_lpm_policy policy,
struct ata_device **r_failed_dev)
int ata_link_nr_enabled(struct ata_link *link)
static int ata_link_nr_vacant(struct ata_link *link)
static int ata_eh_skip_recovery(struct ata_link *link)
static int ata_count_probe_trials_cb(struct ata_ering_entry *ent, void *void_arg)
static int ata_eh_schedule_probe(struct ata_device *dev)
static int ata_eh_handle_dev_fail(struct ata_device *dev, int err)
int ata_eh_recover(struct ata_port *ap, ata_prereset_fn_t prereset,
ata_reset_fn_t softreset, ata_reset_fn_t hardreset,
ata_postreset_fn_t postreset,
struct ata_link **r_failed_link)
void ata_eh_finish(struct ata_port *ap)
void ata_do_eh(struct ata_port *ap, ata_prereset_fn_t prereset,
ata_reset_fn_t softreset, ata_reset_fn_t hardreset,
ata_postreset_fn_t postreset)
void ata_std_error_handler(struct ata_port *ap)
static void ata_eh_handle_port_suspend(struct ata_port *ap)
static void ata_eh_handle_port_resume(struct ata_port *ap)
