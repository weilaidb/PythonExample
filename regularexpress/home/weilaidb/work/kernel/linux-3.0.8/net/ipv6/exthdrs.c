#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
int ipv6_find_tlv(struct sk_buff *skb, int offset, int type)
EXPORT_SYMBOL_GPL(ipv6_find_tlv);
struct tlvtype_proc ;
static int ip6_tlvopt_unknown(struct sk_buff *skb, int optoff)
static int ip6_parse_tlv(struct tlvtype_proc *procs, struct sk_buff *skb)
#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
static int ipv6_dest_hao(struct sk_buff *skb, int optoff)
static struct tlvtype_proc tlvprocdestopt_lst[] = ;
static int ipv6_destopt_rcv(struct sk_buff *skb)
static int ipv6_rthdr_rcv(struct sk_buff *skb)
static const struct inet6_protocol rthdr_protocol = ;
static const struct inet6_protocol destopt_protocol = ;
static const struct inet6_protocol nodata_protocol = ;
int __init ipv6_exthdrs_init(void)
;
void ipv6_exthdrs_exit(void)
static inline struct inet6_dev *ipv6_skb_idev(struct sk_buff *skb)
static inline struct net *ipv6_skb_net(struct sk_buff *skb)
static int ipv6_hop_ra(struct sk_buff *skb, int optoff)
static int ipv6_hop_jumbo(struct sk_buff *skb, int optoff)
static struct tlvtype_proc tlvprochopopt_lst[] = ;
int ipv6_parse_hopopts(struct sk_buff *skb)
static void ipv6_push_rthdr(struct sk_buff *skb, u8 *proto,
struct ipv6_rt_hdr *opt,
struct in6_addr **addr_p)
static void ipv6_push_exthdr(struct sk_buff *skb, u8 *proto, u8 type, struct ipv6_opt_hdr *opt)
void ipv6_push_nfrag_opts(struct sk_buff *skb, struct ipv6_txoptions *opt,
u8 *proto,
struct in6_addr **daddr)
EXPORT_SYMBOL(ipv6_push_nfrag_opts);
void ipv6_push_frag_opts(struct sk_buff *skb, struct ipv6_txoptions *opt, u8 *proto)
struct ipv6_txoptions *
ipv6_dup_options(struct sock *sk, struct ipv6_txoptions *opt)
EXPORT_SYMBOL_GPL(ipv6_dup_options);
static int ipv6_renew_option(void *ohdr,
struct ipv6_opt_hdr __user *newopt, int newoptlen,
int inherit,
struct ipv6_opt_hdr **hdr,
char **p)
struct ipv6_txoptions *
ipv6_renew_options(struct sock *sk, struct ipv6_txoptions *opt,
int newtype,
struct ipv6_opt_hdr __user *newopt, int newoptlen)
struct ipv6_txoptions *ipv6_fixup_options(struct ipv6_txoptions *opt_space,
struct ipv6_txoptions *opt)
struct in6_addr *fl6_update_dst(struct flowi6 *fl6,
const struct ipv6_txoptions *opt,
struct in6_addr *orig)
EXPORT_SYMBOL_GPL(fl6_update_dst);
