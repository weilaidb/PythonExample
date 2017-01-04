static int em_u32_match(struct sk_buff *skb, struct tcf_ematch *em,
struct tcf_pkt_info *info)
static struct tcf_ematch_ops em_u32_ops = ;
static int __init init_em_u32(void)
static void __exit exit_em_u32(void)
MODULE_LICENSE("GPL");
module_init(init_em_u32);
module_exit(exit_em_u32);
MODULE_ALIAS_TCF_EMATCH(TCF_EM_U32);
