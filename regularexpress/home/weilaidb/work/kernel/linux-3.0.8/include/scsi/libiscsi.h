#define LIBISCSI_H
struct scsi_transport_template;
struct scsi_host_template;
struct scsi_device;
struct Scsi_Host;
struct scsi_target;
struct scsi_cmnd;
struct socket;
struct iscsi_transport;
struct iscsi_cls_session;
struct iscsi_cls_conn;
struct iscsi_session;
struct iscsi_nopin;
struct device;
#define ISCSI_DEF_XMIT_CMDS_MAX	128
#define ISCSI_MGMT_CMDS_MAX	15
#define ISCSI_DEF_CMD_PER_LUN	32
enum ;
#define ISCSI_SUSPEND_BIT		1
#define ISCSI_ITT_MASK			0x1fff
#define ISCSI_TOTAL_CMDS_MAX		4096
#define ISCSI_TOTAL_CMDS_MIN		16
#define ISCSI_AGE_SHIFT			28
#define ISCSI_AGE_MASK			0xf
#define ISCSI_ADDRESS_BUF_LEN		64
enum ;
enum ;
struct iscsi_r2t_info ;
struct iscsi_task ;
static inline int iscsi_task_has_unsol_data(struct iscsi_task *task)
static inline void* iscsi_next_hdr(struct iscsi_task *task)
enum ;
struct iscsi_conn ;
struct iscsi_pool ;
enum ;
struct iscsi_session ;
enum ;
struct iscsi_host ;
extern int iscsi_change_queue_depth(struct scsi_device *sdev, int depth,
int reason);
extern int iscsi_eh_abort(struct scsi_cmnd *sc);
extern int iscsi_eh_recover_target(struct scsi_cmnd *sc);
extern int iscsi_eh_session_reset(struct scsi_cmnd *sc);
extern int iscsi_eh_device_reset(struct scsi_cmnd *sc);
extern int iscsi_queuecommand(struct Scsi_Host *host, struct scsi_cmnd *sc);
#define iscsi_host_priv(_shost) \
(shost_priv(_shost) + sizeof(struct iscsi_host))
extern int iscsi_host_set_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf,
int buflen);
extern int iscsi_host_get_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf);
extern int iscsi_host_add(struct Scsi_Host *shost, struct device *pdev);
extern struct Scsi_Host *iscsi_host_alloc(struct scsi_host_template *sht,
int dd_data_size,
bool xmit_can_sleep);
extern void iscsi_host_remove(struct Scsi_Host *shost);
extern void iscsi_host_free(struct Scsi_Host *shost);
extern int iscsi_target_alloc(struct scsi_target *starget);
extern struct iscsi_cls_session *
iscsi_session_setup(struct iscsi_transport *, struct Scsi_Host *shost,
uint16_t, int, int, uint32_t, unsigned int);
extern void iscsi_session_teardown(struct iscsi_cls_session *);
extern void iscsi_session_recovery_timedout(struct iscsi_cls_session *);
extern int iscsi_set_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf, int buflen);
extern int iscsi_session_get_param(struct iscsi_cls_session *cls_session,
enum iscsi_param param, char *buf);
#define iscsi_session_printk(prefix, _sess, fmt, a...)	\
iscsi_cls_session_printk(prefix, _sess->cls_session, fmt, ##a)
extern struct iscsi_cls_conn *iscsi_conn_setup(struct iscsi_cls_session *,
int, uint32_t);
extern void iscsi_conn_teardown(struct iscsi_cls_conn *);
extern int iscsi_conn_start(struct iscsi_cls_conn *);
extern void iscsi_conn_stop(struct iscsi_cls_conn *, int);
extern int iscsi_conn_bind(struct iscsi_cls_session *, struct iscsi_cls_conn *,
int);
extern void iscsi_conn_failure(struct iscsi_conn *conn, enum iscsi_err err);
extern void iscsi_session_failure(struct iscsi_session *session,
enum iscsi_err err);
extern int iscsi_conn_get_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf);
extern int iscsi_conn_get_addr_param(struct sockaddr_storage *addr,
enum iscsi_param param, char *buf);
extern void iscsi_suspend_tx(struct iscsi_conn *conn);
extern void iscsi_suspend_queue(struct iscsi_conn *conn);
extern void iscsi_conn_queue_work(struct iscsi_conn *conn);
#define iscsi_conn_printk(prefix, _c, fmt, a...) \
iscsi_cls_conn_printk(prefix, ((struct iscsi_conn *)_c)->cls_conn, \
fmt, ##a)
extern void iscsi_update_cmdsn(struct iscsi_session *, struct iscsi_nopin *);
extern void iscsi_prep_data_out_pdu(struct iscsi_task *task,
struct iscsi_r2t_info *r2t,
struct iscsi_data *hdr);
extern int iscsi_conn_send_pdu(struct iscsi_cls_conn *, struct iscsi_hdr *,
char *, uint32_t);
extern int iscsi_complete_pdu(struct iscsi_conn *, struct iscsi_hdr *,
char *, int);
extern int __iscsi_complete_pdu(struct iscsi_conn *, struct iscsi_hdr *,
char *, int);
extern int iscsi_verify_itt(struct iscsi_conn *, itt_t);
extern struct iscsi_task *iscsi_itt_to_ctask(struct iscsi_conn *, itt_t);
extern struct iscsi_task *iscsi_itt_to_task(struct iscsi_conn *, itt_t);
extern void iscsi_requeue_task(struct iscsi_task *task);
extern void iscsi_put_task(struct iscsi_task *task);
extern void __iscsi_put_task(struct iscsi_task *task);
extern void __iscsi_get_task(struct iscsi_task *task);
extern void iscsi_complete_scsi_task(struct iscsi_task *task,
uint32_t exp_cmdsn, uint32_t max_cmdsn);
extern void iscsi_pool_free(struct iscsi_pool *);
extern int iscsi_pool_init(struct iscsi_pool *, int, void ***, int);
static inline unsigned int
iscsi_padded(unsigned int len)
static inline unsigned int
iscsi_padding(unsigned int len)
