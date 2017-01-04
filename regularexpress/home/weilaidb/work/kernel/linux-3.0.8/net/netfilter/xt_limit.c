#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct xt_limit_priv ;
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Herve Eychenne <rv@wallfire.org>");
MODULE_DESCRIPTION("Xtables: rate-limit match");
MODULE_ALIAS("ipt_limit");
MODULE_ALIAS("ip6t_limit");
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
limit_mt(const struct sk_buff *skb, struct xt_action_param *par)
static u_int32_t
user2credits(u_int32_t user)
static int limit_mt_check(const struct xt_mtchk_param *par)
static void limit_mt_destroy(const struct xt_mtdtor_param *par)
struct compat_xt_rateinfo ;
static void limit_mt_compat_from_user(void *dst, const void *src)
static int limit_mt_compat_to_user(void __user *dst, const void *src)
static struct xt_match limit_mt_reg __read_mostly = ;
static int __init limit_mt_init(void)
static void __exit limit_mt_exit(void)
module_init(limit_mt_init);
module_exit(limit_mt_exit);
