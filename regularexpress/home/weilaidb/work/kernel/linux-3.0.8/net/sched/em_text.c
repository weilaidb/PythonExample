struct text_match ;
#define EM_TEXT_PRIV(m) ((struct text_match *) (m)->data)
static int em_text_match(struct sk_buff *skb, struct tcf_ematch *m,
struct tcf_pkt_info *info)
static int em_text_change(struct tcf_proto *tp, void *data, int len,
struct tcf_ematch *m)
static void em_text_destroy(struct tcf_proto *tp, struct tcf_ematch *m)
static int em_text_dump(struct sk_buff *skb, struct tcf_ematch *m)
static struct tcf_ematch_ops em_text_ops = ;
static int __init init_em_text(void)
static void __exit exit_em_text(void)
MODULE_LICENSE("GPL");
module_init(init_em_text);
module_exit(exit_em_text);
MODULE_ALIAS_TCF_EMATCH(TCF_EM_TEXT);
