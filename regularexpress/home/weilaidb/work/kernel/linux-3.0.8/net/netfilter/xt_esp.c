#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yon Uriarte <yon@astaro.de>");
MODULE_DESCRIPTION("Xtables: IPsec-ESP packet match");
MODULE_ALIAS("ipt_esp");
MODULE_ALIAS("ip6t_esp");
static inline bool
spi_match(u_int32_t min, u_int32_t max, u_int32_t spi, bool invert)
static bool esp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int esp_mt_check(const struct xt_mtchk_param *par)
static struct xt_match esp_mt_reg[] __read_mostly = ;
static int __init esp_mt_init(void)
static void __exit esp_mt_exit(void)
module_init(esp_mt_init);
module_exit(esp_mt_exit);
