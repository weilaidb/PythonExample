#define BPDU_TYPE_CONFIG 0
#define BPDU_TYPE_TCN 0x80
struct stp_header ;
struct stp_config_pdu ;
#define NR16(p) (p[0] << 8 | p[1])
#define NR32(p) ((p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3])
static bool ebt_filter_config(const struct ebt_stp_info *info,
const struct stp_config_pdu *stpc)
static bool
ebt_stp_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int ebt_stp_mt_check(const struct xt_mtchk_param *par)
static struct xt_match ebt_stp_mt_reg __read_mostly = ;
static int __init ebt_stp_init(void)
static void __exit ebt_stp_fini(void)
module_init(ebt_stp_init);
module_exit(ebt_stp_fini);
MODULE_DESCRIPTION("Ebtables: Spanning Tree Protocol packet match");
MODULE_LICENSE("GPL");
