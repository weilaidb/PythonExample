#define _NF_CONNTRACK_CORE_H
extern unsigned int nf_conntrack_in(struct net *net,
u_int8_t pf,
unsigned int hooknum,
struct sk_buff *skb);
extern int nf_conntrack_init(struct net *net);
extern void nf_conntrack_cleanup(struct net *net);
extern int nf_conntrack_proto_init(void);
extern void nf_conntrack_proto_fini(void);
extern bool
nf_ct_get_tuple(const struct sk_buff *skb,
unsigned int nhoff,
unsigned int dataoff,
u_int16_t l3num,
u_int8_t protonum,
struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_l3proto *l3proto,
const struct nf_conntrack_l4proto *l4proto);
extern bool
nf_ct_invert_tuple(struct nf_conntrack_tuple *inverse,
const struct nf_conntrack_tuple *orig,
const struct nf_conntrack_l3proto *l3proto,
const struct nf_conntrack_l4proto *l4proto);
extern struct nf_conntrack_tuple_hash *
nf_conntrack_find_get(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple);
extern int __nf_conntrack_confirm(struct sk_buff *skb);
static inline int nf_conntrack_confirm(struct sk_buff *skb)
int
print_tuple(struct seq_file *s, const struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_l3proto *l3proto,
const struct nf_conntrack_l4proto *proto);
extern spinlock_t nf_conntrack_lock ;
