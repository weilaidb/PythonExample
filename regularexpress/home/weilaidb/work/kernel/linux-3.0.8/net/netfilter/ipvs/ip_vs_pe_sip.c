#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static const char *ip_vs_dbg_callid(char *buf, size_t buf_len,
const char *callid, size_t callid_len,
int *idx)
#define IP_VS_DEBUG_CALLID(callid, len)					\
ip_vs_dbg_callid(ip_vs_dbg_buf, sizeof(ip_vs_dbg_buf),		\
callid, len, &ip_vs_dbg_idx)
static int get_callid(const char *dptr, unsigned int dataoff,
unsigned int datalen,
unsigned int *matchoff, unsigned int *matchlen)
static int
ip_vs_sip_fill_param(struct ip_vs_conn_param *p, struct sk_buff *skb)
static bool ip_vs_sip_ct_match(const struct ip_vs_conn_param *p,
struct ip_vs_conn *ct)
static u32 ip_vs_sip_hashkey_raw(const struct ip_vs_conn_param *p,
u32 initval, bool inverse)
static int ip_vs_sip_show_pe_data(const struct ip_vs_conn *cp, char *buf)
static struct ip_vs_pe ip_vs_sip_pe =
;
static int __init ip_vs_sip_init(void)
static void __exit ip_vs_sip_cleanup(void)
module_init(ip_vs_sip_init);
module_exit(ip_vs_sip_cleanup);
MODULE_LICENSE("GPL");
