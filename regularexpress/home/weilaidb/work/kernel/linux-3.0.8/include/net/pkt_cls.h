#define __NET_PKT_CLS_H
struct tcf_walker ;
extern int register_tcf_proto_ops(struct tcf_proto_ops *ops);
extern int unregister_tcf_proto_ops(struct tcf_proto_ops *ops);
static inline unsigned long
__cls_set_class(unsigned long *clp, unsigned long cl)
static inline unsigned long
cls_set_class(struct tcf_proto *tp, unsigned long *clp,
unsigned long cl)
static inline void
tcf_bind_filter(struct tcf_proto *tp, struct tcf_result *r, unsigned long base)
static inline void
tcf_unbind_filter(struct tcf_proto *tp, struct tcf_result *r)
struct tcf_exts ;
struct tcf_ext_map ;
static inline int
tcf_exts_is_predicative(struct tcf_exts *exts)
static inline int
tcf_exts_is_available(struct tcf_exts *exts)
static inline int
tcf_exts_exec(struct sk_buff *skb, struct tcf_exts *exts,
struct tcf_result *res)
extern int tcf_exts_validate(struct tcf_proto *tp, struct nlattr **tb,
struct nlattr *rate_tlv, struct tcf_exts *exts,
const struct tcf_ext_map *map);
extern void tcf_exts_destroy(struct tcf_proto *tp, struct tcf_exts *exts);
extern void tcf_exts_change(struct tcf_proto *tp, struct tcf_exts *dst,
struct tcf_exts *src);
extern int tcf_exts_dump(struct sk_buff *skb, struct tcf_exts *exts,
const struct tcf_ext_map *map);
extern int tcf_exts_dump_stats(struct sk_buff *skb, struct tcf_exts *exts,
const struct tcf_ext_map *map);
struct tcf_pkt_info ;
struct tcf_ematch_ops;
struct tcf_ematch ;
static inline int tcf_em_is_container(struct tcf_ematch *em)
static inline int tcf_em_is_simple(struct tcf_ematch *em)
static inline int tcf_em_is_inverted(struct tcf_ematch *em)
static inline int tcf_em_last_match(struct tcf_ematch *em)
static inline int tcf_em_early_end(struct tcf_ematch *em, int result)
struct tcf_ematch_tree ;
struct tcf_ematch_ops ;
extern int tcf_em_register(struct tcf_ematch_ops *);
extern void tcf_em_unregister(struct tcf_ematch_ops *);
extern int tcf_em_tree_validate(struct tcf_proto *, struct nlattr *,
struct tcf_ematch_tree *);
extern void tcf_em_tree_destroy(struct tcf_proto *, struct tcf_ematch_tree *);
extern int tcf_em_tree_dump(struct sk_buff *, struct tcf_ematch_tree *, int);
extern int __tcf_em_tree_match(struct sk_buff *, struct tcf_ematch_tree *,
struct tcf_pkt_info *);
static inline void tcf_em_tree_change(struct tcf_proto *tp,
struct tcf_ematch_tree *dst,
struct tcf_ematch_tree *src)
static inline int tcf_em_tree_match(struct sk_buff *skb,
struct tcf_ematch_tree *tree,
struct tcf_pkt_info *info)
#define MODULE_ALIAS_TCF_EMATCH(kind)	MODULE_ALIAS("ematch-kind-" __stringify(kind))
struct tcf_ematch_tree ;
#define tcf_em_tree_validate(tp, tb, t) ((void)(t), 0)
#define tcf_em_tree_destroy(tp, t) do  while(0)
#define tcf_em_tree_dump(skb, t, tlv) (0)
#define tcf_em_tree_change(tp, dst, src) do  while(0)
#define tcf_em_tree_match(skb, t, info) ((void)(info), 1)
static inline unsigned char * tcf_get_base_ptr(struct sk_buff *skb, int layer)
static inline int tcf_valid_offset(const struct sk_buff *skb,
const unsigned char *ptr, const int len)
static inline int
tcf_change_indev(struct tcf_proto *tp, char *indev, struct nlattr *indev_tlv)
static inline int
tcf_match_indev(struct sk_buff *skb, char *indev)
