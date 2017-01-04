#define LIBISCSI_TCP_H
struct iscsi_tcp_conn;
struct iscsi_segment;
struct sk_buff;
struct hash_desc;
typedef int iscsi_segment_done_fn_t(struct iscsi_tcp_conn *,
struct iscsi_segment *);
struct iscsi_segment ;
struct iscsi_tcp_recv ;
struct iscsi_tcp_conn ;
struct iscsi_tcp_task ;
enum ;
extern void iscsi_tcp_hdr_recv_prep(struct iscsi_tcp_conn *tcp_conn);
extern int iscsi_tcp_recv_skb(struct iscsi_conn *conn, struct sk_buff *skb,
unsigned int offset, bool offloaded, int *status);
extern void iscsi_tcp_cleanup_task(struct iscsi_task *task);
extern int iscsi_tcp_task_init(struct iscsi_task *task);
extern int iscsi_tcp_task_xmit(struct iscsi_task *task);
extern int iscsi_tcp_recv_segment_is_hdr(struct iscsi_tcp_conn *tcp_conn);
extern int iscsi_tcp_segment_done(struct iscsi_tcp_conn *tcp_conn,
struct iscsi_segment *segment, int recv,
unsigned copied);
extern void iscsi_tcp_segment_unmap(struct iscsi_segment *segment);
extern void iscsi_segment_init_linear(struct iscsi_segment *segment,
void *data, size_t size,
iscsi_segment_done_fn_t *done,
struct hash_desc *hash);
extern int
iscsi_segment_seek_sg(struct iscsi_segment *segment,
struct scatterlist *sg_list, unsigned int sg_count,
unsigned int offset, size_t size,
iscsi_segment_done_fn_t *done, struct hash_desc *hash);
extern void iscsi_tcp_dgst_header(struct hash_desc *hash, const void *hdr,
size_t hdrlen,
unsigned char digest[ISCSI_DIGEST_SIZE]);
extern struct iscsi_cls_conn *
iscsi_tcp_conn_setup(struct iscsi_cls_session *cls_session, int dd_data_size,
uint32_t conn_idx);
extern void iscsi_tcp_conn_teardown(struct iscsi_cls_conn *cls_conn);
extern int iscsi_tcp_r2tpool_alloc(struct iscsi_session *session);
extern void iscsi_tcp_r2tpool_free(struct iscsi_session *session);
extern void iscsi_tcp_conn_get_stats(struct iscsi_cls_conn *cls_conn,
struct iscsi_stats *stats);
