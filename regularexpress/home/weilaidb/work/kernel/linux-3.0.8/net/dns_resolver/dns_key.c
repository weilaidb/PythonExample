MODULE_DESCRIPTION("DNS Resolver");
MODULE_AUTHOR("Wang Lei");
MODULE_LICENSE("GPL");
unsigned dns_resolver_debug;
module_param_named(debug, dns_resolver_debug, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(debug, "DNS Resolver debugging mask");
const struct cred *dns_resolver_cache;
#define	DNS_ERRORNO_OPTION	"dnserror"
static int
dns_resolver_instantiate(struct key *key, const void *_data, size_t datalen)
static int
dns_resolver_match(const struct key *key, const void *description)
static void dns_resolver_describe(const struct key *key, struct seq_file *m)
static long dns_resolver_read(const struct key *key,
char __user *buffer, size_t buflen)
struct key_type key_type_dns_resolver = ;
static int __init init_dns_resolver(void)
static void __exit exit_dns_resolver(void)
module_init(init_dns_resolver)
module_exit(exit_dns_resolver)
MODULE_LICENSE("GPL");
