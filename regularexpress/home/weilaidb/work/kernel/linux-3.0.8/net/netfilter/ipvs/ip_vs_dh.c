#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
struct ip_vs_dh_bucket ;
#define CONFIG_IP_VS_DH_TAB_BITS        8
#define IP_VS_DH_TAB_BITS               CONFIG_IP_VS_DH_TAB_BITS
#define IP_VS_DH_TAB_SIZE               (1 << IP_VS_DH_TAB_BITS)
#define IP_VS_DH_TAB_MASK               (IP_VS_DH_TAB_SIZE - 1)
static inline unsigned ip_vs_dh_hashkey(int af, const union nf_inet_addr *addr)
static inline struct ip_vs_dest *
ip_vs_dh_get(int af, struct ip_vs_dh_bucket *tbl,
const union nf_inet_addr *addr)
static int
ip_vs_dh_assign(struct ip_vs_dh_bucket *tbl, struct ip_vs_service *svc)
static void ip_vs_dh_flush(struct ip_vs_dh_bucket *tbl)
static int ip_vs_dh_init_svc(struct ip_vs_service *svc)
static int ip_vs_dh_done_svc(struct ip_vs_service *svc)
static int ip_vs_dh_update_svc(struct ip_vs_service *svc)
static inline int is_overloaded(struct ip_vs_dest *dest)
static struct ip_vs_dest *
ip_vs_dh_schedule(struct ip_vs_service *svc, const struct sk_buff *skb)
static struct ip_vs_scheduler ip_vs_dh_scheduler =
;
static int __init ip_vs_dh_init(void)
static void __exit ip_vs_dh_cleanup(void)
module_init(ip_vs_dh_init);
module_exit(ip_vs_dh_cleanup);
MODULE_LICENSE("GPL");
