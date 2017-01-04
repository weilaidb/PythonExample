#define _NF_CONNTRACK_TUPLE_H
#define NF_CT_TUPLE_L3SIZE	ARRAY_SIZE(((union nf_inet_addr *)NULL)->all)
union nf_conntrack_man_proto ;
struct nf_conntrack_man ;
struct nf_conntrack_tuple ;
struct nf_conntrack_tuple_mask ;
static inline void nf_ct_dump_tuple_ip(const struct nf_conntrack_tuple *t)
static inline void nf_ct_dump_tuple_ipv6(const struct nf_conntrack_tuple *t)
static inline void nf_ct_dump_tuple(const struct nf_conntrack_tuple *t)
#define NF_CT_DIRECTION(h)						\
((enum ip_conntrack_dir)(h)->tuple.dst.dir)
struct nf_conntrack_tuple_hash ;
static inline bool __nf_ct_tuple_src_equal(const struct nf_conntrack_tuple *t1,
const struct nf_conntrack_tuple *t2)
static inline bool __nf_ct_tuple_dst_equal(const struct nf_conntrack_tuple *t1,
const struct nf_conntrack_tuple *t2)
static inline bool nf_ct_tuple_equal(const struct nf_conntrack_tuple *t1,
const struct nf_conntrack_tuple *t2)
static inline bool
nf_ct_tuple_mask_equal(const struct nf_conntrack_tuple_mask *m1,
const struct nf_conntrack_tuple_mask *m2)
static inline bool
nf_ct_tuple_src_mask_cmp(const struct nf_conntrack_tuple *t1,
const struct nf_conntrack_tuple *t2,
const struct nf_conntrack_tuple_mask *mask)
static inline bool
nf_ct_tuple_mask_cmp(const struct nf_conntrack_tuple *t,
const struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple_mask *mask)
