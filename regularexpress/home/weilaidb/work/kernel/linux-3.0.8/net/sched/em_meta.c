struct meta_obj ;
struct meta_value ;
struct meta_match ;
static inline int meta_id(struct meta_value *v)
static inline int meta_type(struct meta_value *v)
#define META_COLLECTOR(FUNC) static void meta_##FUNC(struct sk_buff *skb, \
struct tcf_pkt_info *info, struct meta_value *v, \
struct meta_obj *dst, int *err)
META_COLLECTOR(int_random)
static inline unsigned long fixed_loadavg(int load)
META_COLLECTOR(int_loadavg_0)
META_COLLECTOR(int_loadavg_1)
META_COLLECTOR(int_loadavg_2)
static inline int int_dev(struct net_device *dev, struct meta_obj *dst)
static inline int var_dev(struct net_device *dev, struct meta_obj *dst)
META_COLLECTOR(int_dev)
META_COLLECTOR(var_dev)
META_COLLECTOR(int_vlan_tag)
META_COLLECTOR(int_priority)
META_COLLECTOR(int_protocol)
META_COLLECTOR(int_pkttype)
META_COLLECTOR(int_pktlen)
META_COLLECTOR(int_datalen)
META_COLLECTOR(int_maclen)
META_COLLECTOR(int_rxhash)
META_COLLECTOR(int_mark)
META_COLLECTOR(int_tcindex)
META_COLLECTOR(int_rtclassid)
META_COLLECTOR(int_rtiif)
#define SKIP_NONLOCAL(skb)			\
if (unlikely(skb->sk == NULL))
META_COLLECTOR(int_sk_family)
META_COLLECTOR(int_sk_state)
META_COLLECTOR(int_sk_reuse)
META_COLLECTOR(int_sk_bound_if)
META_COLLECTOR(var_sk_bound_if)
META_COLLECTOR(int_sk_refcnt)
META_COLLECTOR(int_sk_rcvbuf)
META_COLLECTOR(int_sk_shutdown)
META_COLLECTOR(int_sk_proto)
META_COLLECTOR(int_sk_type)
META_COLLECTOR(int_sk_rmem_alloc)
META_COLLECTOR(int_sk_wmem_alloc)
META_COLLECTOR(int_sk_omem_alloc)
META_COLLECTOR(int_sk_rcv_qlen)
META_COLLECTOR(int_sk_snd_qlen)
META_COLLECTOR(int_sk_wmem_queued)
META_COLLECTOR(int_sk_fwd_alloc)
META_COLLECTOR(int_sk_sndbuf)
META_COLLECTOR(int_sk_alloc)
META_COLLECTOR(int_sk_route_caps)
META_COLLECTOR(int_sk_hash)
META_COLLECTOR(int_sk_lingertime)
META_COLLECTOR(int_sk_err_qlen)
META_COLLECTOR(int_sk_ack_bl)
META_COLLECTOR(int_sk_max_ack_bl)
META_COLLECTOR(int_sk_prio)
META_COLLECTOR(int_sk_rcvlowat)
META_COLLECTOR(int_sk_rcvtimeo)
META_COLLECTOR(int_sk_sndtimeo)
META_COLLECTOR(int_sk_sendmsg_off)
META_COLLECTOR(int_sk_write_pend)
struct meta_ops ;
#define META_ID(name) TCF_META_ID_##name
#define META_FUNC(name)
static struct meta_ops __meta_ops[TCF_META_TYPE_MAX + 1][TCF_META_ID_MAX + 1] = ;
static inline struct meta_ops *meta_ops(struct meta_value *val)
static int meta_var_compare(struct meta_obj *a, struct meta_obj *b)
static int meta_var_change(struct meta_value *dst, struct nlattr *nla)
static void meta_var_destroy(struct meta_value *v)
static void meta_var_apply_extras(struct meta_value *v,
struct meta_obj *dst)
static int meta_var_dump(struct sk_buff *skb, struct meta_value *v, int tlv)
static int meta_int_compare(struct meta_obj *a, struct meta_obj *b)
static int meta_int_change(struct meta_value *dst, struct nlattr *nla)
static void meta_int_apply_extras(struct meta_value *v,
struct meta_obj *dst)
static int meta_int_dump(struct sk_buff *skb, struct meta_value *v, int tlv)
struct meta_type_ops ;
static struct meta_type_ops __meta_type_ops[TCF_META_TYPE_MAX + 1] = ;
static inline struct meta_type_ops *meta_type_ops(struct meta_value *v)
static int meta_get(struct sk_buff *skb, struct tcf_pkt_info *info,
struct meta_value *v, struct meta_obj *dst)
static int em_meta_match(struct sk_buff *skb, struct tcf_ematch *m,
struct tcf_pkt_info *info)
static void meta_delete(struct meta_match *meta)
static inline int meta_change_data(struct meta_value *dst, struct nlattr *nla)
static inline int meta_is_supported(struct meta_value *val)
static const struct nla_policy meta_policy[TCA_EM_META_MAX + 1] = ;
static int em_meta_change(struct tcf_proto *tp, void *data, int len,
struct tcf_ematch *m)
static void em_meta_destroy(struct tcf_proto *tp, struct tcf_ematch *m)
static int em_meta_dump(struct sk_buff *skb, struct tcf_ematch *em)
static struct tcf_ematch_ops em_meta_ops = ;
static int __init init_em_meta(void)
static void __exit exit_em_meta(void)
MODULE_LICENSE("GPL");
module_init(init_em_meta);
module_exit(exit_em_meta);
MODULE_ALIAS_TCF_EMATCH(TCF_EM_META);
