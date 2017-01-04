static LIST_HEAD(ematch_ops);
static DEFINE_RWLOCK(ematch_mod_lock);
static struct tcf_ematch_ops *tcf_em_lookup(u16 kind)
int tcf_em_register(struct tcf_ematch_ops *ops)
EXPORT_SYMBOL(tcf_em_register);
void tcf_em_unregister(struct tcf_ematch_ops *ops)
EXPORT_SYMBOL(tcf_em_unregister);
static inline struct tcf_ematch *tcf_em_get_match(struct tcf_ematch_tree *tree,
int index)
static int tcf_em_validate(struct tcf_proto *tp,
struct tcf_ematch_tree_hdr *tree_hdr,
struct tcf_ematch *em, struct nlattr *nla, int idx)
static const struct nla_policy em_policy[TCA_EMATCH_TREE_MAX + 1] = ;
int tcf_em_tree_validate(struct tcf_proto *tp, struct nlattr *nla,
struct tcf_ematch_tree *tree)
EXPORT_SYMBOL(tcf_em_tree_validate);
void tcf_em_tree_destroy(struct tcf_proto *tp, struct tcf_ematch_tree *tree)
EXPORT_SYMBOL(tcf_em_tree_destroy);
int tcf_em_tree_dump(struct sk_buff *skb, struct tcf_ematch_tree *tree, int tlv)
EXPORT_SYMBOL(tcf_em_tree_dump);
static inline int tcf_em_match(struct sk_buff *skb, struct tcf_ematch *em,
struct tcf_pkt_info *info)
int __tcf_em_tree_match(struct sk_buff *skb, struct tcf_ematch_tree *tree,
struct tcf_pkt_info *info)
EXPORT_SYMBOL(__tcf_em_tree_match);
