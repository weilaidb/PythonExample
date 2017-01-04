#define CSUM_TAB_MASK 15
static struct tcf_common *tcf_csum_ht[CSUM_TAB_MASK + 1];
static u32 csum_idx_gen;
static DEFINE_RWLOCK(csum_lock);
static struct tcf_hashinfo csum_hash_info = ;
static const struct nla_policy csum_policy[TCA_CSUM_MAX + 1] = ;
static int tcf_csum_init(struct nlattr *nla, struct nlattr *est,
struct tc_action *a, int ovr, int bind)
static int tcf_csum_cleanup(struct tc_action *a, int bind)
static void *tcf_csum_skb_nextlayer(struct sk_buff *skb,
unsigned int ihl, unsigned int ipl,
unsigned int jhl)
static int tcf_csum_ipv4_icmp(struct sk_buff *skb,
unsigned int ihl, unsigned int ipl)
static int tcf_csum_ipv4_igmp(struct sk_buff *skb,
unsigned int ihl, unsigned int ipl)
static int tcf_csum_ipv6_icmp(struct sk_buff *skb, struct ipv6hdr *ip6h,
unsigned int ihl, unsigned int ipl)
static int tcf_csum_ipv4_tcp(struct sk_buff *skb, struct iphdr *iph,
unsigned int ihl, unsigned int ipl)
static int tcf_csum_ipv6_tcp(struct sk_buff *skb, struct ipv6hdr *ip6h,
unsigned int ihl, unsigned int ipl)
static int tcf_csum_ipv4_udp(struct sk_buff *skb, struct iphdr *iph,
unsigned int ihl, unsigned int ipl, int udplite)
static int tcf_csum_ipv6_udp(struct sk_buff *skb, struct ipv6hdr *ip6h,
unsigned int ihl, unsigned int ipl, int udplite)
static int tcf_csum_ipv4(struct sk_buff *skb, u32 update_flags)
static int tcf_csum_ipv6_hopopts(struct ipv6_opt_hdr *ip6xh,
unsigned int ixhl, unsigned int *pl)
static int tcf_csum_ipv6(struct sk_buff *skb, u32 update_flags)
static int tcf_csum(struct sk_buff *skb,
struct tc_action *a, struct tcf_result *res)
static int tcf_csum_dump(struct sk_buff *skb,
struct tc_action *a, int bind, int ref)
static struct tc_action_ops act_csum_ops = ;
MODULE_DESCRIPTION("Checksum updating actions");
MODULE_LICENSE("GPL");
static int __init csum_init_module(void)
static void __exit csum_cleanup_module(void)
module_init(csum_init_module);
module_exit(csum_cleanup_module);
