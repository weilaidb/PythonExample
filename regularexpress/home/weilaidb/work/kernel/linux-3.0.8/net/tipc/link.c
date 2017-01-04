#define INVALID_SESSION 0x10000
#define  STARTING_EVT    856384768
#define  TRAFFIC_MSG_EVT 560815u
#define  TIMEOUT_EVT     560817u
#define OPEN_MSG   0
#define CLOSED_MSG 1
#define START_CHANGEOVER 100000u
struct link_name ;
static void link_handle_out_of_seq_msg(struct link *l_ptr,
struct sk_buff *buf);
static void link_recv_proto_msg(struct link *l_ptr, struct sk_buff *buf);
static int  link_recv_changeover_msg(struct link **l_ptr, struct sk_buff **buf);
static void link_set_supervision_props(struct link *l_ptr, u32 tolerance);
static int  link_send_sections_long(struct tipc_port *sender,
struct iovec const *msg_sect,
u32 num_sect, unsigned int total_len,
u32 destnode);
static void link_check_defragm_bufs(struct link *l_ptr);
static void link_state_event(struct link *l_ptr, u32 event);
static void link_reset_statistics(struct link *l_ptr);
static void link_print(struct link *l_ptr, const char *str);
static void link_start(struct link *l_ptr);
static int link_send_long_buf(struct link *l_ptr, struct sk_buff *buf);
static unsigned int align(unsigned int i)
static void link_init_max_pkt(struct link *l_ptr)
static u32 link_next_sent(struct link *l_ptr)
static u32 link_last_sent(struct link *l_ptr)
int tipc_link_is_up(struct link *l_ptr)
int tipc_link_is_active(struct link *l_ptr)
static int link_name_validate(const char *name, struct link_name *name_parts)
static void link_timeout(struct link *l_ptr)
static void link_set_timer(struct link *l_ptr, u32 time)
struct link *tipc_link_create(struct tipc_node *n_ptr,
struct tipc_bearer *b_ptr,
const struct tipc_media_addr *media_addr)
void tipc_link_delete(struct link *l_ptr)
static void link_start(struct link *l_ptr)
static int link_schedule_port(struct link *l_ptr, u32 origport, u32 sz)
void tipc_link_wakeup_ports(struct link *l_ptr, int all)
static void link_release_outqueue(struct link *l_ptr)
void tipc_link_reset_fragments(struct link *l_ptr)
void tipc_link_stop(struct link *l_ptr)
#define link_send_event(fcn, l_ptr, up) do  while (0)
void tipc_link_reset(struct link *l_ptr)
static void link_activate(struct link *l_ptr)
static void link_state_event(struct link *l_ptr, unsigned event)
static int link_bundle_buf(struct link *l_ptr,
struct sk_buff *bundler,
struct sk_buff *buf)
static void link_add_to_outqueue(struct link *l_ptr,
struct sk_buff *buf,
struct tipc_msg *msg)
static void link_add_chain_to_outqueue(struct link *l_ptr,
struct sk_buff *buf_chain,
u32 long_msgno)
int tipc_link_send_buf(struct link *l_ptr, struct sk_buff *buf)
int tipc_link_send(struct sk_buff *buf, u32 dest, u32 selector)
static int link_send_buf_fast(struct link *l_ptr, struct sk_buff *buf,
u32 *used_max_pkt)
int tipc_send_buf_fast(struct sk_buff *buf, u32 destnode)
int tipc_link_send_sections_fast(struct tipc_port *sender,
struct iovec const *msg_sect,
const u32 num_sect,
unsigned int total_len,
u32 destaddr)
static int link_send_sections_long(struct tipc_port *sender,
struct iovec const *msg_sect,
u32 num_sect,
unsigned int total_len,
u32 destaddr)
u32 tipc_link_push_packet(struct link *l_ptr)
void tipc_link_push_queue(struct link *l_ptr)
static void link_reset_all(unsigned long addr)
static void link_retransmit_failure(struct link *l_ptr, struct sk_buff *buf)
void tipc_link_retransmit(struct link *l_ptr, struct sk_buff *buf,
u32 retransmits)
static struct sk_buff *link_insert_deferred_queue(struct link *l_ptr,
struct sk_buff *buf)
static int link_recv_buf_validate(struct sk_buff *buf)
void tipc_recv_msg(struct sk_buff *head, struct tipc_bearer *b_ptr)
u32 tipc_link_defer_pkt(struct sk_buff **head,
struct sk_buff **tail,
struct sk_buff *buf)
static void link_handle_out_of_seq_msg(struct link *l_ptr,
struct sk_buff *buf)
void tipc_link_send_proto_msg(struct link *l_ptr, u32 msg_typ, int probe_msg,
u32 gap, u32 tolerance, u32 priority, u32 ack_mtu)
static void link_recv_proto_msg(struct link *l_ptr, struct sk_buff *buf)
static void tipc_link_tunnel(struct link *l_ptr,
struct tipc_msg *tunnel_hdr,
struct tipc_msg  *msg,
u32 selector)
void tipc_link_changeover(struct link *l_ptr)
void tipc_link_send_duplicate(struct link *l_ptr, struct link *tunnel)
static struct sk_buff *buf_extract(struct sk_buff *skb, u32 from_pos)
static int link_recv_changeover_msg(struct link **l_ptr,
struct sk_buff **buf)
void tipc_link_recv_bundle(struct sk_buff *buf)
static int link_send_long_buf(struct link *l_ptr, struct sk_buff *buf)
static void set_long_msg_seqno(struct sk_buff *buf, u32 seqno)
static u32 get_fragm_size(struct sk_buff *buf)
static void set_fragm_size(struct sk_buff *buf, u32 sz)
static u32 get_expected_frags(struct sk_buff *buf)
static void set_expected_frags(struct sk_buff *buf, u32 exp)
static u32 get_timer_cnt(struct sk_buff *buf)
static void incr_timer_cnt(struct sk_buff *buf)
int tipc_link_recv_fragment(struct sk_buff **pending, struct sk_buff **fb,
struct tipc_msg **m)
static void link_check_defragm_bufs(struct link *l_ptr)
static void link_set_supervision_props(struct link *l_ptr, u32 tolerance)
void tipc_link_set_queue_limits(struct link *l_ptr, u32 window)
static struct link *link_find_link(const char *name, struct tipc_node **node)
struct sk_buff *tipc_link_cmd_config(const void *req_tlv_area, int req_tlv_space,
u16 cmd)
static void link_reset_statistics(struct link *l_ptr)
struct sk_buff *tipc_link_cmd_reset_stats(const void *req_tlv_area, int req_tlv_space)
static u32 percent(u32 count, u32 total)
static int tipc_link_stats(const char *name, char *buf, const u32 buf_size)
#define MAX_LINK_STATS_INFO 2000
struct sk_buff *tipc_link_cmd_show_stats(const void *req_tlv_area, int req_tlv_space)
u32 tipc_link_get_max_pkt(u32 dest, u32 selector)
static void link_print(struct link *l_ptr, const char *str)
