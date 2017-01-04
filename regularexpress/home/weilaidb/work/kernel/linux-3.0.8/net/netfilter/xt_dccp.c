MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: DCCP protocol packet match");
MODULE_ALIAS("ipt_dccp");
MODULE_ALIAS("ip6t_dccp");
#define DCCHECK(cond, option, flag, invflag) (!((flag) & (option)) \
|| (!!((invflag) & (option)) ^ (cond)))
static unsigned char *dccp_optbuf;
static DEFINE_SPINLOCK(dccp_buflock);
static inline bool
dccp_find_option(u_int8_t option,
const struct sk_buff *skb,
unsigned int protoff,
const struct dccp_hdr *dh,
bool *hotdrop)
static inline bool
match_types(const struct dccp_hdr *dh, u_int16_t typemask)
static inline bool
match_option(u_int8_t option, const struct sk_buff *skb, unsigned int protoff,
const struct dccp_hdr *dh, bool *hotdrop)
static bool
dccp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int dccp_mt_check(const struct xt_mtchk_param *par)
static struct xt_match dccp_mt_reg[] __read_mostly = ;
static int __init dccp_mt_init(void)
static void __exit dccp_mt_exit(void)
module_init(dccp_mt_init);
module_exit(dccp_mt_exit);
