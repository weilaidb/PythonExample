struct nbyte_data ;
static int em_nbyte_change(struct tcf_proto *tp, void *data, int data_len,
struct tcf_ematch *em)
static int em_nbyte_match(struct sk_buff *skb, struct tcf_ematch *em,
struct tcf_pkt_info *info)
static struct tcf_ematch_ops em_nbyte_ops = ;
static int __init init_em_nbyte(void)
static void __exit exit_em_nbyte(void)
MODULE_LICENSE("GPL");
module_init(init_em_nbyte);
module_exit(exit_em_nbyte);
MODULE_ALIAS_TCF_EMATCH(TCF_EM_NBYTE);
