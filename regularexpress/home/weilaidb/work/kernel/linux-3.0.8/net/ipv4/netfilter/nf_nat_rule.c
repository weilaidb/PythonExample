#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define NAT_VALID_HOOKS ((1 << NF_INET_PRE_ROUTING) | \
(1 << NF_INET_POST_ROUTING) | \
(1 << NF_INET_LOCAL_OUT) | \
(1 << NF_INET_LOCAL_IN))
static const struct xt_table nat_table = ;
static unsigned int
ipt_snat_target(struct sk_buff *skb, const struct xt_action_param *par)
static unsigned int
ipt_dnat_target(struct sk_buff *skb, const struct xt_action_param *par)
static int ipt_snat_checkentry(const struct xt_tgchk_param *par)
static int ipt_dnat_checkentry(const struct xt_tgchk_param *par)
static unsigned int
alloc_null_binding(struct nf_conn *ct, unsigned int hooknum)
int nf_nat_rule_find(struct sk_buff *skb,
unsigned int hooknum,
const struct net_device *in,
const struct net_device *out,
struct nf_conn *ct)
static struct xt_target ipt_snat_reg __read_mostly = ;
static struct xt_target ipt_dnat_reg __read_mostly = ;
static int __net_init nf_nat_rule_net_init(struct net *net)
static void __net_exit nf_nat_rule_net_exit(struct net *net)
static struct pernet_operations nf_nat_rule_net_ops = ;
int __init nf_nat_rule_init(void)
void nf_nat_rule_cleanup(void)
