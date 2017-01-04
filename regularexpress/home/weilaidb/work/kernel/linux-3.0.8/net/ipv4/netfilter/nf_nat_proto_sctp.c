static u_int16_t nf_sctp_port_rover;
static void
sctp_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype,
const struct nf_conn *ct)
static bool
sctp_manip_pkt(struct sk_buff *skb,
unsigned int iphdroff,
const struct nf_conntrack_tuple *tuple,
enum nf_nat_manip_type maniptype)
static const struct nf_nat_protocol nf_nat_protocol_sctp = ;
static int __init nf_nat_proto_sctp_init(void)
static void __exit nf_nat_proto_sctp_exit(void)
module_init(nf_nat_proto_sctp_init);
module_exit(nf_nat_proto_sctp_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SCTP NAT protocol helper");
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
