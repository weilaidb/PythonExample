static inline int cmp_needs_transformation(struct tcf_em_cmp *cmp)
static int em_cmp_match(struct sk_buff *skb, struct tcf_ematch *em,
struct tcf_pkt_info *info)
static struct tcf_ematch_ops em_cmp_ops = ;
static int __init init_em_cmp(void)
static void __exit exit_em_cmp(void)
MODULE_LICENSE("GPL");
module_init(init_em_cmp);
module_exit(exit_em_cmp);
MODULE_ALIAS_TCF_EMATCH(TCF_EM_CMP);
