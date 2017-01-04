#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kiran Kumar Immidi");
MODULE_DESCRIPTION("Xtables: SCTP protocol packet match");
MODULE_ALIAS("ipt_sctp");
MODULE_ALIAS("ip6t_sctp");
#define SCCHECK(cond, option, flag, invflag) (!((flag) & (option)) \
|| (!!((invflag) & (option)) ^ (cond)))
static bool
match_flags(const struct xt_sctp_flag_info *flag_info,
const int flag_count,
u_int8_t chunktype,
u_int8_t chunkflags)
static inline bool
match_packet(const struct sk_buff *skb,
unsigned int offset,
const struct xt_sctp_info *info,
bool *hotdrop)
static bool
sctp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int sctp_mt_check(const struct xt_mtchk_param *par)
static struct xt_match sctp_mt_reg[] __read_mostly = ;
static int __init sctp_mt_init(void)
static void __exit sctp_mt_exit(void)
module_init(sctp_mt_init);
module_exit(sctp_mt_exit);
