#define _NF_CONNTRACK_TSTAMP_H
struct nf_conn_tstamp ;
static inline
struct nf_conn_tstamp *nf_conn_tstamp_find(const struct nf_conn *ct)
static inline
struct nf_conn_tstamp *nf_ct_tstamp_ext_add(struct nf_conn *ct, gfp_t gfp)
;
static inline bool nf_ct_tstamp_enabled(struct net *net)
static inline void nf_ct_set_tstamp(struct net *net, bool enable)
extern int nf_conntrack_tstamp_init(struct net *net);
extern void nf_conntrack_tstamp_fini(struct net *net);
static inline int nf_conntrack_tstamp_init(struct net *net)
static inline void nf_conntrack_tstamp_fini(struct net *net)
