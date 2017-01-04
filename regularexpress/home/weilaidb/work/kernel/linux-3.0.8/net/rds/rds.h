#define _RDS_RDS_H
#define RDS_PROTOCOL_3_0	0x0300
#define RDS_PROTOCOL_3_1	0x0301
#define RDS_PROTOCOL_VERSION	RDS_PROTOCOL_3_1
#define RDS_PROTOCOL_MAJOR(v)	((v) >> 8)
#define RDS_PROTOCOL_MINOR(v)	((v) & 255)
#define RDS_PROTOCOL(maj, min)	(((maj) << 8) | min)
#define RDS_PORT	18634
#define KERNEL_HAS_ATOMIC64
#define rdsdebug(fmt, args...) pr_debug("%s(): " fmt, __func__ , ##args)
static inline void __attribute__ ((format (printf, 1, 2)))
rdsdebug(char *fmt, ...)
#define ceil(x, y) \
()
#define RDS_FRAG_SHIFT	12
#define RDS_FRAG_SIZE	((unsigned int)(1 << RDS_FRAG_SHIFT))
#define RDS_CONG_MAP_BYTES	(65536 / 8)
#define RDS_CONG_MAP_PAGES	(PAGE_ALIGN(RDS_CONG_MAP_BYTES) / PAGE_SIZE)
#define RDS_CONG_MAP_PAGE_BITS	(PAGE_SIZE * 8)
struct rds_cong_map ;
enum ;
#define RDS_LL_SEND_FULL	0
#define RDS_RECONNECT_PENDING	1
#define RDS_IN_XMIT		2
struct rds_connection ;
#define RDS_FLAG_CONG_BITMAP	0x01
#define RDS_FLAG_ACK_REQUIRED	0x02
#define RDS_FLAG_RETRANSMITTED	0x04
#define RDS_MAX_ADV_CREDIT	255
#define RDS_HEADER_EXT_SPACE	16
struct rds_header ;
#define RDS_EXTHDR_NONE		0
#define RDS_EXTHDR_VERSION	1
struct rds_ext_header_version ;
#define RDS_EXTHDR_RDMA		2
struct rds_ext_header_rdma ;
#define RDS_EXTHDR_RDMA_DEST	3
struct rds_ext_header_rdma_dest ;
#define __RDS_EXTHDR_MAX	16
struct rds_incoming ;
struct rds_mr ;
#define RDS_MR_DEAD		0
static inline rds_rdma_cookie_t rds_rdma_make_cookie(u32 r_key, u32 offset)
static inline u32 rds_rdma_cookie_key(rds_rdma_cookie_t cookie)
static inline u32 rds_rdma_cookie_offset(rds_rdma_cookie_t cookie)
#define RDS_ATOMIC_TYPE_CSWP		0
#define RDS_ATOMIC_TYPE_FADD		1
#define RDS_MSG_ON_SOCK		1
#define RDS_MSG_ON_CONN		2
#define RDS_MSG_HAS_ACK_SEQ	3
#define RDS_MSG_ACK_REQUIRED	4
#define RDS_MSG_RETRANSMITTED	5
#define RDS_MSG_MAPPED		6
#define RDS_MSG_PAGEVEC		7
struct rds_message ;
struct rds_notifier ;
#define RDS_TRANS_IB	0
#define RDS_TRANS_IWARP	1
#define RDS_TRANS_TCP	2
#define RDS_TRANS_COUNT	3
struct rds_transport ;
struct rds_sock ;
static inline struct rds_sock *rds_sk_to_rs(const struct sock *sk)
static inline struct sock *rds_rs_to_sk(struct rds_sock *rs)
static inline int rds_sk_sndbuf(struct rds_sock *rs)
static inline int rds_sk_rcvbuf(struct rds_sock *rs)
struct rds_statistics ;
char *rds_str_array(char **array, size_t elements, size_t index);
void rds_sock_addref(struct rds_sock *rs);
void rds_sock_put(struct rds_sock *rs);
void rds_wake_sk_sleep(struct rds_sock *rs);
static inline void __rds_wake_sk_sleep(struct sock *sk)
extern wait_queue_head_t rds_poll_waitq;
int rds_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len);
void rds_remove_bound(struct rds_sock *rs);
struct rds_sock *rds_find_bound(__be32 addr, __be16 port);
int rds_cong_get_maps(struct rds_connection *conn);
void rds_cong_add_conn(struct rds_connection *conn);
void rds_cong_remove_conn(struct rds_connection *conn);
void rds_cong_set_bit(struct rds_cong_map *map, __be16 port);
void rds_cong_clear_bit(struct rds_cong_map *map, __be16 port);
int rds_cong_wait(struct rds_cong_map *map, __be16 port, int nonblock, struct rds_sock *rs);
void rds_cong_queue_updates(struct rds_cong_map *map);
void rds_cong_map_updated(struct rds_cong_map *map, uint64_t);
int rds_cong_updated_since(unsigned long *recent);
void rds_cong_add_socket(struct rds_sock *);
void rds_cong_remove_socket(struct rds_sock *);
void rds_cong_exit(void);
struct rds_message *rds_cong_update_alloc(struct rds_connection *conn);
int rds_conn_init(void);
void rds_conn_exit(void);
struct rds_connection *rds_conn_create(__be32 laddr, __be32 faddr,
struct rds_transport *trans, gfp_t gfp);
struct rds_connection *rds_conn_create_outgoing(__be32 laddr, __be32 faddr,
struct rds_transport *trans, gfp_t gfp);
void rds_conn_shutdown(struct rds_connection *conn);
void rds_conn_destroy(struct rds_connection *conn);
void rds_conn_drop(struct rds_connection *conn);
void rds_conn_connect_if_down(struct rds_connection *conn);
void rds_for_each_conn_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens,
int (*visitor)(struct rds_connection *, void *),
size_t item_len);
void __rds_conn_error(struct rds_connection *conn, const char *, ...)
__attribute__ ((format (printf, 2, 3)));
#define rds_conn_error(conn, fmt...) \
__rds_conn_error(conn, KERN_WARNING "RDS: " fmt)
static inline int
rds_conn_transition(struct rds_connection *conn, int old, int new)
static inline int
rds_conn_state(struct rds_connection *conn)
static inline int
rds_conn_up(struct rds_connection *conn)
static inline int
rds_conn_connecting(struct rds_connection *conn)
struct rds_message *rds_message_alloc(unsigned int nents, gfp_t gfp);
struct scatterlist *rds_message_alloc_sgs(struct rds_message *rm, int nents);
int rds_message_copy_from_user(struct rds_message *rm, struct iovec *first_iov,
size_t total_len);
struct rds_message *rds_message_map_pages(unsigned long *page_addrs, unsigned int total_len);
void rds_message_populate_header(struct rds_header *hdr, __be16 sport,
__be16 dport, u64 seq);
int rds_message_add_extension(struct rds_header *hdr,
unsigned int type, const void *data, unsigned int len);
int rds_message_next_extension(struct rds_header *hdr,
unsigned int *pos, void *buf, unsigned int *buflen);
int rds_message_add_rdma_dest_extension(struct rds_header *hdr, u32 r_key, u32 offset);
int rds_message_inc_copy_to_user(struct rds_incoming *inc,
struct iovec *first_iov, size_t size);
void rds_message_inc_free(struct rds_incoming *inc);
void rds_message_addref(struct rds_message *rm);
void rds_message_put(struct rds_message *rm);
void rds_message_wait(struct rds_message *rm);
void rds_message_unmapped(struct rds_message *rm);
static inline void rds_message_make_checksum(struct rds_header *hdr)
static inline int rds_message_verify_checksum(const struct rds_header *hdr)
int rds_page_remainder_alloc(struct scatterlist *scat, unsigned long bytes,
gfp_t gfp);
int rds_page_copy_user(struct page *page, unsigned long offset,
void __user *ptr, unsigned long bytes,
int to_user);
#define rds_page_copy_to_user(page, offset, ptr, bytes) \
rds_page_copy_user(page, offset, ptr, bytes, 1)
#define rds_page_copy_from_user(page, offset, ptr, bytes) \
rds_page_copy_user(page, offset, ptr, bytes, 0)
void rds_page_exit(void);
void rds_inc_init(struct rds_incoming *inc, struct rds_connection *conn,
__be32 saddr);
void rds_inc_put(struct rds_incoming *inc);
void rds_recv_incoming(struct rds_connection *conn, __be32 saddr, __be32 daddr,
struct rds_incoming *inc, gfp_t gfp, enum km_type km);
int rds_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t size, int msg_flags);
void rds_clear_recv_queue(struct rds_sock *rs);
int rds_notify_queue_get(struct rds_sock *rs, struct msghdr *msg);
void rds_inc_info_copy(struct rds_incoming *inc,
struct rds_info_iterator *iter,
__be32 saddr, __be32 daddr, int flip);
int rds_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t payload_len);
void rds_send_reset(struct rds_connection *conn);
int rds_send_xmit(struct rds_connection *conn);
struct sockaddr_in;
void rds_send_drop_to(struct rds_sock *rs, struct sockaddr_in *dest);
typedef int (*is_acked_func)(struct rds_message *rm, uint64_t ack);
void rds_send_drop_acked(struct rds_connection *conn, u64 ack,
is_acked_func is_acked);
int rds_send_pong(struct rds_connection *conn, __be16 dport);
struct rds_message *rds_send_get_message(struct rds_connection *,
struct rm_rdma_op *);
void rds_rdma_unuse(struct rds_sock *rs, u32 r_key, int force);
int rds_get_mr(struct rds_sock *rs, char __user *optval, int optlen);
int rds_get_mr_for_dest(struct rds_sock *rs, char __user *optval, int optlen);
int rds_free_mr(struct rds_sock *rs, char __user *optval, int optlen);
void rds_rdma_drop_keys(struct rds_sock *rs);
int rds_rdma_extra_size(struct rds_rdma_args *args);
int rds_cmsg_rdma_args(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg);
int rds_cmsg_rdma_dest(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg);
int rds_cmsg_rdma_args(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg);
int rds_cmsg_rdma_map(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg);
void rds_rdma_free_op(struct rm_rdma_op *ro);
void rds_atomic_free_op(struct rm_atomic_op *ao);
void rds_rdma_send_complete(struct rds_message *rm, int wc_status);
void rds_atomic_send_complete(struct rds_message *rm, int wc_status);
int rds_cmsg_atomic(struct rds_sock *rs, struct rds_message *rm,
struct cmsghdr *cmsg);
extern void __rds_put_mr_final(struct rds_mr *mr);
static inline void rds_mr_put(struct rds_mr *mr)
DECLARE_PER_CPU_SHARED_ALIGNED(struct rds_statistics, rds_stats);
#define rds_stats_inc_which(which, member) do  while (0)
#define rds_stats_inc(member) rds_stats_inc_which(rds_stats, member)
#define rds_stats_add_which(which, member, count) do  while (0)
#define rds_stats_add(member, count) rds_stats_add_which(rds_stats, member, count)
int rds_stats_init(void);
void rds_stats_exit(void);
void rds_stats_info_copy(struct rds_info_iterator *iter,
uint64_t *values, const char *const *names,
size_t nr);
int rds_sysctl_init(void);
void rds_sysctl_exit(void);
extern unsigned long rds_sysctl_sndbuf_min;
extern unsigned long rds_sysctl_sndbuf_default;
extern unsigned long rds_sysctl_sndbuf_max;
extern unsigned long rds_sysctl_reconnect_min_jiffies;
extern unsigned long rds_sysctl_reconnect_max_jiffies;
extern unsigned int  rds_sysctl_max_unacked_packets;
extern unsigned int  rds_sysctl_max_unacked_bytes;
extern unsigned int  rds_sysctl_ping_enable;
extern unsigned long rds_sysctl_trace_flags;
extern unsigned int  rds_sysctl_trace_level;
int rds_threads_init(void);
void rds_threads_exit(void);
extern struct workqueue_struct *rds_wq;
void rds_queue_reconnect(struct rds_connection *conn);
void rds_connect_worker(struct work_struct *);
void rds_shutdown_worker(struct work_struct *);
void rds_send_worker(struct work_struct *);
void rds_recv_worker(struct work_struct *);
void rds_connect_complete(struct rds_connection *conn);
int rds_trans_register(struct rds_transport *trans);
void rds_trans_unregister(struct rds_transport *trans);
struct rds_transport *rds_trans_get_preferred(__be32 addr);
void rds_trans_put(struct rds_transport *trans);
unsigned int rds_trans_stats_info_copy(struct rds_info_iterator *iter,
unsigned int avail);
int rds_trans_init(void);
void rds_trans_exit(void);
