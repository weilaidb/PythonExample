int dccp_v4_connect(struct sock *sk, struct sockaddr *uaddr, int addr_len)
EXPORT_SYMBOL_GPL(dccp_v4_connect);
static inline void dccp_do_pmtu_discovery(struct sock *sk,
const struct iphdr *iph,
u32 mtu)
static void dccp_v4_err(struct sk_buff *skb, u32 info)
static inline __sum16 dccp_v4_csum_finish(struct sk_buff *skb,
__be32 src, __be32 dst)
void dccp_v4_send_check(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_v4_send_check);
static inline u64 dccp_v4_init_sequence(const struct sk_buff *skb)
struct sock *dccp_v4_request_recv_sock(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst)
EXPORT_SYMBOL_GPL(dccp_v4_request_recv_sock);
static struct sock *dccp_v4_hnd_req(struct sock *sk, struct sk_buff *skb)
static struct dst_entry* dccp_v4_route_skb(struct net *net, struct sock *sk,
struct sk_buff *skb)
static int dccp_v4_send_response(struct sock *sk, struct request_sock *req,
struct request_values *rv_unused)
static void dccp_v4_ctl_send_reset(struct sock *sk, struct sk_buff *rxskb)
static void dccp_v4_reqsk_destructor(struct request_sock *req)
static struct request_sock_ops dccp_request_sock_ops __read_mostly = ;
int dccp_v4_conn_request(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_v4_conn_request);
int dccp_v4_do_rcv(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_v4_do_rcv);
int dccp_invalid_packet(struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_invalid_packet);
static int dccp_v4_rcv(struct sk_buff *skb)
static const struct inet_connection_sock_af_ops dccp_ipv4_af_ops = ;
static int dccp_v4_init_sock(struct sock *sk)
static struct timewait_sock_ops dccp_timewait_sock_ops = ;
static struct proto dccp_v4_prot = ;
static const struct net_protocol dccp_v4_protocol = ;
static const struct proto_ops inet_dccp_ops = ;
static struct inet_protosw dccp_v4_protosw = ;
static int __net_init dccp_v4_init_net(struct net *net)
static void __net_exit dccp_v4_exit_net(struct net *net)
static struct pernet_operations dccp_v4_ops = ;
static int __init dccp_v4_init(void)
static void __exit dccp_v4_exit(void)
module_init(dccp_v4_init);
module_exit(dccp_v4_exit);
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_INET, 33, 6);
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_INET, 0, 6);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnaldo Carvalho de Melo <acme@mandriva.com>");
MODULE_DESCRIPTION("DCCP - Datagram Congestion Controlled Protocol");
