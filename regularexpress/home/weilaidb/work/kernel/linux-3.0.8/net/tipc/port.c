#define PROBING_INTERVAL 3600000
#define CONFIRMED 0
#define PROBING 1
#define MAX_REJECT_SIZE 1024
static struct sk_buff *msg_queue_head;
static struct sk_buff *msg_queue_tail;
DEFINE_SPINLOCK(tipc_port_list_lock);
static DEFINE_SPINLOCK(queue_lock);
static LIST_HEAD(ports);
static void port_handle_node_down(unsigned long ref);
static struct sk_buff *port_build_self_abort_msg(struct tipc_port *, u32 err);
static struct sk_buff *port_build_peer_abort_msg(struct tipc_port *, u32 err);
static void port_timeout(unsigned long ref);
static u32 port_peernode(struct tipc_port *p_ptr)
static u32 port_peerport(struct tipc_port *p_ptr)
int tipc_multicast(u32 ref, struct tipc_name_seq const *seq,
u32 num_sect, struct iovec const *msg_sect,
unsigned int total_len)
void tipc_port_recv_mcast(struct sk_buff *buf, struct port_list *dp)
struct tipc_port *tipc_createport_raw(void *usr_handle,
u32 (*dispatcher)(struct tipc_port *, struct sk_buff *),
void (*wakeup)(struct tipc_port *),
const u32 importance)
int tipc_deleteport(u32 ref)
static int port_unreliable(struct tipc_port *p_ptr)
int tipc_portunreliable(u32 ref, unsigned int *isunreliable)
int tipc_set_portunreliable(u32 ref, unsigned int isunreliable)
static int port_unreturnable(struct tipc_port *p_ptr)
int tipc_portunreturnable(u32 ref, unsigned int *isunrejectable)
int tipc_set_portunreturnable(u32 ref, unsigned int isunrejectable)
static struct sk_buff *port_build_proto_msg(u32 destport, u32 destnode,
u32 origport, u32 orignode,
u32 usr, u32 type, u32 err,
u32 ack)
int tipc_reject_msg(struct sk_buff *buf, u32 err)
int tipc_port_reject_sections(struct tipc_port *p_ptr, struct tipc_msg *hdr,
struct iovec const *msg_sect, u32 num_sect,
unsigned int total_len, int err)
static void port_timeout(unsigned long ref)
static void port_handle_node_down(unsigned long ref)
static struct sk_buff *port_build_self_abort_msg(struct tipc_port *p_ptr, u32 err)
static struct sk_buff *port_build_peer_abort_msg(struct tipc_port *p_ptr, u32 err)
void tipc_port_recv_proto_msg(struct sk_buff *buf)
static void port_print(struct tipc_port *p_ptr, struct print_buf *buf, int full_id)
#define MAX_PORT_QUERY 32768
struct sk_buff *tipc_port_get_ports(void)
void tipc_port_reinit(void)
static void port_dispatcher_sigh(void *dummy)
static u32 port_dispatcher(struct tipc_port *dummy, struct sk_buff *buf)
static void port_wakeup_sh(unsigned long ref)
static void port_wakeup(struct tipc_port *p_ptr)
void tipc_acknowledge(u32 ref, u32 ack)
int tipc_createport(void *usr_handle,
unsigned int importance,
tipc_msg_err_event error_cb,
tipc_named_msg_err_event named_error_cb,
tipc_conn_shutdown_event conn_error_cb,
tipc_msg_event msg_cb,
tipc_named_msg_event named_msg_cb,
tipc_conn_msg_event conn_msg_cb,
tipc_continue_event continue_event_cb,
u32 *portref)
int tipc_portimportance(u32 ref, unsigned int *importance)
int tipc_set_portimportance(u32 ref, unsigned int imp)
int tipc_publish(u32 ref, unsigned int scope, struct tipc_name_seq const *seq)
int tipc_withdraw(u32 ref, unsigned int scope, struct tipc_name_seq const *seq)
int tipc_connect2port(u32 ref, struct tipc_portid const *peer)
int tipc_disconnect_port(struct tipc_port *tp_ptr)
int tipc_disconnect(u32 ref)
int tipc_shutdown(u32 ref)
static int tipc_port_recv_sections(struct tipc_port *sender, unsigned int num_sect,
struct iovec const *msg_sect,
unsigned int total_len)
int tipc_send(u32 ref, unsigned int num_sect, struct iovec const *msg_sect,
unsigned int total_len)
int tipc_send2name(u32 ref, struct tipc_name const *name, unsigned int domain,
unsigned int num_sect, struct iovec const *msg_sect,
unsigned int total_len)
int tipc_send2port(u32 ref, struct tipc_portid const *dest,
unsigned int num_sect, struct iovec const *msg_sect,
unsigned int total_len)
int tipc_send_buf2port(u32 ref, struct tipc_portid const *dest,
struct sk_buff *buf, unsigned int dsz)
