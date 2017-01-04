#define _TIPC_LINK_H
#define PUSH_FAILED   1
#define PUSH_FINISHED 2
#define WORKING_WORKING 560810u
#define WORKING_UNKNOWN 560811u
#define RESET_UNKNOWN   560812u
#define RESET_RESET     560813u
#define MAX_PKT_DEFAULT 1500
struct link ;
struct tipc_port;
struct link *tipc_link_create(struct tipc_node *n_ptr,
struct tipc_bearer *b_ptr,
const struct tipc_media_addr *media_addr);
void tipc_link_delete(struct link *l_ptr);
void tipc_link_changeover(struct link *l_ptr);
void tipc_link_send_duplicate(struct link *l_ptr, struct link *dest);
void tipc_link_reset_fragments(struct link *l_ptr);
int tipc_link_is_up(struct link *l_ptr);
int tipc_link_is_active(struct link *l_ptr);
u32 tipc_link_push_packet(struct link *l_ptr);
void tipc_link_stop(struct link *l_ptr);
struct sk_buff *tipc_link_cmd_config(const void *req_tlv_area, int req_tlv_space, u16 cmd);
struct sk_buff *tipc_link_cmd_show_stats(const void *req_tlv_area, int req_tlv_space);
struct sk_buff *tipc_link_cmd_reset_stats(const void *req_tlv_area, int req_tlv_space);
void tipc_link_reset(struct link *l_ptr);
int tipc_link_send(struct sk_buff *buf, u32 dest, u32 selector);
int tipc_link_send_buf(struct link *l_ptr, struct sk_buff *buf);
u32 tipc_link_get_max_pkt(u32 dest, u32 selector);
int tipc_link_send_sections_fast(struct tipc_port *sender,
struct iovec const *msg_sect,
const u32 num_sect,
unsigned int total_len,
u32 destnode);
void tipc_link_recv_bundle(struct sk_buff *buf);
int  tipc_link_recv_fragment(struct sk_buff **pending,
struct sk_buff **fb,
struct tipc_msg **msg);
void tipc_link_send_proto_msg(struct link *l_ptr, u32 msg_typ, int prob, u32 gap,
u32 tolerance, u32 priority, u32 acked_mtu);
void tipc_link_push_queue(struct link *l_ptr);
u32 tipc_link_defer_pkt(struct sk_buff **head, struct sk_buff **tail,
struct sk_buff *buf);
void tipc_link_wakeup_ports(struct link *l_ptr, int all);
void tipc_link_set_queue_limits(struct link *l_ptr, u32 window);
void tipc_link_retransmit(struct link *l_ptr, struct sk_buff *start, u32 retransmits);
static inline u32 mod(u32 x)
static inline int between(u32 lower, u32 upper, u32 n)
static inline int less_eq(u32 left, u32 right)
static inline int less(u32 left, u32 right)
static inline u32 lesser(u32 left, u32 right)
static inline int link_working_working(struct link *l_ptr)
static inline int link_working_unknown(struct link *l_ptr)
static inline int link_reset_unknown(struct link *l_ptr)
static inline int link_reset_reset(struct link *l_ptr)
static inline int link_blocked(struct link *l_ptr)
static inline int link_congested(struct link *l_ptr)
