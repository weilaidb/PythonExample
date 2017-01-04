#define __UM_NET_KERN_H
struct uml_net ;
struct uml_net_private ;
struct net_kern_info ;
struct transport ;
extern struct net_device *ether_init(int);
extern unsigned short ether_protocol(struct sk_buff *);
extern int tap_setup_common(char *str, char *type, char **dev_name,
char **mac_out, char **gate_addr);
extern void register_transport(struct transport *new);
extern unsigned short eth_protocol(struct sk_buff *skb);
