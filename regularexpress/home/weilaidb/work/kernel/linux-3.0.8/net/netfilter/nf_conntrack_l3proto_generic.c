static bool generic_pkt_to_tuple(const struct sk_buff *skb, unsigned int nhoff,
struct nf_conntrack_tuple *tuple)
static bool generic_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static int generic_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int generic_get_l4proto(const struct sk_buff *skb, unsigned int nhoff,
unsigned int *dataoff, u_int8_t *protonum)
struct nf_conntrack_l3proto nf_conntrack_l3proto_generic __read_mostly = ;
EXPORT_SYMBOL_GPL(nf_conntrack_l3proto_generic);
