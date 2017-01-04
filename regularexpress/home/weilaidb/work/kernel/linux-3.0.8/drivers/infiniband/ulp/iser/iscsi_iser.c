static struct scsi_host_template iscsi_iser_sht;
static struct iscsi_transport iscsi_iser_transport;
static struct scsi_transport_template *iscsi_iser_scsi_transport;
static unsigned int iscsi_max_lun = 512;
module_param_named(max_lun, iscsi_max_lun, uint, S_IRUGO);
int iser_debug_level = 0;
MODULE_DESCRIPTION("iSER (iSCSI Extensions for RDMA) Datamover "
"v" DRV_VER " (" DRV_DATE ")");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Alex Nezhinsky, Dan Bar Dov, Or Gerlitz");
module_param_named(debug_level, iser_debug_level, int, 0644);
MODULE_PARM_DESC(debug_level, "Enable debug tracing if > 0 (default:disabled)");
struct iser_global ig;
void
iscsi_iser_recv(struct iscsi_conn *conn,
struct iscsi_hdr *hdr, char *rx_data, int rx_data_len)
static int iscsi_iser_pdu_alloc(struct iscsi_task *task, uint8_t opcode)
int iser_initialize_task_headers(struct iscsi_task *task,
struct iser_tx_desc *tx_desc)
static int
iscsi_iser_task_init(struct iscsi_task *task)
static int
iscsi_iser_mtask_xmit(struct iscsi_conn *conn, struct iscsi_task *task)
static int
iscsi_iser_task_xmit_unsol_data(struct iscsi_conn *conn,
struct iscsi_task *task)
static int
iscsi_iser_task_xmit(struct iscsi_task *task)
static void iscsi_iser_cleanup_task(struct iscsi_task *task)
static struct iscsi_cls_conn *
iscsi_iser_conn_create(struct iscsi_cls_session *cls_session, uint32_t conn_idx)
static void
iscsi_iser_conn_destroy(struct iscsi_cls_conn *cls_conn)
static int
iscsi_iser_conn_bind(struct iscsi_cls_session *cls_session,
struct iscsi_cls_conn *cls_conn, uint64_t transport_eph,
int is_leading)
static void
iscsi_iser_conn_stop(struct iscsi_cls_conn *cls_conn, int flag)
static int
iscsi_iser_conn_start(struct iscsi_cls_conn *cls_conn)
static void iscsi_iser_session_destroy(struct iscsi_cls_session *cls_session)
static struct iscsi_cls_session *
iscsi_iser_session_create(struct iscsi_endpoint *ep,
uint16_t cmds_max, uint16_t qdepth,
uint32_t initial_cmdsn)
static int
iscsi_iser_set_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf, int buflen)
static void
iscsi_iser_conn_get_stats(struct iscsi_cls_conn *cls_conn, struct iscsi_stats *stats)
static int iscsi_iser_get_ep_param(struct iscsi_endpoint *ep,
enum iscsi_param param, char *buf)
static struct iscsi_endpoint *
iscsi_iser_ep_connect(struct Scsi_Host *shost, struct sockaddr *dst_addr,
int non_blocking)
static int
iscsi_iser_ep_poll(struct iscsi_endpoint *ep, int timeout_ms)
static void
iscsi_iser_ep_disconnect(struct iscsi_endpoint *ep)
static struct scsi_host_template iscsi_iser_sht = ;
static struct iscsi_transport iscsi_iser_transport = ;
static int __init iser_init(void)
static void __exit iser_exit(void)
module_init(iser_init);
module_exit(iser_exit);
