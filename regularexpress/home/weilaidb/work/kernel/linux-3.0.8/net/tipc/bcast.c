#define MAX_PKT_DEFAULT_MCAST 1500
#define BCLINK_WIN_DEFAULT 20
struct bcbearer_pair ;
struct bcbearer ;
struct bclink ;
static struct bcbearer *bcbearer;
static struct bclink *bclink;
static struct link *bcl;
static DEFINE_SPINLOCK(bc_lock);
struct tipc_node_map tipc_bcast_nmap;
const char tipc_bclink_name[] = "broadcast-link";
static void tipc_nmap_diff(struct tipc_node_map *nm_a,
struct tipc_node_map *nm_b,
struct tipc_node_map *nm_diff);
static u32 buf_seqno(struct sk_buff *buf)
static u32 bcbuf_acks(struct sk_buff *buf)
static void bcbuf_set_acks(struct sk_buff *buf, u32 acks)
static void bcbuf_decr_acks(struct sk_buff *buf)
static void bclink_set_last_sent(void)
u32 tipc_bclink_get_last_sent(void)
static void bclink_set_gap(struct tipc_node *n_ptr)
static int bclink_ack_allowed(u32 n)
struct tipc_node *tipc_bclink_retransmit_to(void)
static void bclink_retransmit_pkt(u32 after, u32 to)
void tipc_bclink_acknowledge(struct tipc_node *n_ptr, u32 acked)
static void bclink_send_ack(struct tipc_node *n_ptr)
static void bclink_send_nack(struct tipc_node *n_ptr)
void tipc_bclink_check_gap(struct tipc_node *n_ptr, u32 last_sent)
static void tipc_bclink_peek_nack(u32 dest, u32 sender_tag, u32 gap_after, u32 gap_to)
int tipc_bclink_send_msg(struct sk_buff *buf)
void tipc_bclink_recv_pkt(struct sk_buff *buf)
u32 tipc_bclink_acks_missing(struct tipc_node *n_ptr)
static int tipc_bcbearer_send(struct sk_buff *buf,
struct tipc_bearer *unused1,
struct tipc_media_addr *unused2)
void tipc_bcbearer_sort(void)
void tipc_bcbearer_push(void)
int tipc_bclink_stats(char *buf, const u32 buf_size)
int tipc_bclink_reset_stats(void)
int tipc_bclink_set_queue_limits(u32 limit)
int tipc_bclink_init(void)
void tipc_bclink_stop(void)
void tipc_nmap_add(struct tipc_node_map *nm_ptr, u32 node)
void tipc_nmap_remove(struct tipc_node_map *nm_ptr, u32 node)
static void tipc_nmap_diff(struct tipc_node_map *nm_a,
struct tipc_node_map *nm_b,
struct tipc_node_map *nm_diff)
void tipc_port_list_add(struct port_list *pl_ptr, u32 port)
void tipc_port_list_free(struct port_list *pl_ptr)
