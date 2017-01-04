static int iscsi_dbg_lib_conn;
module_param_named(debug_libiscsi_conn, iscsi_dbg_lib_conn, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_libiscsi_conn,
"Turn on debugging for connections in libiscsi module. "
"Set to 1 to turn on, and zero to turn off. Default is off.");
static int iscsi_dbg_lib_session;
module_param_named(debug_libiscsi_session, iscsi_dbg_lib_session, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_libiscsi_session,
"Turn on debugging for sessions in libiscsi module. "
"Set to 1 to turn on, and zero to turn off. Default is off.");
static int iscsi_dbg_lib_eh;
module_param_named(debug_libiscsi_eh, iscsi_dbg_lib_eh, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_libiscsi_eh,
"Turn on debugging for error handling in libiscsi module. "
"Set to 1 to turn on, and zero to turn off. Default is off.");
#define ISCSI_DBG_CONN(_conn, dbg_fmt, arg...)			\
do  while (0);
#define ISCSI_DBG_SESSION(_session, dbg_fmt, arg...)			\
do  while (0);
#define ISCSI_DBG_EH(_session, dbg_fmt, arg...)				\
do  while (0);
#define SNA32_CHECK 2147483648UL
static int iscsi_sna_lt(u32 n1, u32 n2)
static int iscsi_sna_lte(u32 n1, u32 n2)
inline void iscsi_conn_queue_work(struct iscsi_conn *conn)
EXPORT_SYMBOL_GPL(iscsi_conn_queue_work);
static void __iscsi_update_cmdsn(struct iscsi_session *session,
uint32_t exp_cmdsn, uint32_t max_cmdsn)
void iscsi_update_cmdsn(struct iscsi_session *session, struct iscsi_nopin *hdr)
EXPORT_SYMBOL_GPL(iscsi_update_cmdsn);
void iscsi_prep_data_out_pdu(struct iscsi_task *task, struct iscsi_r2t_info *r2t,
struct iscsi_data *hdr)
EXPORT_SYMBOL_GPL(iscsi_prep_data_out_pdu);
static int iscsi_add_hdr(struct iscsi_task *task, unsigned len)
static int iscsi_prep_ecdb_ahs(struct iscsi_task *task)
static int iscsi_prep_bidi_ahs(struct iscsi_task *task)
static int iscsi_check_tmf_restrictions(struct iscsi_task *task, int opcode)
static int iscsi_prep_scsi_cmd_pdu(struct iscsi_task *task)
static void iscsi_free_task(struct iscsi_task *task)
void __iscsi_get_task(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(__iscsi_get_task);
void __iscsi_put_task(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(__iscsi_put_task);
void iscsi_put_task(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(iscsi_put_task);
static void iscsi_complete_task(struct iscsi_task *task, int state)
void iscsi_complete_scsi_task(struct iscsi_task *task,
uint32_t exp_cmdsn, uint32_t max_cmdsn)
EXPORT_SYMBOL_GPL(iscsi_complete_scsi_task);
static void fail_scsi_task(struct iscsi_task *task, int err)
static int iscsi_prep_mgmt_task(struct iscsi_conn *conn,
struct iscsi_task *task)
static struct iscsi_task *
__iscsi_conn_send_pdu(struct iscsi_conn *conn, struct iscsi_hdr *hdr,
char *data, uint32_t data_size)
int iscsi_conn_send_pdu(struct iscsi_cls_conn *cls_conn, struct iscsi_hdr *hdr,
char *data, uint32_t data_size)
EXPORT_SYMBOL_GPL(iscsi_conn_send_pdu);
static void iscsi_scsi_cmd_rsp(struct iscsi_conn *conn, struct iscsi_hdr *hdr,
struct iscsi_task *task, char *data,
int datalen)
static void
iscsi_data_in_rsp(struct iscsi_conn *conn, struct iscsi_hdr *hdr,
struct iscsi_task *task)
static void iscsi_tmf_rsp(struct iscsi_conn *conn, struct iscsi_hdr *hdr)
static void iscsi_send_nopout(struct iscsi_conn *conn, struct iscsi_nopin *rhdr)
static int iscsi_nop_out_rsp(struct iscsi_task *task,
struct iscsi_nopin *nop, char *data, int datalen)
static int iscsi_handle_reject(struct iscsi_conn *conn, struct iscsi_hdr *hdr,
char *data, int datalen)
struct iscsi_task *iscsi_itt_to_task(struct iscsi_conn *conn, itt_t itt)
EXPORT_SYMBOL_GPL(iscsi_itt_to_task);
int __iscsi_complete_pdu(struct iscsi_conn *conn, struct iscsi_hdr *hdr,
char *data, int datalen)
EXPORT_SYMBOL_GPL(__iscsi_complete_pdu);
int iscsi_complete_pdu(struct iscsi_conn *conn, struct iscsi_hdr *hdr,
char *data, int datalen)
EXPORT_SYMBOL_GPL(iscsi_complete_pdu);
int iscsi_verify_itt(struct iscsi_conn *conn, itt_t itt)
EXPORT_SYMBOL_GPL(iscsi_verify_itt);
struct iscsi_task *iscsi_itt_to_ctask(struct iscsi_conn *conn, itt_t itt)
EXPORT_SYMBOL_GPL(iscsi_itt_to_ctask);
void iscsi_session_failure(struct iscsi_session *session,
enum iscsi_err err)
EXPORT_SYMBOL_GPL(iscsi_session_failure);
void iscsi_conn_failure(struct iscsi_conn *conn, enum iscsi_err err)
EXPORT_SYMBOL_GPL(iscsi_conn_failure);
static int iscsi_check_cmdsn_window_closed(struct iscsi_conn *conn)
static int iscsi_xmit_task(struct iscsi_conn *conn)
void iscsi_requeue_task(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(iscsi_requeue_task);
static int iscsi_data_xmit(struct iscsi_conn *conn)
static void iscsi_xmitworker(struct work_struct *work)
static inline struct iscsi_task *iscsi_alloc_task(struct iscsi_conn *conn,
struct scsi_cmnd *sc)
enum ;
int iscsi_queuecommand(struct Scsi_Host *host, struct scsi_cmnd *sc)
EXPORT_SYMBOL_GPL(iscsi_queuecommand);
int iscsi_change_queue_depth(struct scsi_device *sdev, int depth, int reason)
EXPORT_SYMBOL_GPL(iscsi_change_queue_depth);
int iscsi_target_alloc(struct scsi_target *starget)
EXPORT_SYMBOL_GPL(iscsi_target_alloc);
static void iscsi_tmf_timedout(unsigned long data)
static int iscsi_exec_task_mgmt_fn(struct iscsi_conn *conn,
struct iscsi_tm *hdr, int age,
int timeout)
static void fail_scsi_tasks(struct iscsi_conn *conn, unsigned lun,
int error)
void iscsi_suspend_queue(struct iscsi_conn *conn)
EXPORT_SYMBOL_GPL(iscsi_suspend_queue);
void iscsi_suspend_tx(struct iscsi_conn *conn)
EXPORT_SYMBOL_GPL(iscsi_suspend_tx);
static void iscsi_start_tx(struct iscsi_conn *conn)
static int iscsi_has_ping_timed_out(struct iscsi_conn *conn)
static enum blk_eh_timer_return iscsi_eh_cmd_timed_out(struct scsi_cmnd *sc)
static void iscsi_check_transport_timeouts(unsigned long data)
static void iscsi_prep_abort_task_pdu(struct iscsi_task *task,
struct iscsi_tm *hdr)
int iscsi_eh_abort(struct scsi_cmnd *sc)
EXPORT_SYMBOL_GPL(iscsi_eh_abort);
static void iscsi_prep_lun_reset_pdu(struct scsi_cmnd *sc, struct iscsi_tm *hdr)
int iscsi_eh_device_reset(struct scsi_cmnd *sc)
EXPORT_SYMBOL_GPL(iscsi_eh_device_reset);
void iscsi_session_recovery_timedout(struct iscsi_cls_session *cls_session)
EXPORT_SYMBOL_GPL(iscsi_session_recovery_timedout);
int iscsi_eh_session_reset(struct scsi_cmnd *sc)
EXPORT_SYMBOL_GPL(iscsi_eh_session_reset);
static void iscsi_prep_tgt_reset_pdu(struct scsi_cmnd *sc, struct iscsi_tm *hdr)
int iscsi_eh_target_reset(struct scsi_cmnd *sc)
EXPORT_SYMBOL_GPL(iscsi_eh_target_reset);
int iscsi_eh_recover_target(struct scsi_cmnd *sc)
EXPORT_SYMBOL_GPL(iscsi_eh_recover_target);
int
iscsi_pool_init(struct iscsi_pool *q, int max, void ***items, int item_size)
EXPORT_SYMBOL_GPL(iscsi_pool_init);
void iscsi_pool_free(struct iscsi_pool *q)
EXPORT_SYMBOL_GPL(iscsi_pool_free);
int iscsi_host_add(struct Scsi_Host *shost, struct device *pdev)
EXPORT_SYMBOL_GPL(iscsi_host_add);
struct Scsi_Host *iscsi_host_alloc(struct scsi_host_template *sht,
int dd_data_size, bool xmit_can_sleep)
EXPORT_SYMBOL_GPL(iscsi_host_alloc);
static void iscsi_notify_host_removed(struct iscsi_cls_session *cls_session)
void iscsi_host_remove(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(iscsi_host_remove);
void iscsi_host_free(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(iscsi_host_free);
static void iscsi_host_dec_session_cnt(struct Scsi_Host *shost)
struct iscsi_cls_session *
iscsi_session_setup(struct iscsi_transport *iscsit, struct Scsi_Host *shost,
uint16_t cmds_max, int dd_size, int cmd_task_size,
uint32_t initial_cmdsn, unsigned int id)
EXPORT_SYMBOL_GPL(iscsi_session_setup);
void iscsi_session_teardown(struct iscsi_cls_session *cls_session)
EXPORT_SYMBOL_GPL(iscsi_session_teardown);
struct iscsi_cls_conn *
iscsi_conn_setup(struct iscsi_cls_session *cls_session, int dd_size,
uint32_t conn_idx)
EXPORT_SYMBOL_GPL(iscsi_conn_setup);
void iscsi_conn_teardown(struct iscsi_cls_conn *cls_conn)
EXPORT_SYMBOL_GPL(iscsi_conn_teardown);
int iscsi_conn_start(struct iscsi_cls_conn *cls_conn)
EXPORT_SYMBOL_GPL(iscsi_conn_start);
static void
fail_mgmt_tasks(struct iscsi_session *session, struct iscsi_conn *conn)
static void iscsi_start_session_recovery(struct iscsi_session *session,
struct iscsi_conn *conn, int flag)
void iscsi_conn_stop(struct iscsi_cls_conn *cls_conn, int flag)
EXPORT_SYMBOL_GPL(iscsi_conn_stop);
int iscsi_conn_bind(struct iscsi_cls_session *cls_session,
struct iscsi_cls_conn *cls_conn, int is_leading)
EXPORT_SYMBOL_GPL(iscsi_conn_bind);
static int iscsi_switch_str_param(char **param, char *new_val_buf)
int iscsi_set_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf, int buflen)
EXPORT_SYMBOL_GPL(iscsi_set_param);
int iscsi_session_get_param(struct iscsi_cls_session *cls_session,
enum iscsi_param param, char *buf)
EXPORT_SYMBOL_GPL(iscsi_session_get_param);
int iscsi_conn_get_addr_param(struct sockaddr_storage *addr,
enum iscsi_param param, char *buf)
EXPORT_SYMBOL_GPL(iscsi_conn_get_addr_param);
int iscsi_conn_get_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf)
EXPORT_SYMBOL_GPL(iscsi_conn_get_param);
int iscsi_host_get_param(struct Scsi_Host *shost, enum iscsi_host_param param,
char *buf)
EXPORT_SYMBOL_GPL(iscsi_host_get_param);
int iscsi_host_set_param(struct Scsi_Host *shost, enum iscsi_host_param param,
char *buf, int buflen)
EXPORT_SYMBOL_GPL(iscsi_host_set_param);
MODULE_AUTHOR("Mike Christie");
MODULE_DESCRIPTION("iSCSI library functions");
MODULE_LICENSE("GPL");
