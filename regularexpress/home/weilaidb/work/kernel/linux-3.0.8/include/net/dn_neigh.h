#define _NET_DN_NEIGH_H
struct dn_neigh ;
extern void dn_neigh_init(void);
extern void dn_neigh_cleanup(void);
extern int dn_neigh_router_hello(struct sk_buff *skb);
extern int dn_neigh_endnode_hello(struct sk_buff *skb);
extern void dn_neigh_pointopoint_hello(struct sk_buff *skb);
extern int dn_neigh_elist(struct net_device *dev, unsigned char *ptr, int n);
extern struct neigh_table dn_neigh_table;
