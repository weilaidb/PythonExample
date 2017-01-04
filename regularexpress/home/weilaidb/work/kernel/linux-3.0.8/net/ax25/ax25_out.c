static DEFINE_SPINLOCK(ax25_frag_lock);
ax25_cb *ax25_send_frame(struct sk_buff *skb, int paclen, ax25_address *src, ax25_address *dest, ax25_digi *digi, struct net_device *dev)
EXPORT_SYMBOL(ax25_send_frame);
void ax25_output(ax25_cb *ax25, int paclen, struct sk_buff *skb)
static void ax25_send_iframe(ax25_cb *ax25, struct sk_buff *skb, int poll_bit)
void ax25_kick(ax25_cb *ax25)
void ax25_transmit_buffer(ax25_cb *ax25, struct sk_buff *skb, int type)
void ax25_queue_xmit(struct sk_buff *skb, struct net_device *dev)
int ax25_check_iframes_acked(ax25_cb *ax25, unsigned short nr)
