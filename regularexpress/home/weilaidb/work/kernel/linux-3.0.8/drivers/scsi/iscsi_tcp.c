MODULE_AUTHOR("Mike Christie <michaelc@cs.wisc.edu>, "
"Dmitry Yusupov <dmitry_yus@yahoo.com>, "
"Alex Aizman <itn780@yahoo.com>");
MODULE_DESCRIPTION("iSCSI/TCP data-path");
MODULE_LICENSE("GPL");
static struct scsi_transport_template *iscsi_sw_tcp_scsi_transport;
static struct scsi_host_template iscsi_sw_tcp_sht;
static struct iscsi_transport iscsi_sw_tcp_transport;
static unsigned int iscsi_max_lun = 512;
module_param_named(max_lun, iscsi_max_lun, uint, S_IRUGO);
static int iscsi_sw_tcp_dbg;
module_param_named(debug_iscsi_tcp, iscsi_sw_tcp_dbg, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_iscsi_tcp, "Turn on debugging for iscsi_tcp module "
"Set to 1 to turn on, and zero to turn off. Default is off.");
#define ISCSI_SW_TCP_DBG(_conn, dbg_fmt, arg...)		\
do  while (0);
static int iscsi_sw_tcp_recv(read_descriptor_t *rd_desc, struct sk_buff *skb,
unsigned int offset, size_t len)
static inline int iscsi_sw_sk_state_check(struct sock *sk)
static void iscsi_sw_tcp_data_ready(struct sock *sk, int flag)
static void iscsi_sw_tcp_state_change(struct sock *sk)
static void iscsi_sw_tcp_write_space(struct sock *sk)
static void iscsi_sw_tcp_conn_set_callbacks(struct iscsi_conn *conn)
static void
iscsi_sw_tcp_conn_restore_callbacks(struct iscsi_conn *conn)
static int iscsi_sw_tcp_xmit_segment(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment)
static int iscsi_sw_tcp_xmit(struct iscsi_conn *conn)
static inline int iscsi_sw_tcp_xmit_qlen(struct iscsi_conn *conn)
static int iscsi_sw_tcp_pdu_xmit(struct iscsi_task *task)
static int iscsi_sw_tcp_send_hdr_done(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment)
static void iscsi_sw_tcp_send_hdr_prep(struct iscsi_conn *conn, void *hdr,
size_t hdrlen)
static int
iscsi_sw_tcp_send_data_prep(struct iscsi_conn *conn, struct scatterlist *sg,
unsigned int count, unsigned int offset,
unsigned int len)
static void
iscsi_sw_tcp_send_linear_data_prep(struct iscsi_conn *conn, void *data,
size_t len)
static int iscsi_sw_tcp_pdu_init(struct iscsi_task *task,
unsigned int offset, unsigned int count)
static int iscsi_sw_tcp_pdu_alloc(struct iscsi_task *task, uint8_t opcode)
static struct iscsi_cls_conn *
iscsi_sw_tcp_conn_create(struct iscsi_cls_session *cls_session,
uint32_t conn_idx)
static void iscsi_sw_tcp_release_conn(struct iscsi_conn *conn)
static void iscsi_sw_tcp_conn_destroy(struct iscsi_cls_conn *cls_conn)
static void iscsi_sw_tcp_conn_stop(struct iscsi_cls_conn *cls_conn, int flag)
static int
iscsi_sw_tcp_conn_bind(struct iscsi_cls_session *cls_session,
struct iscsi_cls_conn *cls_conn, uint64_t transport_eph,
int is_leading)
static int iscsi_sw_tcp_conn_set_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf,
int buflen)
static int iscsi_sw_tcp_conn_get_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf)
static int iscsi_sw_tcp_host_get_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf)
static void
iscsi_sw_tcp_conn_get_stats(struct iscsi_cls_conn *cls_conn,
struct iscsi_stats *stats)
static struct iscsi_cls_session *
iscsi_sw_tcp_session_create(struct iscsi_endpoint *ep, uint16_t cmds_max,
uint16_t qdepth, uint32_t initial_cmdsn)
static void iscsi_sw_tcp_session_destroy(struct iscsi_cls_session *cls_session)
static int iscsi_sw_tcp_slave_alloc(struct scsi_device *sdev)
static int iscsi_sw_tcp_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template iscsi_sw_tcp_sht = ;
static struct iscsi_transport iscsi_sw_tcp_transport = ;
static int __init iscsi_sw_tcp_init(void)
static void __exit iscsi_sw_tcp_exit(void)
module_init(iscsi_sw_tcp_init);
module_exit(iscsi_sw_tcp_exit);
