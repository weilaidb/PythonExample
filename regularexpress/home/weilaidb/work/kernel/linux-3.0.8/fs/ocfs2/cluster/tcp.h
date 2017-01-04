#define O2CLUSTER_TCP_H
struct o2net_msg
;
typedef int (o2net_msg_handler_func)(struct o2net_msg *msg, u32 len, void *data,
void **ret_data);
typedef void (o2net_post_msg_handler_func)(int status, void *data,
void *ret_data);
#define O2NET_MAX_PAYLOAD_BYTES  (4096 - sizeof(struct o2net_msg))
#define O2NET_RECONNECT_DELAY_MS_DEFAULT	2000
#define O2NET_KEEPALIVE_DELAY_MS_DEFAULT	2000
#define O2NET_IDLE_TIMEOUT_MS_DEFAULT		30000
static inline int o2net_link_down(int err, struct socket *sock)
enum ;
int o2net_send_message(u32 msg_type, u32 key, void *data, u32 len,
u8 target_node, int *status);
int o2net_send_message_vec(u32 msg_type, u32 key, struct kvec *vec,
size_t veclen, u8 target_node, int *status);
int o2net_register_handler(u32 msg_type, u32 key, u32 max_len,
o2net_msg_handler_func *func, void *data,
o2net_post_msg_handler_func *post_func,
struct list_head *unreg_list);
void o2net_unregister_handler_list(struct list_head *list);
struct o2nm_node;
int o2net_register_hb_callbacks(void);
void o2net_unregister_hb_callbacks(void);
int o2net_start_listening(struct o2nm_node *node);
void o2net_stop_listening(struct o2nm_node *node);
void o2net_disconnect_node(struct o2nm_node *node);
int o2net_num_connected_peers(void);
int o2net_init(void);
void o2net_exit(void);
struct o2net_send_tracking;
struct o2net_sock_container;
int o2net_debugfs_init(void);
void o2net_debugfs_exit(void);
void o2net_debug_add_nst(struct o2net_send_tracking *nst);
void o2net_debug_del_nst(struct o2net_send_tracking *nst);
void o2net_debug_add_sc(struct o2net_sock_container *sc);
void o2net_debug_del_sc(struct o2net_sock_container *sc);
static inline int o2net_debugfs_init(void)
static inline void o2net_debugfs_exit(void)
static inline void o2net_debug_add_nst(struct o2net_send_tracking *nst)
static inline void o2net_debug_del_nst(struct o2net_send_tracking *nst)
static inline void o2net_debug_add_sc(struct o2net_sock_container *sc)
static inline void o2net_debug_del_sc(struct o2net_sock_container *sc)
