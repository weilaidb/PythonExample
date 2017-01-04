#define MODULE_VERS "0.6"
MODULE_AUTHOR("Nick Fedchik <nick@fedchik.org.ua>");
MODULE_DESCRIPTION("Ebtables: 802.1Q VLAN tag match");
MODULE_LICENSE("GPL");
#define GET_BITMASK(_BIT_MASK_) info->bitmask & _BIT_MASK_
#define EXIT_ON_MISMATCH(_MATCH_,_MASK_)
static bool
ebt_vlan_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_vlan_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_vlan_mt_reg __read_mostly = ;
static int __init ebt_vlan_init(void)
static void __exit ebt_vlan_fini(void)
module_init(ebt_vlan_init);
module_exit(ebt_vlan_fini);
