#define _NF_CONNTRACK_HELPER_H
struct module;
#define NF_CT_HELPER_NAME_LEN	16
struct nf_conntrack_helper ;
extern struct nf_conntrack_helper *
__nf_conntrack_helper_find(const char *name, u16 l3num, u8 protonum);
extern struct nf_conntrack_helper *
nf_conntrack_helper_try_module_get(const char *name, u16 l3num, u8 protonum);
extern int nf_conntrack_helper_register(struct nf_conntrack_helper *);
extern void nf_conntrack_helper_unregister(struct nf_conntrack_helper *);
extern struct nf_conn_help *nf_ct_helper_ext_add(struct nf_conn *ct, gfp_t gfp);
extern int __nf_ct_try_assign_helper(struct nf_conn *ct, struct nf_conn *tmpl,
gfp_t flags);
extern void nf_ct_helper_destroy(struct nf_conn *ct);
static inline struct nf_conn_help *nfct_help(const struct nf_conn *ct)
extern int nf_conntrack_helper_init(void);
extern void nf_conntrack_helper_fini(void);
extern int nf_conntrack_broadcast_help(struct sk_buff *skb,
unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int timeout);
