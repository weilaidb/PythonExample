bool nf_nat_proto_in_range(const struct nf_conntrack_tuple *tuple,
enum nf_nat_manip_type maniptype,
const union nf_conntrack_man_proto *min,
const union nf_conntrack_man_proto *max)
EXPORT_SYMBOL_GPL(nf_nat_proto_in_range);
void nf_nat_proto_unique_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_nat_range *range,
enum nf_nat_manip_type maniptype,
const struct nf_conn *ct,
u_int16_t *rover)
EXPORT_SYMBOL_GPL(nf_nat_proto_unique_tuple);
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
int nf_nat_proto_range_to_nlattr(struct sk_buff *skb,
const struct nf_nat_range *range)
EXPORT_SYMBOL_GPL(nf_nat_proto_nlattr_to_range);
int nf_nat_proto_nlattr_to_range(struct nlattr *tb[],
struct nf_nat_range *range)
EXPORT_SYMBOL_GPL(nf_nat_proto_range_to_nlattr);
