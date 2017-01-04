#define _NF_CONNTRACK_L3PROTO_H
struct nf_conntrack_l3proto ;
extern struct nf_conntrack_l3proto __rcu *nf_ct_l3protos[AF_MAX];
extern int nf_conntrack_l3proto_register(struct nf_conntrack_l3proto *proto);
extern void nf_conntrack_l3proto_unregister(struct nf_conntrack_l3proto *proto);
extern struct nf_conntrack_l3proto *nf_ct_l3proto_find_get(u_int16_t l3proto);
extern void nf_ct_l3proto_put(struct nf_conntrack_l3proto *p);
extern struct nf_conntrack_l3proto nf_conntrack_l3proto_generic;
static inline struct nf_conntrack_l3proto *
__nf_ct_l3proto_find(u_int16_t l3proto)
