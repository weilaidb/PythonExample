#define _NET_BATMAN_ADV_SOFT_INTERFACE_H_
int my_skb_head_push(struct sk_buff *skb, unsigned int len);
int softif_neigh_seq_print_text(struct seq_file *seq, void *offset);
void softif_neigh_purge(struct bat_priv *bat_priv);
int interface_tx(struct sk_buff *skb, struct net_device *soft_iface);
void interface_rx(struct net_device *soft_iface,
struct sk_buff *skb, struct hard_iface *recv_if,
int hdr_size);
struct net_device *softif_create(char *name);
void softif_destroy(struct net_device *soft_iface);
int softif_is_valid(struct net_device *net_dev);
