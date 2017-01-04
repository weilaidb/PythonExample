LIST_HEAD(ipx_routes);
DEFINE_RWLOCK(ipx_routes_lock);
extern struct ipx_interface *ipx_internal_net;
extern __be16 ipx_cksum(struct ipxhdr *packet, int length);
extern struct ipx_interface *ipxitf_find_using_net(__be32 net);
extern int ipxitf_demux_socket(struct ipx_interface *intrfc,
struct sk_buff *skb, int copy);
extern int ipxitf_demux_socket(struct ipx_interface *intrfc,
struct sk_buff *skb, int copy);
extern int ipxitf_send(struct ipx_interface *intrfc, struct sk_buff *skb,
char *node);
extern struct ipx_interface *ipxitf_find_using_net(__be32 net);
struct ipx_route *ipxrtr_lookup(__be32 net)
int ipxrtr_add_route(__be32 network, struct ipx_interface *intrfc,
unsigned char *node)
void ipxrtr_del_routes(struct ipx_interface *intrfc)
static int ipxrtr_create(struct ipx_route_definition *rd)
static int ipxrtr_delete(__be32 net)
int ipxrtr_route_skb(struct sk_buff *skb)
int ipxrtr_route_packet(struct sock *sk, struct sockaddr_ipx *usipx,
struct iovec *iov, size_t len, int noblock)
int ipxrtr_ioctl(unsigned int cmd, void __user *arg)
