#define _NET_BATMAN_ADV_ROUTING_H_
void slide_own_bcast_window(struct hard_iface *hard_iface);
void receive_bat_packet(struct ethhdr *ethhdr,
struct batman_packet *batman_packet,
unsigned char *tt_buff, int tt_buff_len,
struct hard_iface *if_incoming);
void update_routes(struct bat_priv *bat_priv, struct orig_node *orig_node,
struct neigh_node *neigh_node, unsigned char *tt_buff,
int tt_buff_len);
int route_unicast_packet(struct sk_buff *skb, struct hard_iface *recv_if);
int recv_icmp_packet(struct sk_buff *skb, struct hard_iface *recv_if);
int recv_unicast_packet(struct sk_buff *skb, struct hard_iface *recv_if);
int recv_ucast_frag_packet(struct sk_buff *skb, struct hard_iface *recv_if);
int recv_bcast_packet(struct sk_buff *skb, struct hard_iface *recv_if);
int recv_vis_packet(struct sk_buff *skb, struct hard_iface *recv_if);
int recv_bat_packet(struct sk_buff *skb, struct hard_iface *recv_if);
struct neigh_node *find_router(struct bat_priv *bat_priv,
struct orig_node *orig_node,
struct hard_iface *recv_if);
void bonding_candidate_del(struct orig_node *orig_node,
struct neigh_node *neigh_node);
