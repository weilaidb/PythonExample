#define FCRYPT_BSIZE 8
struct rxrpc_crypt  __attribute__((aligned(8)));
#define rxrpc_queue_work(WS)	queue_work(rxrpc_workqueue, (WS))
#define rxrpc_queue_delayed_work(WS,D)	\
queue_delayed_work(rxrpc_workqueue, (WS), (D))
#define rxrpc_queue_call(CALL)	rxrpc_queue_work(&(CALL)->processor)
#define rxrpc_queue_conn(CONN)	rxrpc_queue_work(&(CONN)->processor)
enum ;
struct rxrpc_sock ;
#define rxrpc_sk(__sk) container_of((__sk), struct rxrpc_sock, sk)
struct rxrpc_skb_priv ;
#define rxrpc_skb(__skb) ((struct rxrpc_skb_priv *) &(__skb)->cb)
enum rxrpc_command ;
struct rxrpc_security ;
struct rxrpc_local ;
struct rxrpc_peer ;
struct rxrpc_transport ;
struct rxrpc_conn_bundle ;
struct rxrpc_connection ;
struct rxrpc_call ;
static inline void rxrpc_abort_call(struct rxrpc_call *call, u32 abort_code)
extern atomic_t rxrpc_n_skbs;
extern __be32 rxrpc_epoch;
extern atomic_t rxrpc_debug_id;
extern struct workqueue_struct *rxrpc_workqueue;
extern void rxrpc_accept_incoming_calls(struct work_struct *);
extern struct rxrpc_call *rxrpc_accept_call(struct rxrpc_sock *,
unsigned long);
extern int rxrpc_reject_call(struct rxrpc_sock *);
extern void __rxrpc_propose_ACK(struct rxrpc_call *, u8, __be32, bool);
extern void rxrpc_propose_ACK(struct rxrpc_call *, u8, __be32, bool);
extern void rxrpc_process_call(struct work_struct *);
extern struct kmem_cache *rxrpc_call_jar;
extern struct list_head rxrpc_calls;
extern rwlock_t rxrpc_call_lock;
extern struct rxrpc_call *rxrpc_get_client_call(struct rxrpc_sock *,
struct rxrpc_transport *,
struct rxrpc_conn_bundle *,
unsigned long, int, gfp_t);
extern struct rxrpc_call *rxrpc_incoming_call(struct rxrpc_sock *,
struct rxrpc_connection *,
struct rxrpc_header *, gfp_t);
extern struct rxrpc_call *rxrpc_find_server_call(struct rxrpc_sock *,
unsigned long);
extern void rxrpc_release_call(struct rxrpc_call *);
extern void rxrpc_release_calls_on_socket(struct rxrpc_sock *);
extern void __rxrpc_put_call(struct rxrpc_call *);
extern void __exit rxrpc_destroy_all_calls(void);
extern struct list_head rxrpc_connections;
extern rwlock_t rxrpc_connection_lock;
extern struct rxrpc_conn_bundle *rxrpc_get_bundle(struct rxrpc_sock *,
struct rxrpc_transport *,
struct key *,
__be16, gfp_t);
extern void rxrpc_put_bundle(struct rxrpc_transport *,
struct rxrpc_conn_bundle *);
extern int rxrpc_connect_call(struct rxrpc_sock *, struct rxrpc_transport *,
struct rxrpc_conn_bundle *, struct rxrpc_call *,
gfp_t);
extern void rxrpc_put_connection(struct rxrpc_connection *);
extern void __exit rxrpc_destroy_all_connections(void);
extern struct rxrpc_connection *rxrpc_find_connection(struct rxrpc_transport *,
struct rxrpc_header *);
extern struct rxrpc_connection *
rxrpc_incoming_connection(struct rxrpc_transport *, struct rxrpc_header *,
gfp_t);
extern void rxrpc_process_connection(struct work_struct *);
extern void rxrpc_reject_packet(struct rxrpc_local *, struct sk_buff *);
extern void rxrpc_reject_packets(struct work_struct *);
extern void rxrpc_UDP_error_report(struct sock *);
extern void rxrpc_UDP_error_handler(struct work_struct *);
extern unsigned long rxrpc_ack_timeout;
extern const char *rxrpc_pkts[];
extern void rxrpc_data_ready(struct sock *, int);
extern int rxrpc_queue_rcv_skb(struct rxrpc_call *, struct sk_buff *, bool,
bool);
extern void rxrpc_fast_process_packet(struct rxrpc_call *, struct sk_buff *);
extern rwlock_t rxrpc_local_lock;
extern struct rxrpc_local *rxrpc_lookup_local(struct sockaddr_rxrpc *);
extern void rxrpc_put_local(struct rxrpc_local *);
extern void __exit rxrpc_destroy_all_locals(void);
extern struct key_type key_type_rxrpc;
extern struct key_type key_type_rxrpc_s;
extern int rxrpc_request_key(struct rxrpc_sock *, char __user *, int);
extern int rxrpc_server_keyring(struct rxrpc_sock *, char __user *, int);
extern int rxrpc_get_server_data_key(struct rxrpc_connection *, const void *,
time_t, u32);
extern int rxrpc_resend_timeout;
extern int rxrpc_send_packet(struct rxrpc_transport *, struct sk_buff *);
extern int rxrpc_client_sendmsg(struct kiocb *, struct rxrpc_sock *,
struct rxrpc_transport *, struct msghdr *,
size_t);
extern int rxrpc_server_sendmsg(struct kiocb *, struct rxrpc_sock *,
struct msghdr *, size_t);
extern struct rxrpc_peer *rxrpc_get_peer(struct sockaddr_rxrpc *, gfp_t);
extern void rxrpc_put_peer(struct rxrpc_peer *);
extern struct rxrpc_peer *rxrpc_find_peer(struct rxrpc_local *,
__be32, __be16);
extern void __exit rxrpc_destroy_all_peers(void);
extern const char *const rxrpc_call_states[];
extern const struct file_operations rxrpc_call_seq_fops;
extern const struct file_operations rxrpc_connection_seq_fops;
extern void rxrpc_remove_user_ID(struct rxrpc_sock *, struct rxrpc_call *);
extern int rxrpc_recvmsg(struct kiocb *, struct socket *, struct msghdr *,
size_t, int);
extern int rxrpc_register_security(struct rxrpc_security *);
extern void rxrpc_unregister_security(struct rxrpc_security *);
extern int rxrpc_init_client_conn_security(struct rxrpc_connection *);
extern int rxrpc_init_server_conn_security(struct rxrpc_connection *);
extern int rxrpc_secure_packet(const struct rxrpc_call *, struct sk_buff *,
size_t, void *);
extern int rxrpc_verify_packet(const struct rxrpc_call *, struct sk_buff *,
u32 *);
extern void rxrpc_clear_conn_security(struct rxrpc_connection *);
extern void rxrpc_packet_destructor(struct sk_buff *);
extern struct rxrpc_transport *rxrpc_get_transport(struct rxrpc_local *,
struct rxrpc_peer *,
gfp_t);
extern void rxrpc_put_transport(struct rxrpc_transport *);
extern void __exit rxrpc_destroy_all_transports(void);
extern struct rxrpc_transport *rxrpc_find_transport(struct rxrpc_local *,
struct rxrpc_peer *);
extern unsigned rxrpc_debug;
#define dbgprintk(FMT,...) \
printk("[%-6.6s] "FMT"\n", current->comm ,##__VA_ARGS__)
#define kenter(FMT,...)	dbgprintk("==> %s("FMT")",__func__ ,##__VA_ARGS__)
#define kleave(FMT,...)	dbgprintk("<== %s()"FMT"",__func__ ,##__VA_ARGS__)
#define kdebug(FMT,...)	dbgprintk("    "FMT ,##__VA_ARGS__)
#define kproto(FMT,...)	dbgprintk("### "FMT ,##__VA_ARGS__)
#define knet(FMT,...)	dbgprintk("@@@ "FMT ,##__VA_ARGS__)
#if defined(__KDEBUG)
#define _enter(FMT,...)	kenter(FMT,##__VA_ARGS__)
#define _leave(FMT,...)	kleave(FMT,##__VA_ARGS__)
#define _debug(FMT,...)	kdebug(FMT,##__VA_ARGS__)
#define _proto(FMT,...)	kproto(FMT,##__VA_ARGS__)
#define _net(FMT,...)	knet(FMT,##__VA_ARGS__)
#elif defined(CONFIG_AF_RXRPC_DEBUG)
#define RXRPC_DEBUG_KENTER	0x01
#define RXRPC_DEBUG_KLEAVE	0x02
#define RXRPC_DEBUG_KDEBUG	0x04
#define RXRPC_DEBUG_KPROTO	0x08
#define RXRPC_DEBUG_KNET	0x10
#define _enter(FMT,...)					\
do  while (0)
#define _leave(FMT,...)					\
do  while (0)
#define _debug(FMT,...)					\
do  while (0)
#define _proto(FMT,...)					\
do  while (0)
#define _net(FMT,...)					\
do  while (0)
#define _enter(FMT,...)	no_printk("==> %s("FMT")",__func__ ,##__VA_ARGS__)
#define _leave(FMT,...)	no_printk("<== %s()"FMT"",__func__ ,##__VA_ARGS__)
#define _debug(FMT,...)	no_printk("    "FMT ,##__VA_ARGS__)
#define _proto(FMT,...)	no_printk("### "FMT ,##__VA_ARGS__)
#define _net(FMT,...)	no_printk("@@@ "FMT ,##__VA_ARGS__)
#if 1
#define ASSERT(X)						\
do  while(0)
#define ASSERTCMP(X, OP, Y)						\
do  while(0)
#define ASSERTIF(C, X)						\
do  while(0)
#define ASSERTIFCMP(C, X, OP, Y)					\
do  while(0)
#define ASSERT(X)				\
do  while(0)
#define ASSERTCMP(X, OP, Y)			\
do  while(0)
#define ASSERTIF(C, X)				\
do  while(0)
#define ASSERTIFCMP(C, X, OP, Y)		\
do  while(0)
static inline void __rxrpc_new_skb(struct sk_buff *skb, const char *fn)
#define rxrpc_new_skb(skb) __rxrpc_new_skb((skb), __func__)
static inline void __rxrpc_kill_skb(struct sk_buff *skb, const char *fn)
#define rxrpc_kill_skb(skb) __rxrpc_kill_skb((skb), __func__)
static inline void __rxrpc_free_skb(struct sk_buff *skb, const char *fn)
#define rxrpc_free_skb(skb) __rxrpc_free_skb((skb), __func__)
static inline void rxrpc_purge_queue(struct sk_buff_head *list)
static inline void __rxrpc_get_local(struct rxrpc_local *local, const char *f)
#define rxrpc_get_local(LOCAL) __rxrpc_get_local((LOCAL), __func__)
#define rxrpc_get_call(CALL)				\
do  while(0)
#define rxrpc_put_call(CALL)				\
do  while(0)
