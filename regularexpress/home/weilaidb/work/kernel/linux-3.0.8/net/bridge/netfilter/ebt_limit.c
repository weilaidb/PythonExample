#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static DEFINE_SPINLOCK(limit_lock);
#define MAX_CPJ (0xFFFFFFFF / (HZ*60*60*24))
#define _POW2_BELOW2(x) ((x)|((x)>>1))
#define _POW2_BELOW4(x) (_POW2_BELOW2(x)|_POW2_BELOW2((x)>>2))
#define _POW2_BELOW8(x) (_POW2_BELOW4(x)|_POW2_BELOW4((x)>>4))
#define _POW2_BELOW16(x) (_POW2_BELOW8(x)|_POW2_BELOW8((x)>>8))
#define _POW2_BELOW32(x) (_POW2_BELOW16(x)|_POW2_BELOW16((x)>>16))
#define POW2_BELOW32(x) ((_POW2_BELOW32(x)>>1) + 1)
#define CREDITS_PER_JIFFY POW2_BELOW32(MAX_CPJ)
static bool
ebt_limit_mt(const struct sk_buff *skb, struct xt_action_param *par)
static u_int32_t
user2credits(u_int32_t user)
static int ebt_limit_mt_check(const struct xt_mtchk_param *par)
struct ebt_compat_limit_info ;
static struct xt_match ebt_limit_mt_reg __read_mostly = ;
static int __init ebt_limit_init(void)
static void __exit ebt_limit_fini(void)
module_init(ebt_limit_init);
module_exit(ebt_limit_fini);
MODULE_DESCRIPTION("Ebtables: Rate-limit match");
MODULE_LICENSE("GPL");
