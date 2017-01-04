MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rusty Russell <rusty@rustcorp.com.au>");
MODULE_DESCRIPTION("ftp NAT helper");
MODULE_ALIAS("ip_nat_ftp");
static int nf_nat_ftp_fmt_cmd(enum nf_ct_ftp_type type,
char *buffer, size_t buflen,
__be32 addr, u16 port)
static unsigned int nf_nat_ftp(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
enum nf_ct_ftp_type type,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp)
static void __exit nf_nat_ftp_fini(void)
static int __init nf_nat_ftp_init(void)
static int warn_set(const char *val, struct kernel_param *kp)
module_param_call(ports, warn_set, NULL, NULL, 0);
module_init(nf_nat_ftp_init);
module_exit(nf_nat_ftp_fini);
