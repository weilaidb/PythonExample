LIST_HEAD(x25_forward_list);
DEFINE_RWLOCK(x25_forward_list_lock);
int x25_forward_call(struct x25_address *dest_addr, struct x25_neigh *from,
struct sk_buff *skb, int lci)
int x25_forward_data(int lci, struct x25_neigh *from, struct sk_buff *skb)
void x25_clear_forward_by_lci(unsigned int lci)
void x25_clear_forward_by_dev(struct net_device *dev)
