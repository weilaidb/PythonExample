#define _NF_CONNTRACK_ZONES_H
#define NF_CT_DEFAULT_ZONE	0
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
struct nf_conntrack_zone ;
static inline u16 nf_ct_zone(const struct nf_conn *ct)
