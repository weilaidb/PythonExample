static int ax25_rx_fragment(ax25_cb *ax25, struct sk_buff *skb)
int ax25_rx_iframe(ax25_cb *ax25, struct sk_buff *skb)
static int ax25_process_rx_frame(ax25_cb *ax25, struct sk_buff *skb, int type, int dama)
static int ax25_rcv(struct sk_buff *skb, struct net_device *dev,
ax25_address *dev_addr, struct packet_type *ptype)
int ax25_kiss_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *ptype, struct net_device *orig_dev)
