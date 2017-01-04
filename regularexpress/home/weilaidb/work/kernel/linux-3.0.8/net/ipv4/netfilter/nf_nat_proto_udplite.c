static u_int16_t udplite_port_rover;
static void
udplite_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype,
const struct nf_conn *ct)
static bool
udplite_manip_pkt(struct sk_buff *skb,
unsigned int iphdroff,
const struct nf_conntrack_tuple *tuple,
enum nf_nat_manip_type maniptype)
static const struct nf_nat_protocol nf_nat_protocol_udplite = ;
static int __init nf_nat_proto_udplite_init(void)
static void __exit nf_nat_proto_udplite_fini(void)
module_init(nf_nat_proto_udplite_init);
module_exit(nf_nat_proto_udplite_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("UDP-Lite NAT protocol helper");
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
