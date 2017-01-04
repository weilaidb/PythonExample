#define GRE_TIMEOUT		(30 * HZ)
#define GRE_STREAM_TIMEOUT	(180 * HZ)
static int proto_gre_net_id __read_mostly;
struct netns_proto_gre ;
void nf_ct_gre_keymap_flush(struct net *net)
EXPORT_SYMBOL(nf_ct_gre_keymap_flush);
static inline int gre_key_cmpfn(const struct nf_ct_gre_keymap *km,
const struct nf_conntrack_tuple *t)
static __be16 gre_keymap_lookup(struct net *net, struct nf_conntrack_tuple *t)
int nf_ct_gre_keymap_add(struct nf_conn *ct, enum ip_conntrack_dir dir,
struct nf_conntrack_tuple *t)
EXPORT_SYMBOL_GPL(nf_ct_gre_keymap_add);
void nf_ct_gre_keymap_destroy(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_ct_gre_keymap_destroy);
static bool gre_invert_tuple(struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_tuple *orig)
static bool gre_pkt_to_tuple(const struct sk_buff *skb, unsigned int dataoff,
struct nf_conntrack_tuple *tuple)
static int gre_print_tuple(struct seq_file *s,
const struct nf_conntrack_tuple *tuple)
static int gre_print_conntrack(struct seq_file *s, struct nf_conn *ct)
static int gre_packet(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned int dataoff,
enum ip_conntrack_info ctinfo,
u_int8_t pf,
unsigned int hooknum)
static bool gre_new(struct nf_conn *ct, const struct sk_buff *skb,
unsigned int dataoff)
static void gre_destroy(struct nf_conn *ct)
static struct nf_conntrack_l4proto nf_conntrack_l4proto_gre4 __read_mostly = ;
static int proto_gre_net_init(struct net *net)
static void proto_gre_net_exit(struct net *net)
static struct pernet_operations proto_gre_net_ops = ;
static int __init nf_ct_proto_gre_init(void)
static void __exit nf_ct_proto_gre_fini(void)
module_init(nf_ct_proto_gre_init);
module_exit(nf_ct_proto_gre_fini);
MODULE_LICENSE("GPL");
