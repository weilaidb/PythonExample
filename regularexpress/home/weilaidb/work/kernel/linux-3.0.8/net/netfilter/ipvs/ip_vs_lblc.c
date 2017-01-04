#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define CHECK_EXPIRE_INTERVAL   (60*HZ)
#define ENTRY_TIMEOUT           (6*60*HZ)
#define DEFAULT_EXPIRATION	(24*60*60*HZ)
#define COUNT_FOR_FULL_EXPIRATION   30
#define CONFIG_IP_VS_LBLC_TAB_BITS      10
#define IP_VS_LBLC_TAB_BITS     CONFIG_IP_VS_LBLC_TAB_BITS
#define IP_VS_LBLC_TAB_SIZE     (1 << IP_VS_LBLC_TAB_BITS)
#define IP_VS_LBLC_TAB_MASK     (IP_VS_LBLC_TAB_SIZE - 1)
struct ip_vs_lblc_entry ;
struct ip_vs_lblc_table ;
static ctl_table vs_vars_table[] = ;
static inline void ip_vs_lblc_free(struct ip_vs_lblc_entry *en)
static inline unsigned
ip_vs_lblc_hashkey(int af, const union nf_inet_addr *addr)
static void
ip_vs_lblc_hash(struct ip_vs_lblc_table *tbl, struct ip_vs_lblc_entry *en)
static inline struct ip_vs_lblc_entry *
ip_vs_lblc_get(int af, struct ip_vs_lblc_table *tbl,
const union nf_inet_addr *addr)
static inline struct ip_vs_lblc_entry *
ip_vs_lblc_new(struct ip_vs_lblc_table *tbl, const union nf_inet_addr *daddr,
struct ip_vs_dest *dest)
static void ip_vs_lblc_flush(struct ip_vs_lblc_table *tbl)
static int sysctl_lblc_expiration(struct ip_vs_service *svc)
static inline void ip_vs_lblc_full_check(struct ip_vs_service *svc)
static void ip_vs_lblc_check_expire(unsigned long data)
static int ip_vs_lblc_init_svc(struct ip_vs_service *svc)
static int ip_vs_lblc_done_svc(struct ip_vs_service *svc)
static inline struct ip_vs_dest *
__ip_vs_lblc_schedule(struct ip_vs_service *svc)
static inline int
is_overloaded(struct ip_vs_dest *dest, struct ip_vs_service *svc)
static struct ip_vs_dest *
ip_vs_lblc_schedule(struct ip_vs_service *svc, const struct sk_buff *skb)
static struct ip_vs_scheduler ip_vs_lblc_scheduler =
;
static int __net_init __ip_vs_lblc_init(struct net *net)
static void __net_exit __ip_vs_lblc_exit(struct net *net)
static int __net_init __ip_vs_lblc_init(struct net *net)
static void __net_exit __ip_vs_lblc_exit(struct net *net)
static struct pernet_operations ip_vs_lblc_ops = ;
static int __init ip_vs_lblc_init(void)
static void __exit ip_vs_lblc_cleanup(void)
module_init(ip_vs_lblc_init);
module_exit(ip_vs_lblc_cleanup);
MODULE_LICENSE("GPL");
