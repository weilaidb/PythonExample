static const struct inet_connection_sock_af_ops dccp_ipv6_mapped;
static const struct inet_connection_sock_af_ops dccp_ipv6_af_ops;
static void dccp_v6_hash(struct sock *sk)
static inline __sum16 dccp_v6_csum_finish(struct sk_buff *skb,
const struct in6_addr *saddr,
const struct in6_addr *daddr)
static inline void dccp_v6_send_check(struct sock *sk, struct sk_buff *skb)
static inline __u64 dccp_v6_init_sequence(struct sk_buff *skb)
static void dccp_v6_err(struct sk_buff *skb, struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static int dccp_v6_send_response(struct sock *sk, struct request_sock *req,
struct request_values *rv_unused)
static void dccp_v6_reqsk_destructor(struct request_sock *req)
static void dccp_v6_ctl_send_reset(struct sock *sk, struct sk_buff *rxskb)
static struct request_sock_ops dccp6_request_sock_ops = ;
static struct sock *dccp_v6_hnd_req(struct sock *sk,struct sk_buff *skb)
static int dccp_v6_conn_request(struct sock *sk, struct sk_buff *skb)
static struct sock *dccp_v6_request_recv_sock(struct sock *sk,
struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst)
static int dccp_v6_do_rcv(struct sock *sk, struct sk_buff *skb)
static int dccp_v6_rcv(struct sk_buff *skb)
static int dccp_v6_connect(struct sock *sk, struct sockaddr *uaddr,
int addr_len)
static const struct inet_connection_sock_af_ops dccp_ipv6_af_ops = ;
static const struct inet_connection_sock_af_ops dccp_ipv6_mapped = ;
static int dccp_v6_init_sock(struct sock *sk)
static void dccp_v6_destroy_sock(struct sock *sk)
static struct timewait_sock_ops dccp6_timewait_sock_ops = ;
static struct proto dccp_v6_prot = ;
static const struct inet6_protocol dccp_v6_protocol = ;
static const struct proto_ops inet6_dccp_ops = ;
static struct inet_protosw dccp_v6_protosw = ;
static int __net_init dccp_v6_init_net(struct net *net)
static void __net_exit dccp_v6_exit_net(struct net *net)
static struct pernet_operations dccp_v6_ops = ;
static int __init dccp_v6_init(void)
static void __exit dccp_v6_exit(void)
module_init(dccp_v6_init);
module_exit(dccp_v6_exit);
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_INET6, 33, 6);
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_INET6, 0, 6);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnaldo Carvalho de Melo <acme@mandriva.com>");
MODULE_DESCRIPTION("DCCPv6 - Datagram Congestion Controlled Protocol");
