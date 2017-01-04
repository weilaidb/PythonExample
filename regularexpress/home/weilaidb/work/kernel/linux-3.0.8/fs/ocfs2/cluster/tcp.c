#define MLOG_MASK_PREFIX ML_TCP
#define SC_NODEF_FMT "node %s (num %u) at %pI4:%u"
#define SC_NODEF_ARGS(sc) sc->sc_node->nd_name, sc->sc_node->nd_num,	\
&sc->sc_node->nd_ipv4_address,		\
ntohs(sc->sc_node->nd_ipv4_port)
#define msglog(hdr, fmt, args...) do  while (0)
#define sclog(sc, fmt, args...) do  while (0)
static DEFINE_RWLOCK(o2net_handler_lock);
static struct rb_root o2net_handler_tree = RB_ROOT;
static struct o2net_node o2net_nodes[O2NM_MAX_NODES];
static struct socket *o2net_listen_sock = NULL;
static struct workqueue_struct *o2net_wq;
static struct work_struct o2net_listen_work;
static struct o2hb_callback_func o2net_hb_up, o2net_hb_down;
#define O2NET_HB_PRI 0x1
static struct o2net_handshake *o2net_hand;
static struct o2net_msg *o2net_keep_req, *o2net_keep_resp;
static int o2net_sys_err_translations[O2NET_ERR_MAX] =
;
static void o2net_sc_connect_completed(struct work_struct *work);
static void o2net_rx_until_empty(struct work_struct *work);
static void o2net_shutdown_sc(struct work_struct *work);
static void o2net_listen_data_ready(struct sock *sk, int bytes);
static void o2net_sc_send_keep_req(struct work_struct *work);
static void o2net_idle_timer(unsigned long data);
static void o2net_sc_postpone_idle(struct o2net_sock_container *sc);
static void o2net_sc_reset_idle_timer(struct o2net_sock_container *sc);
static void o2net_init_nst(struct o2net_send_tracking *nst, u32 msgtype,
u32 msgkey, struct task_struct *task, u8 node)
static inline void o2net_set_nst_sock_time(struct o2net_send_tracking *nst)
static inline void o2net_set_nst_send_time(struct o2net_send_tracking *nst)
static inline void o2net_set_nst_status_time(struct o2net_send_tracking *nst)
static inline void o2net_set_nst_sock_container(struct o2net_send_tracking *nst,
struct o2net_sock_container *sc)
static inline void o2net_set_nst_msg_id(struct o2net_send_tracking *nst,
u32 msg_id)
static inline void o2net_set_sock_timer(struct o2net_sock_container *sc)
static inline void o2net_set_data_ready_time(struct o2net_sock_container *sc)
static inline void o2net_set_advance_start_time(struct o2net_sock_container *sc)
static inline void o2net_set_advance_stop_time(struct o2net_sock_container *sc)
static inline void o2net_set_func_start_time(struct o2net_sock_container *sc)
static inline void o2net_set_func_stop_time(struct o2net_sock_container *sc)
# define o2net_init_nst(a, b, c, d, e)
# define o2net_set_nst_sock_time(a)
# define o2net_set_nst_send_time(a)
# define o2net_set_nst_status_time(a)
# define o2net_set_nst_sock_container(a, b)
# define o2net_set_nst_msg_id(a, b)
# define o2net_set_sock_timer(a)
# define o2net_set_data_ready_time(a)
# define o2net_set_advance_start_time(a)
# define o2net_set_advance_stop_time(a)
# define o2net_set_func_start_time(a)
# define o2net_set_func_stop_time(a)
static ktime_t o2net_get_func_run_time(struct o2net_sock_container *sc)
static void o2net_update_send_stats(struct o2net_send_tracking *nst,
struct o2net_sock_container *sc)
static void o2net_update_recv_stats(struct o2net_sock_container *sc)
# define o2net_update_send_stats(a, b)
# define o2net_update_recv_stats(sc)
static inline int o2net_reconnect_delay(void)
static inline int o2net_keepalive_delay(void)
static inline int o2net_idle_timeout(void)
static inline int o2net_sys_err_to_errno(enum o2net_system_error err)
static struct o2net_node * o2net_nn_from_num(u8 node_num)
static u8 o2net_num_from_nn(struct o2net_node *nn)
static int o2net_prep_nsw(struct o2net_node *nn, struct o2net_status_wait *nsw)
static void o2net_complete_nsw_locked(struct o2net_node *nn,
struct o2net_status_wait *nsw,
enum o2net_system_error sys_status,
s32 status)
static void o2net_complete_nsw(struct o2net_node *nn,
struct o2net_status_wait *nsw,
u64 id, enum o2net_system_error sys_status,
s32 status)
static void o2net_complete_nodes_nsw(struct o2net_node *nn)
static int o2net_nsw_completed(struct o2net_node *nn,
struct o2net_status_wait *nsw)
static void sc_kref_release(struct kref *kref)
static void sc_put(struct o2net_sock_container *sc)
static void sc_get(struct o2net_sock_container *sc)
static struct o2net_sock_container *sc_alloc(struct o2nm_node *node)
static void o2net_sc_queue_work(struct o2net_sock_container *sc,
struct work_struct *work)
static void o2net_sc_queue_delayed_work(struct o2net_sock_container *sc,
struct delayed_work *work,
int delay)
static void o2net_sc_cancel_delayed_work(struct o2net_sock_container *sc,
struct delayed_work *work)
static atomic_t o2net_connected_peers = ATOMIC_INIT(0);
int o2net_num_connected_peers(void)
static void o2net_set_nn_state(struct o2net_node *nn,
struct o2net_sock_container *sc,
unsigned valid, int err)
static void o2net_data_ready(struct sock *sk, int bytes)
static void o2net_state_change(struct sock *sk)
static void o2net_register_callbacks(struct sock *sk,
struct o2net_sock_container *sc)
static int o2net_unregister_callbacks(struct sock *sk,
struct o2net_sock_container *sc)
static void o2net_ensure_shutdown(struct o2net_node *nn,
struct o2net_sock_container *sc,
int err)
static void o2net_shutdown_sc(struct work_struct *work)
static int o2net_handler_cmp(struct o2net_msg_handler *nmh, u32 msg_type,
u32 key)
static struct o2net_msg_handler *
o2net_handler_tree_lookup(u32 msg_type, u32 key, struct rb_node ***ret_p,
struct rb_node **ret_parent)
static void o2net_handler_kref_release(struct kref *kref)
static void o2net_handler_put(struct o2net_msg_handler *nmh)
int o2net_register_handler(u32 msg_type, u32 key, u32 max_len,
o2net_msg_handler_func *func, void *data,
o2net_post_msg_handler_func *post_func,
struct list_head *unreg_list)
EXPORT_SYMBOL_GPL(o2net_register_handler);
void o2net_unregister_handler_list(struct list_head *list)
EXPORT_SYMBOL_GPL(o2net_unregister_handler_list);
static struct o2net_msg_handler *o2net_handler_get(u32 msg_type, u32 key)
static int o2net_recv_tcp_msg(struct socket *sock, void *data, size_t len)
static int o2net_send_tcp_msg(struct socket *sock, struct kvec *vec,
size_t veclen, size_t total)
static void o2net_sendpage(struct o2net_sock_container *sc,
void *kmalloced_virt,
size_t size)
static void o2net_init_msg(struct o2net_msg *msg, u16 data_len, u16 msg_type, u32 key)
static int o2net_tx_can_proceed(struct o2net_node *nn,
struct o2net_sock_container **sc_ret,
int *error)
int o2net_send_message_vec(u32 msg_type, u32 key, struct kvec *caller_vec,
size_t caller_veclen, u8 target_node, int *status)
EXPORT_SYMBOL_GPL(o2net_send_message_vec);
int o2net_send_message(u32 msg_type, u32 key, void *data, u32 len,
u8 target_node, int *status)
EXPORT_SYMBOL_GPL(o2net_send_message);
static int o2net_send_status_magic(struct socket *sock, struct o2net_msg *hdr,
enum o2net_system_error syserr, int err)
static int o2net_process_message(struct o2net_sock_container *sc,
struct o2net_msg *hdr)
static int o2net_check_handshake(struct o2net_sock_container *sc)
static int o2net_advance_rx(struct o2net_sock_container *sc)
static void o2net_rx_until_empty(struct work_struct *work)
static int o2net_set_nodelay(struct socket *sock)
static void o2net_initialize_handshake(void)
static void o2net_sc_connect_completed(struct work_struct *work)
static void o2net_sc_send_keep_req(struct work_struct *work)
static void o2net_idle_timer(unsigned long data)
static void o2net_sc_reset_idle_timer(struct o2net_sock_container *sc)
static void o2net_sc_postpone_idle(struct o2net_sock_container *sc)
static void o2net_start_connect(struct work_struct *work)
static void o2net_connect_expired(struct work_struct *work)
static void o2net_still_up(struct work_struct *work)
void o2net_disconnect_node(struct o2nm_node *node)
static void o2net_hb_node_down_cb(struct o2nm_node *node, int node_num,
void *data)
static void o2net_hb_node_up_cb(struct o2nm_node *node, int node_num,
void *data)
void o2net_unregister_hb_callbacks(void)
int o2net_register_hb_callbacks(void)
static int o2net_accept_one(struct socket *sock)
static void o2net_accept_many(struct work_struct *work)
static void o2net_listen_data_ready(struct sock *sk, int bytes)
static int o2net_open_listening_sock(__be32 addr, __be16 port)
int o2net_start_listening(struct o2nm_node *node)
void o2net_stop_listening(struct o2nm_node *node)
int o2net_init(void)
void o2net_exit(void)
