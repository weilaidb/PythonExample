MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rusty Russell <rusty@rustcorp.com.au>");
MODULE_DESCRIPTION("ftp connection tracking helper");
MODULE_ALIAS("ip_conntrack_ftp");
MODULE_ALIAS_NFCT_HELPER("ftp");
static char *ftp_buffer;
static DEFINE_SPINLOCK(nf_ftp_lock);
#define MAX_PORTS 8
static u_int16_t ports[MAX_PORTS];
static unsigned int ports_c;
module_param_array(ports, ushort, &ports_c, 0400);
static int loose;
module_param(loose, bool, 0600);
unsigned int (*nf_nat_ftp_hook)(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
enum nf_ct_ftp_type type,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp);
EXPORT_SYMBOL_GPL(nf_nat_ftp_hook);
static int try_rfc959(const char *, size_t, struct nf_conntrack_man *, char);
static int try_eprt(const char *, size_t, struct nf_conntrack_man *, char);
static int try_epsv_response(const char *, size_t, struct nf_conntrack_man *,
char);
static struct ftp_search  search[IP_CT_DIR_MAX][2] = ;
static int
get_ipv6_addr(const char *src, size_t dlen, struct in6_addr *dst, u_int8_t term)
static int try_number(const char *data, size_t dlen, u_int32_t array[],
int array_size, char sep, char term)
static int try_rfc959(const char *data, size_t dlen,
struct nf_conntrack_man *cmd, char term)
static int get_port(const char *data, int start, size_t dlen, char delim,
__be16 *port)
static int try_eprt(const char *data, size_t dlen, struct nf_conntrack_man *cmd,
char term)
static int try_epsv_response(const char *data, size_t dlen,
struct nf_conntrack_man *cmd, char term)
static int find_pattern(const char *data, size_t dlen,
const char *pattern, size_t plen,
char skip, char term,
unsigned int *numoff,
unsigned int *numlen,
struct nf_conntrack_man *cmd,
int (*getnum)(const char *, size_t,
struct nf_conntrack_man *, char))
static int find_nl_seq(u32 seq, const struct nf_ct_ftp_master *info, int dir)
static void update_nl_seq(struct nf_conn *ct, u32 nl_seq,
struct nf_ct_ftp_master *info, int dir,
struct sk_buff *skb)
static int help(struct sk_buff *skb,
unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static struct nf_conntrack_helper ftp[MAX_PORTS][2] __read_mostly;
static char ftp_names[MAX_PORTS][2][sizeof("ftp-65535")] __read_mostly;
static const struct nf_conntrack_expect_policy ftp_exp_policy = ;
static void nf_conntrack_ftp_fini(void)
static int __init nf_conntrack_ftp_init(void)
module_init(nf_conntrack_ftp_init);
module_exit(nf_conntrack_ftp_fini);
