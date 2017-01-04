static bool
ebt_802_3_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_802_3_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_802_3_mt_reg __read_mostly = ;
static int __init ebt_802_3_init(void)
static void __exit ebt_802_3_fini(void)
module_init(ebt_802_3_init);
module_exit(ebt_802_3_fini);
MODULE_DESCRIPTION("Ebtables: DSAP/SSAP field and SNAP type matching");
MODULE_LICENSE("GPL");
