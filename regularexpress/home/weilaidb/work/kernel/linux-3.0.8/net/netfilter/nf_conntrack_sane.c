MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michal Schmidt <mschmidt@redhat.com>");
MODULE_DESCRIPTION("SANE connection tracking helper");
MODULE_ALIAS_NFCT_HELPER("sane");
static char *sane_buffer;
static DEFINE_SPINLOCK(nf_sane_lock);
#define MAX_PORTS 8
static u_int16_t ports[MAX_PORTS];
static unsigned int ports_c;
module_param_array(ports, ushort, &ports_c, 0400);
struct sane_request ;
struct sane_reply_net_start ;
static int help(struct sk_buff *skb,
unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static struct nf_conntrack_helper sane[MAX_PORTS][2] __read_mostly;
static char sane_names[MAX_PORTS][2][sizeof("sane-65535")] __read_mostly;
static const struct nf_conntrack_expect_policy sane_exp_policy = ;
static void nf_conntrack_sane_fini(void)
static int __init nf_conntrack_sane_init(void)
module_init(nf_conntrack_sane_init);
module_exit(nf_conntrack_sane_fini);
