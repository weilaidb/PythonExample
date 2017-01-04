#define _NF_NAT_H
#define NF_NAT_MAPPING_TYPE_MAX_NAMELEN 16
enum nf_nat_manip_type ;
#define HOOK2MANIP(hooknum) ((hooknum) != NF_INET_POST_ROUTING && \
(hooknum) != NF_INET_LOCAL_IN)
#define IP_NAT_RANGE_MAP_IPS 1
#define IP_NAT_RANGE_PROTO_SPECIFIED 2
#define IP_NAT_RANGE_PROTO_RANDOM 4
#define IP_NAT_RANGE_PERSISTENT 8
struct nf_nat_seq ;
struct nf_nat_range ;
struct nf_nat_multi_range_compat ;
union nf_conntrack_nat_help ;
struct nf_conn;
struct nf_conn_nat ;
extern unsigned int nf_nat_setup_info(struct nf_conn *ct,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype);
extern int nf_nat_used_tuple(const struct nf_conntrack_tuple *tuple,
const struct nf_conn *ignored_conntrack);
static inline struct nf_conn_nat *nfct_nat(const struct nf_conn *ct)
