#define _TIPC_PORT_H
#define TIPC_FLOW_CONTROL_WIN 512
typedef void (*tipc_msg_err_event) (void *usr_handle, u32 portref,
struct sk_buff **buf, unsigned char const *data,
unsigned int size, int reason,
struct tipc_portid const *attmpt_destid);
typedef void (*tipc_named_msg_err_event) (void *usr_handle, u32 portref,
struct sk_buff **buf, unsigned char const *data,
unsigned int size, int reason,
struct tipc_name_seq const *attmpt_dest);
typedef void (*tipc_conn_shutdown_event) (void *usr_handle, u32 portref,
struct sk_buff **buf, unsigned char const *data,
unsigned int size, int reason);
typedef void (*tipc_msg_event) (void *usr_handle, u32 portref,
struct sk_buff **buf, unsigned char const *data,
unsigned int size, unsigned int importance,
struct tipc_portid const *origin);
typedef void (*tipc_named_msg_event) (void *usr_handle, u32 portref,
struct sk_buff **buf, unsigned char const *data,
unsigned int size, unsigned int importance,
struct tipc_portid const *orig,
struct tipc_name_seq const *dest);
typedef void (*tipc_conn_msg_event) (void *usr_handle, u32 portref,
struct sk_buff **buf, unsigned char const *data,
unsigned int size);
typedef void (*tipc_continue_event) (void *usr_handle, u32 portref);
struct user_port ;
struct tipc_port ;
extern spinlock_t tipc_port_list_lock;
struct port_list;
struct tipc_port *tipc_createport_raw(void *usr_handle,
u32 (*dispatcher)(struct tipc_port *, struct sk_buff *),
void (*wakeup)(struct tipc_port *), const u32 importance);
int tipc_reject_msg(struct sk_buff *buf, u32 err);
int tipc_send_buf_fast(struct sk_buff *buf, u32 destnode);
void tipc_acknowledge(u32 port_ref, u32 ack);
int tipc_createport(void *usr_handle,
unsigned int importance, tipc_msg_err_event error_cb,
tipc_named_msg_err_event named_error_cb,
tipc_conn_shutdown_event conn_error_cb, tipc_msg_event msg_cb,
tipc_named_msg_event named_msg_cb,
tipc_conn_msg_event conn_msg_cb,
tipc_continue_event continue_event_cb, u32 *portref);
int tipc_deleteport(u32 portref);
int tipc_portimportance(u32 portref, unsigned int *importance);
int tipc_set_portimportance(u32 portref, unsigned int importance);
int tipc_portunreliable(u32 portref, unsigned int *isunreliable);
int tipc_set_portunreliable(u32 portref, unsigned int isunreliable);
int tipc_portunreturnable(u32 portref, unsigned int *isunreturnable);
int tipc_set_portunreturnable(u32 portref, unsigned int isunreturnable);
int tipc_publish(u32 portref, unsigned int scope,
struct tipc_name_seq const *name_seq);
int tipc_withdraw(u32 portref, unsigned int scope,
struct tipc_name_seq const *name_seq);
int tipc_connect2port(u32 portref, struct tipc_portid const *port);
int tipc_disconnect(u32 portref);
int tipc_shutdown(u32 ref);
int tipc_disconnect_port(struct tipc_port *tp_ptr);
int tipc_send(u32 portref, unsigned int num_sect, struct iovec const *msg_sect,
unsigned int total_len);
int tipc_send2name(u32 portref, struct tipc_name const *name, u32 domain,
unsigned int num_sect, struct iovec const *msg_sect,
unsigned int total_len);
int tipc_send2port(u32 portref, struct tipc_portid const *dest,
unsigned int num_sect, struct iovec const *msg_sect,
unsigned int total_len);
int tipc_send_buf2port(u32 portref, struct tipc_portid const *dest,
struct sk_buff *buf, unsigned int dsz);
int tipc_multicast(u32 portref, struct tipc_name_seq const *seq,
unsigned int section_count, struct iovec const *msg,
unsigned int total_len);
int tipc_port_reject_sections(struct tipc_port *p_ptr, struct tipc_msg *hdr,
struct iovec const *msg_sect, u32 num_sect,
unsigned int total_len, int err);
struct sk_buff *tipc_port_get_ports(void);
void tipc_port_recv_proto_msg(struct sk_buff *buf);
void tipc_port_recv_mcast(struct sk_buff *buf, struct port_list *dp);
void tipc_port_reinit(void);
static inline struct tipc_port *tipc_port_lock(u32 ref)
static inline void tipc_port_unlock(struct tipc_port *p_ptr)
static inline struct tipc_port *tipc_port_deref(u32 ref)
static inline u32 tipc_peer_port(struct tipc_port *p_ptr)
static inline u32 tipc_peer_node(struct tipc_port *p_ptr)
static inline int tipc_port_congested(struct tipc_port *p_ptr)
static inline int tipc_port_recv_msg(struct sk_buff *buf)
