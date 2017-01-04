#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: IPv6 IPsec-AH match");
MODULE_AUTHOR("Andras Kis-Szabo <kisza@sch.bme.hu>");
static inline bool
spi_match(u_int32_t min, u_int32_t max, u_int32_t spi, bool invert)
static bool ah_mt6(const struct sk_buff *skb, struct xt_action_param *par)
static int ah_mt6_check(const struct xt_mtchk_param *par)
static struct xt_match ah_mt6_reg __read_mostly = ;
static int __init ah_mt6_init(void)
static void __exit ah_mt6_exit(void)
module_init(ah_mt6_init);
module_exit(ah_mt6_exit);
