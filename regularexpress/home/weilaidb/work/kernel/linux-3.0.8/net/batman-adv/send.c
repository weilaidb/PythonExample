static void send_outstanding_bcast_packet(struct work_struct *work);
static uint8_t hop_penalty(const uint8_t tq, struct bat_priv *bat_priv)
static unsigned long own_send_time(struct bat_priv *bat_priv)
static unsigned long forward_send_time(void)
int send_skb_packet(struct sk_buff *skb,
struct hard_iface *hard_iface,
uint8_t *dst_addr)
static void send_packet_to_if(struct forw_packet *forw_packet,
struct hard_iface *hard_iface)
static void send_packet(struct forw_packet *forw_packet)
static void rebuild_batman_packet(struct bat_priv *bat_priv,
struct hard_iface *hard_iface)
void schedule_own_packet(struct hard_iface *hard_iface)
void schedule_forward_packet(struct orig_node *orig_node,
struct ethhdr *ethhdr,
struct batman_packet *batman_packet,
uint8_t directlink, int tt_buff_len,
struct hard_iface *if_incoming)
static void forw_packet_free(struct forw_packet *forw_packet)
static void _add_bcast_packet_to_list(struct bat_priv *bat_priv,
struct forw_packet *forw_packet,
unsigned long send_time)
int add_bcast_packet_to_list(struct bat_priv *bat_priv, struct sk_buff *skb)
static void send_outstanding_bcast_packet(struct work_struct *work)
void send_outstanding_bat_packet(struct work_struct *work)
void purge_outstanding_packets(struct bat_priv *bat_priv,
struct hard_iface *hard_iface)
