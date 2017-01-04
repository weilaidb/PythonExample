#define _NF_NAT_PROTOCOL_H
struct nf_nat_range;
struct nf_nat_protocol ;
extern int nf_nat_protocol_register(const struct nf_nat_protocol *proto);
extern void nf_nat_protocol_unregister(const struct nf_nat_protocol *proto);
extern const struct nf_nat_protocol nf_nat_protocol_tcp;
extern const struct nf_nat_protocol nf_nat_protocol_udp;
extern const struct nf_nat_protocol nf_nat_protocol_icmp;
extern const struct nf_nat_protocol nf_nat_unknown_protocol;
extern int init_protocols(void) __init;
extern void cleanup_protocols(void);
extern const struct nf_nat_protocol *find_nat_proto(u_int16_t protonum);
extern bool nf_nat_proto_in_range(const struct nf_conntrack_tuple *tuple,
enum nf_nat_manip_type maniptype,
const union nf_conntrack_man_proto *min,
const union nf_conntrack_man_proto *max);
extern void nf_nat_proto_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype,
const struct nf_conn *ct,
u_int16_t *rover);
extern int nf_nat_proto_range_to_nlattr(struct sk_buff *skb,
const struct nf_nat_range *range);
extern int nf_nat_proto_nlattr_to_range(struct nlattr *tb[],
struct nf_nat_range *range);
