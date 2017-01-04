MODULE_AUTHOR("Mike Christie <michaelc@cs.wisc.edu>, "
"Dmitry Yusupov <dmitry_yus@yahoo.com>, "
"Alex Aizman <itn780@yahoo.com>");
MODULE_DESCRIPTION("iSCSI/TCP data-path");
MODULE_LICENSE("GPL");
static int iscsi_dbg_libtcp;
module_param_named(debug_libiscsi_tcp, iscsi_dbg_libtcp, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_libiscsi_tcp, "Turn on debugging for libiscsi_tcp "
"module. Set to 1 to turn on, and zero to turn off. Default "
"is off.");
#define ISCSI_DBG_TCP(_conn, dbg_fmt, arg...)			\
do  while (0);
static int iscsi_tcp_hdr_recv_done(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment);
static inline void
iscsi_tcp_segment_init_sg(struct iscsi_segment *segment,
struct scatterlist *sg, unsigned int offset)
static void iscsi_tcp_segment_map(struct iscsi_segment *segment, int recv)
void iscsi_tcp_segment_unmap(struct iscsi_segment *segment)
EXPORT_SYMBOL_GPL(iscsi_tcp_segment_unmap);
static inline void
iscsi_tcp_segment_splice_digest(struct iscsi_segment *segment, void *digest)
int iscsi_tcp_segment_done(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment, int recv,
unsigned copied)
EXPORT_SYMBOL_GPL(iscsi_tcp_segment_done);
static int
iscsi_tcp_segment_recv(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment, const void *ptr,
unsigned int len)
inline void
iscsi_tcp_dgst_header(struct hash_desc *hash, const void *hdr, size_t hdrlen,
unsigned char digest[ISCSI_DIGEST_SIZE])
EXPORT_SYMBOL_GPL(iscsi_tcp_dgst_header);
static inline int
iscsi_tcp_dgst_verify(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment)
static inline void
__iscsi_segment_init(struct iscsi_segment *segment, size_t size,
iscsi_segment_done_fn_t *done, struct hash_desc *hash)
inline void
iscsi_segment_init_linear(struct iscsi_segment *segment, void *data,
size_t size, iscsi_segment_done_fn_t *done,
struct hash_desc *hash)
EXPORT_SYMBOL_GPL(iscsi_segment_init_linear);
inline int
iscsi_segment_seek_sg(struct iscsi_segment *segment,
struct scatterlist *sg_list, unsigned int sg_count,
unsigned int offset, size_t size,
iscsi_segment_done_fn_t *done, struct hash_desc *hash)
EXPORT_SYMBOL_GPL(iscsi_segment_seek_sg);
void iscsi_tcp_hdr_recv_prep(struct iscsi_tcp_conn *tcp_conn)
EXPORT_SYMBOL_GPL(iscsi_tcp_hdr_recv_prep);
static int
iscsi_tcp_data_recv_done(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment)
static void
iscsi_tcp_data_recv_prep(struct iscsi_tcp_conn *tcp_conn)
void iscsi_tcp_cleanup_task(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(iscsi_tcp_cleanup_task);
static int iscsi_tcp_data_in(struct iscsi_conn *conn, struct iscsi_task *task)
static int iscsi_tcp_r2t_rsp(struct iscsi_conn *conn, struct iscsi_task *task)
static int
iscsi_tcp_process_data_in(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment)
static int
iscsi_tcp_hdr_dissect(struct iscsi_conn *conn, struct iscsi_hdr *hdr)
static int
iscsi_tcp_hdr_recv_done(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment)
inline int iscsi_tcp_recv_segment_is_hdr(struct iscsi_tcp_conn *tcp_conn)
EXPORT_SYMBOL_GPL(iscsi_tcp_recv_segment_is_hdr);
int iscsi_tcp_recv_skb(struct iscsi_conn *conn, struct sk_buff *skb,
unsigned int offset, bool offloaded, int *status)
EXPORT_SYMBOL_GPL(iscsi_tcp_recv_skb);
int iscsi_tcp_task_init(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(iscsi_tcp_task_init);
static struct iscsi_r2t_info *iscsi_tcp_get_curr_r2t(struct iscsi_task *task)
int iscsi_tcp_task_xmit(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(iscsi_tcp_task_xmit);
struct iscsi_cls_conn *
iscsi_tcp_conn_setup(struct iscsi_cls_session *cls_session, int dd_data_size,
uint32_t conn_idx)
EXPORT_SYMBOL_GPL(iscsi_tcp_conn_setup);
void iscsi_tcp_conn_teardown(struct iscsi_cls_conn *cls_conn)
EXPORT_SYMBOL_GPL(iscsi_tcp_conn_teardown);
int iscsi_tcp_r2tpool_alloc(struct iscsi_session *session)
EXPORT_SYMBOL_GPL(iscsi_tcp_r2tpool_alloc);
void iscsi_tcp_r2tpool_free(struct iscsi_session *session)
EXPORT_SYMBOL_GPL(iscsi_tcp_r2tpool_free);
void iscsi_tcp_conn_get_stats(struct iscsi_cls_conn *cls_conn,
struct iscsi_stats *stats)
EXPORT_SYMBOL_GPL(iscsi_tcp_conn_get_stats);
