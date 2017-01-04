static void xs_close(struct rpc_xprt *xprt);
unsigned int xprt_udp_slot_table_entries = RPC_DEF_SLOT_TABLE;
unsigned int xprt_tcp_slot_table_entries = RPC_DEF_SLOT_TABLE;
unsigned int xprt_min_resvport = RPC_DEF_MIN_RESVPORT;
unsigned int xprt_max_resvport = RPC_DEF_MAX_RESVPORT;
#define XS_TCP_LINGER_TO	(15U * HZ)
static unsigned int xs_tcp_fin_timeout __read_mostly = XS_TCP_LINGER_TO;
static unsigned int min_slot_table_size = RPC_MIN_SLOT_TABLE;
static unsigned int max_slot_table_size = RPC_MAX_SLOT_TABLE;
static unsigned int xprt_min_resvport_limit = RPC_MIN_RESVPORT;
static unsigned int xprt_max_resvport_limit = RPC_MAX_RESVPORT;
static struct ctl_table_header *sunrpc_table_header;
static ctl_table xs_tunables_table[] = ;
static ctl_table sunrpc_table[] = ;
#define XS_BIND_TO		(60U * HZ)
#define XS_UDP_REEST_TO		(2U * HZ)
#define XS_TCP_INIT_REEST_TO	(3U * HZ)
#define XS_TCP_MAX_REEST_TO	(5U * 60 * HZ)
#define XS_IDLE_DISC_TO		(5U * 60 * HZ)
# undef  RPC_DEBUG_DATA
# define RPCDBG_FACILITY	RPCDBG_TRANS
static void xs_pktdump(char *msg, u32 *packet, unsigned int count)
static inline void xs_pktdump(char *msg, u32 *packet, unsigned int count)
struct sock_xprt ;
#define TCP_RCV_LAST_FRAG	(1UL << 0)
#define TCP_RCV_COPY_FRAGHDR	(1UL << 1)
#define TCP_RCV_COPY_XID	(1UL << 2)
#define TCP_RCV_COPY_DATA	(1UL << 3)
#define TCP_RCV_READ_CALLDIR	(1UL << 4)
#define TCP_RCV_COPY_CALLDIR	(1UL << 5)
#define TCP_RPC_REPLY		(1UL << 6)
static inline struct sockaddr *xs_addr(struct rpc_xprt *xprt)
static inline struct sockaddr_un *xs_addr_un(struct rpc_xprt *xprt)
static inline struct sockaddr_in *xs_addr_in(struct rpc_xprt *xprt)
static inline struct sockaddr_in6 *xs_addr_in6(struct rpc_xprt *xprt)
static void xs_format_common_peer_addresses(struct rpc_xprt *xprt)
static void xs_format_common_peer_ports(struct rpc_xprt *xprt)
static void xs_format_peer_addresses(struct rpc_xprt *xprt,
const char *protocol,
const char *netid)
static void xs_update_peer_port(struct rpc_xprt *xprt)
static void xs_free_peer_addresses(struct rpc_xprt *xprt)
#define XS_SENDMSG_FLAGS	(MSG_DONTWAIT | MSG_NOSIGNAL)
static int xs_send_kvec(struct socket *sock, struct sockaddr *addr, int addrlen, struct kvec *vec, unsigned int base, int more)
static int xs_send_pagedata(struct socket *sock, struct xdr_buf *xdr, unsigned int base, int more)
static int xs_sendpages(struct socket *sock, struct sockaddr *addr, int addrlen, struct xdr_buf *xdr, unsigned int base)
static void xs_nospace_callback(struct rpc_task *task)
static int xs_nospace(struct rpc_task *task)
static inline void xs_encode_stream_record_marker(struct xdr_buf *buf)
static int xs_local_send_request(struct rpc_task *task)
static int xs_udp_send_request(struct rpc_task *task)
static void xs_tcp_shutdown(struct rpc_xprt *xprt)
static int xs_tcp_send_request(struct rpc_task *task)
static void xs_tcp_release_xprt(struct rpc_xprt *xprt, struct rpc_task *task)
static void xs_save_old_callbacks(struct sock_xprt *transport, struct sock *sk)
static void xs_restore_old_callbacks(struct sock_xprt *transport, struct sock *sk)
static void xs_reset_transport(struct sock_xprt *transport)
static void xs_close(struct rpc_xprt *xprt)
static void xs_tcp_close(struct rpc_xprt *xprt)
static void xs_destroy(struct rpc_xprt *xprt)
static inline struct rpc_xprt *xprt_from_sock(struct sock *sk)
static int xs_local_copy_to_xdr(struct xdr_buf *xdr, struct sk_buff *skb)
static void xs_local_data_ready(struct sock *sk, int len)
static void xs_udp_data_ready(struct sock *sk, int len)
static inline void xs_tcp_read_fraghdr(struct rpc_xprt *xprt, struct xdr_skb_reader *desc)
static void xs_tcp_check_fraghdr(struct sock_xprt *transport)
static inline void xs_tcp_read_xid(struct sock_xprt *transport, struct xdr_skb_reader *desc)
static inline void xs_tcp_read_calldir(struct sock_xprt *transport,
struct xdr_skb_reader *desc)
static inline void xs_tcp_read_common(struct rpc_xprt *xprt,
struct xdr_skb_reader *desc,
struct rpc_rqst *req)
static inline int xs_tcp_read_reply(struct rpc_xprt *xprt,
struct xdr_skb_reader *desc)
#if defined(CONFIG_NFS_V4_1)
static inline int xs_tcp_read_callback(struct rpc_xprt *xprt,
struct xdr_skb_reader *desc)
static inline int _xs_tcp_read_data(struct rpc_xprt *xprt,
struct xdr_skb_reader *desc)
static inline int _xs_tcp_read_data(struct rpc_xprt *xprt,
struct xdr_skb_reader *desc)
static void xs_tcp_read_data(struct rpc_xprt *xprt,
struct xdr_skb_reader *desc)
static inline void xs_tcp_read_discard(struct sock_xprt *transport, struct xdr_skb_reader *desc)
static int xs_tcp_data_recv(read_descriptor_t *rd_desc, struct sk_buff *skb, unsigned int offset, size_t len)
static void xs_tcp_data_ready(struct sock *sk, int bytes)
static void xs_tcp_schedule_linger_timeout(struct rpc_xprt *xprt,
unsigned long timeout)
static void xs_tcp_cancel_linger_timeout(struct rpc_xprt *xprt)
static void xs_sock_mark_closed(struct rpc_xprt *xprt)
static void xs_tcp_state_change(struct sock *sk)
static void xs_error_report(struct sock *sk)
static void xs_write_space(struct sock *sk)
static void xs_udp_write_space(struct sock *sk)
static void xs_tcp_write_space(struct sock *sk)
static void xs_udp_do_set_buffer_size(struct rpc_xprt *xprt)
static void xs_udp_set_buffer_size(struct rpc_xprt *xprt, size_t sndsize, size_t rcvsize)
static void xs_udp_timer(struct rpc_task *task)
static unsigned short xs_get_random_port(void)
static void xs_set_port(struct rpc_xprt *xprt, unsigned short port)
static unsigned short xs_get_srcport(struct sock_xprt *transport)
static unsigned short xs_next_srcport(struct sock_xprt *transport, unsigned short port)
static int xs_bind(struct sock_xprt *transport, struct socket *sock)
static void xs_local_rpcbind(struct rpc_task *task)
static void xs_local_set_port(struct rpc_xprt *xprt, unsigned short port)
static struct lock_class_key xs_key[2];
static struct lock_class_key xs_slock_key[2];
static inline void xs_reclassify_socketu(struct socket *sock)
static inline void xs_reclassify_socket4(struct socket *sock)
static inline void xs_reclassify_socket6(struct socket *sock)
static inline void xs_reclassify_socket(int family, struct socket *sock)
static inline void xs_reclassify_socketu(struct socket *sock)
static inline void xs_reclassify_socket4(struct socket *sock)
static inline void xs_reclassify_socket6(struct socket *sock)
static inline void xs_reclassify_socket(int family, struct socket *sock)
static struct socket *xs_create_sock(struct rpc_xprt *xprt,
struct sock_xprt *transport, int family, int type, int protocol)
static int xs_local_finish_connecting(struct rpc_xprt *xprt,
struct socket *sock)
static void xs_local_setup_socket(struct work_struct *work)
static void xs_udp_finish_connecting(struct rpc_xprt *xprt, struct socket *sock)
static void xs_udp_setup_socket(struct work_struct *work)
static void xs_abort_connection(struct sock_xprt *transport)
static void xs_tcp_reuse_connection(struct sock_xprt *transport)
static int xs_tcp_finish_connecting(struct rpc_xprt *xprt, struct socket *sock)
static void xs_tcp_setup_socket(struct work_struct *work)
static void xs_connect(struct rpc_task *task)
static void xs_local_print_stats(struct rpc_xprt *xprt, struct seq_file *seq)
static void xs_udp_print_stats(struct rpc_xprt *xprt, struct seq_file *seq)
static void xs_tcp_print_stats(struct rpc_xprt *xprt, struct seq_file *seq)
static void *bc_malloc(struct rpc_task *task, size_t size)
static void bc_free(void *buffer)
static int bc_sendto(struct rpc_rqst *req)
static int bc_send_request(struct rpc_task *task)
static void bc_close(struct rpc_xprt *xprt)
static void bc_destroy(struct rpc_xprt *xprt)
static struct rpc_xprt_ops xs_local_ops = ;
static struct rpc_xprt_ops xs_udp_ops = ;
static struct rpc_xprt_ops xs_tcp_ops = ;
static struct rpc_xprt_ops bc_tcp_ops = ;
static int xs_init_anyaddr(const int family, struct sockaddr *sap)
static struct rpc_xprt *xs_setup_xprt(struct xprt_create *args,
unsigned int slot_table_size)
static const struct rpc_timeout xs_local_default_timeout = ;
static struct rpc_xprt *xs_setup_local(struct xprt_create *args)
static const struct rpc_timeout xs_udp_default_timeout = ;
static struct rpc_xprt *xs_setup_udp(struct xprt_create *args)
static const struct rpc_timeout xs_tcp_default_timeout = ;
static struct rpc_xprt *xs_setup_tcp(struct xprt_create *args)
static struct rpc_xprt *xs_setup_bc_tcp(struct xprt_create *args)
static struct xprt_class	xs_local_transport = ;
static struct xprt_class	xs_udp_transport = ;
static struct xprt_class	xs_tcp_transport = ;
static struct xprt_class	xs_bc_tcp_transport = ;
int init_socket_xprt(void)
void cleanup_socket_xprt(void)
static int param_set_uint_minmax(const char *val,
const struct kernel_param *kp,
unsigned int min, unsigned int max)
static int param_set_portnr(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_portnr = ;
#define param_check_portnr(name, p) \
__param_check(name, p, unsigned int);
module_param_named(min_resvport, xprt_min_resvport, portnr, 0644);
module_param_named(max_resvport, xprt_max_resvport, portnr, 0644);
static int param_set_slot_table_size(const char *val,
const struct kernel_param *kp)
static struct kernel_param_ops param_ops_slot_table_size = ;
#define param_check_slot_table_size(name, p) \
__param_check(name, p, unsigned int);
module_param_named(tcp_slot_table_entries, xprt_tcp_slot_table_entries,
slot_table_size, 0644);
module_param_named(udp_slot_table_entries, xprt_udp_slot_table_entries,
slot_table_size, 0644);
