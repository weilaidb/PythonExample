static int x25_receive_data(struct sk_buff *skb, struct x25_neigh *nb)
int x25_lapb_receive_frame(struct sk_buff *skb, struct net_device *dev,
struct packet_type *ptype, struct net_device *orig_dev)
void x25_establish_link(struct x25_neigh *nb)
void x25_terminate_link(struct x25_neigh *nb)
void x25_send_frame(struct sk_buff *skb, struct x25_neigh *nb)
