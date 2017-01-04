#define _NF_CONNTRACK_EXPECT_H
extern unsigned int nf_ct_expect_hsize;
extern unsigned int nf_ct_expect_max;
struct nf_conntrack_expect ;
static inline struct net *nf_ct_exp_net(struct nf_conntrack_expect *exp)
struct nf_conntrack_expect_policy ;
#define NF_CT_EXPECT_CLASS_DEFAULT	0
int nf_conntrack_expect_init(struct net *net);
void nf_conntrack_expect_fini(struct net *net);
struct nf_conntrack_expect *
__nf_ct_expect_find(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple);
struct nf_conntrack_expect *
nf_ct_expect_find_get(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple);
struct nf_conntrack_expect *
nf_ct_find_expectation(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple);
void nf_ct_unlink_expect_report(struct nf_conntrack_expect *exp,
u32 pid, int report);
static inline void nf_ct_unlink_expect(struct nf_conntrack_expect *exp)
void nf_ct_remove_expectations(struct nf_conn *ct);
void nf_ct_unexpect_related(struct nf_conntrack_expect *exp);
void nf_ct_remove_userspace_expectations(void);
struct nf_conntrack_expect *nf_ct_expect_alloc(struct nf_conn *me);
void nf_ct_expect_init(struct nf_conntrack_expect *, unsigned int, u_int8_t,
const union nf_inet_addr *,
const union nf_inet_addr *,
u_int8_t, const __be16 *, const __be16 *);
void nf_ct_expect_put(struct nf_conntrack_expect *exp);
int nf_ct_expect_related_report(struct nf_conntrack_expect *expect,
u32 pid, int report);
static inline int nf_ct_expect_related(struct nf_conntrack_expect *expect)
