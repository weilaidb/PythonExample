#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static bool ebt_mac_wormhash_contains(const struct ebt_mac_wormhash *wh,
const char *mac, __be32 ip)
static int ebt_mac_wormhash_check_integrity(const struct ebt_mac_wormhash
*wh)
static int get_ip_dst(const struct sk_buff *skb, __be32 *addr)
static int get_ip_src(const struct sk_buff *skb, __be32 *addr)
static bool
ebt_among_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_among_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_among_mt_reg __read_mostly = ;
static int __init ebt_among_init(void)
static void __exit ebt_among_fini(void)
module_init(ebt_among_init);
module_exit(ebt_among_fini);
MODULE_DESCRIPTION("Ebtables: Combined MAC/IP address list matching");
MODULE_LICENSE("GPL");
