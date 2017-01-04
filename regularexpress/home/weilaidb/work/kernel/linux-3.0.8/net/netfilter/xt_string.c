MODULE_AUTHOR("Pablo Neira Ayuso <pablo@eurodev.net>");
MODULE_DESCRIPTION("Xtables: string-based matching");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_string");
MODULE_ALIAS("ip6t_string");
static bool
string_mt(const struct sk_buff *skb, struct xt_action_param *par)
#define STRING_TEXT_PRIV(m) ((struct xt_string_info *)(m))
static int string_mt_check(const struct xt_mtchk_param *par)
static void string_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match xt_string_mt_reg __read_mostly = ;
static int __init string_mt_init(void)
static void __exit string_mt_exit(void)
module_init(string_mt_init);
module_exit(string_mt_exit);
