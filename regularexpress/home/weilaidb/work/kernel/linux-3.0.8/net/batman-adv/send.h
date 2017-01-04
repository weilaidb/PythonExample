#define _NET_BATMAN_ADV_SEND_H_
int send_skb_packet(struct sk_buff *skb,
struct hard_iface *hard_iface,
uint8_t *dst_addr);
void schedule_own_packet(struct hard_iface *hard_iface);
void schedule_forward_packet(struct orig_node *orig_node,
struct ethhdr *ethhdr,
struct batman_packet *batman_packet,
uint8_t directlink, int tt_buff_len,
struct hard_iface *if_outgoing);
int add_bcast_packet_to_list(struct bat_priv *bat_priv, struct sk_buff *skb);
void send_outstanding_bat_packet(struct work_struct *work);
void purge_outstanding_packets(struct bat_priv *bat_priv,
struct hard_iface *hard_iface);
