static u32 config_port_ref;
static DEFINE_SPINLOCK(config_lock);
static const void *req_tlv_area;
static int req_tlv_space;
static int rep_headroom;
struct sk_buff *tipc_cfg_reply_alloc(int payload_size)
int tipc_cfg_append_tlv(struct sk_buff *buf, int tlv_type,
void *tlv_data, int tlv_data_size)
static struct sk_buff *tipc_cfg_reply_unsigned_type(u16 tlv_type, u32 value)
static struct sk_buff *tipc_cfg_reply_unsigned(u32 value)
struct sk_buff *tipc_cfg_reply_string_type(u16 tlv_type, char *string)
#define MAX_STATS_INFO 2000
static struct sk_buff *tipc_show_stats(void)
static struct sk_buff *cfg_enable_bearer(void)
static struct sk_buff *cfg_disable_bearer(void)
static struct sk_buff *cfg_set_own_addr(void)
static struct sk_buff *cfg_set_remote_mng(void)
static struct sk_buff *cfg_set_max_publications(void)
static struct sk_buff *cfg_set_max_subscriptions(void)
static struct sk_buff *cfg_set_max_ports(void)
static struct sk_buff *cfg_set_netid(void)
struct sk_buff *tipc_cfg_do_cmd(u32 orig_node, u16 cmd, const void *request_area,
int request_space, int reply_headroom)
static void cfg_named_msg_event(void *userdata,
u32 port_ref,
struct sk_buff **buf,
const unchar *msg,
u32 size,
u32 importance,
struct tipc_portid const *orig,
struct tipc_name_seq const *dest)
int tipc_cfg_init(void)
void tipc_cfg_stop(void)
