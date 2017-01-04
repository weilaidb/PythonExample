struct rsvp_head ;
struct rsvp_session ;
struct rsvp_filter ;
static inline unsigned int hash_dst(__be32 *dst, u8 protocol, u8 tunnelid)
static inline unsigned int hash_src(__be32 *src)
static struct tcf_ext_map rsvp_ext_map = ;
#define RSVP_APPLY_RESULT()				\
static int rsvp_classify(struct sk_buff *skb, struct tcf_proto *tp,
struct tcf_result *res)
static unsigned long rsvp_get(struct tcf_proto *tp, u32 handle)
static void rsvp_put(struct tcf_proto *tp, unsigned long f)
static int rsvp_init(struct tcf_proto *tp)
static void
rsvp_delete_filter(struct tcf_proto *tp, struct rsvp_filter *f)
static void rsvp_destroy(struct tcf_proto *tp)
static int rsvp_delete(struct tcf_proto *tp, unsigned long arg)
static unsigned int gen_handle(struct tcf_proto *tp, unsigned salt)
static int tunnel_bts(struct rsvp_head *data)
static void tunnel_recycle(struct rsvp_head *data)
static u32 gen_tunnel(struct rsvp_head *data)
static const struct nla_policy rsvp_policy[TCA_RSVP_MAX + 1] = ;
static int rsvp_change(struct tcf_proto *tp, unsigned long base,
u32 handle,
struct nlattr **tca,
unsigned long *arg)
static void rsvp_walk(struct tcf_proto *tp, struct tcf_walker *arg)
static int rsvp_dump(struct tcf_proto *tp, unsigned long fh,
struct sk_buff *skb, struct tcmsg *t)
static struct tcf_proto_ops RSVP_OPS = ;
static int __init init_rsvp(void)
static void __exit exit_rsvp(void)
module_init(init_rsvp)
module_exit(exit_rsvp)
