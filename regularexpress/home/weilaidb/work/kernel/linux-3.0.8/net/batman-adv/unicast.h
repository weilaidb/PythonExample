#define _NET_BATMAN_ADV_UNICAST_H_
#define FRAG_TIMEOUT 10000
#define FRAG_BUFFER_SIZE 6
int frag_reassemble_skb(struct sk_buff *skb, struct bat_priv *bat_priv,
struct sk_buff **new_skb);
void frag_list_free(struct list_head *head);
int unicast_send_skb(struct sk_buff *skb, struct bat_priv *bat_priv);
int frag_send_skb(struct sk_buff *skb, struct bat_priv *bat_priv,
struct hard_iface *hard_iface, uint8_t dstaddr[]);
static inline int frag_can_reassemble(struct sk_buff *skb, int mtu)
