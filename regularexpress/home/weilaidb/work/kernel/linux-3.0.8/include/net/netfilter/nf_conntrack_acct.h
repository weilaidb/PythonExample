#define _NF_CONNTRACK_ACCT_H
struct nf_conn_counter ;
static inline
struct nf_conn_counter *nf_conn_acct_find(const struct nf_conn *ct)
static inline
struct nf_conn_counter *nf_ct_acct_ext_add(struct nf_conn *ct, gfp_t gfp)
;
extern unsigned int
seq_print_acct(struct seq_file *s, const struct nf_conn *ct, int dir);
static inline bool nf_ct_acct_enabled(struct net *net)
static inline void nf_ct_set_acct(struct net *net, bool enable)
extern int nf_conntrack_acct_init(struct net *net);
extern void nf_conntrack_acct_fini(struct net *net);
