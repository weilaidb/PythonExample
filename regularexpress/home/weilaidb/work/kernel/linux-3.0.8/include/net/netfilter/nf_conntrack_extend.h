#define _NF_CONNTRACK_EXTEND_H
enum nf_ct_ext_id ;
#define NF_CT_EXT_HELPER_TYPE struct nf_conn_help
#define NF_CT_EXT_NAT_TYPE struct nf_conn_nat
#define NF_CT_EXT_ACCT_TYPE struct nf_conn_counter
#define NF_CT_EXT_ECACHE_TYPE struct nf_conntrack_ecache
#define NF_CT_EXT_ZONE_TYPE struct nf_conntrack_zone
#define NF_CT_EXT_TSTAMP_TYPE struct nf_conn_tstamp
struct nf_ct_ext ;
static inline bool __nf_ct_ext_exist(const struct nf_ct_ext *ext, u8 id)
static inline bool nf_ct_ext_exist(const struct nf_conn *ct, u8 id)
static inline void *__nf_ct_ext_find(const struct nf_conn *ct, u8 id)
#define nf_ct_ext_find(ext, id)	\
((id##_TYPE *)__nf_ct_ext_find((ext), (id)))
extern void __nf_ct_ext_destroy(struct nf_conn *ct);
static inline void nf_ct_ext_destroy(struct nf_conn *ct)
static inline void nf_ct_ext_free(struct nf_conn *ct)
void *
__nf_ct_ext_add(struct nf_conn *ct, enum nf_ct_ext_id id, gfp_t gfp);
#define nf_ct_ext_add(ct, id, gfp) \
((id##_TYPE *)__nf_ct_ext_add((ct), (id), (gfp)))
#define NF_CT_EXT_F_PREALLOC	0x0001
struct nf_ct_ext_type ;
int nf_ct_extend_register(struct nf_ct_ext_type *type);
void nf_ct_extend_unregister(struct nf_ct_ext_type *type);
