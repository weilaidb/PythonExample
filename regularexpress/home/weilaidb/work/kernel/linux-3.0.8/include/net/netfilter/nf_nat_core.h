#define _NF_NAT_CORE_H
extern unsigned int nf_nat_packet(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int hooknum,
struct sk_buff *skb);
extern int nf_nat_icmp_reply_translation(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int hooknum,
struct sk_buff *skb);
static inline int nf_nat_initialized(struct nf_conn *ct,
enum nf_nat_manip_type manip)
struct nlattr;
extern int
(*nfnetlink_parse_nat_setup_hook)(struct nf_conn *ct,
enum nf_nat_manip_type manip,
const struct nlattr *attr);
