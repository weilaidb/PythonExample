MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@gnumonks.org>");
MODULE_DESCRIPTION("Netfilter NAT protocol helper module for GRE");
static void
gre_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype,
const struct nf_conn *ct)
static bool
gre_manip_pkt(struct sk_buff *skb, unsigned int iphdroff,
const struct nf_conntrack_tuple *tuple,
enum nf_nat_manip_type maniptype)
static const struct nf_nat_protocol gre = ;
static int __init nf_nat_proto_gre_init(void)
static void __exit nf_nat_proto_gre_fini(void)
module_init(nf_nat_proto_gre_init);
module_exit(nf_nat_proto_gre_fini);
void nf_nat_need_gre(void)
EXPORT_SYMBOL_GPL(nf_nat_need_gre);
