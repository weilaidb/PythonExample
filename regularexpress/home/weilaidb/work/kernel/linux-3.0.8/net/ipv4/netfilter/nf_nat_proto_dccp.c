static u_int16_t dccp_port_rover;
static void
dccp_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype,
const struct nf_conn *ct)
static bool
dccp_manip_pkt(struct sk_buff *skb,
unsigned int iphdroff,
const struct nf_conntrack_tuple *tuple,
enum nf_nat_manip_type maniptype)
static const struct nf_nat_protocol nf_nat_protocol_dccp = ;
static int __init nf_nat_proto_dccp_init(void)
static void __exit nf_nat_proto_dccp_fini(void)
module_init(nf_nat_proto_dccp_init);
module_exit(nf_nat_proto_dccp_fini);
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_DESCRIPTION("DCCP NAT protocol helper");
MODULE_LICENSE("GPL");
