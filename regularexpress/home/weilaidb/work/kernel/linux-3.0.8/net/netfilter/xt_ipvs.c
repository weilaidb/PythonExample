#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Hannes Eder <heder@google.com>");
MODULE_DESCRIPTION("Xtables: match IPVS connection properties");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_ipvs");
MODULE_ALIAS("ip6t_ipvs");
static bool ipvs_mt_addrcmp(const union nf_inet_addr *kaddr,
const union nf_inet_addr *uaddr,
const union nf_inet_addr *umask,
unsigned int l3proto)
static bool
ipvs_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ipvs_mt_check(const struct xt_mtchk_param *par)
static struct xt_match xt_ipvs_mt_reg __read_mostly = ;
static int __init ipvs_mt_init(void)
static void __exit ipvs_mt_exit(void)
module_init(ipvs_mt_init);
module_exit(ipvs_mt_exit);
