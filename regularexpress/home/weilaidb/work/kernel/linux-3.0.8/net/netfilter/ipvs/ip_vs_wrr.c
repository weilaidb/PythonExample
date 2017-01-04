#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
struct ip_vs_wrr_mark ;
static int ip_vs_wrr_gcd_weight(struct ip_vs_service *svc)
static int ip_vs_wrr_max_weight(struct ip_vs_service *svc)
static int ip_vs_wrr_init_svc(struct ip_vs_service *svc)
static int ip_vs_wrr_done_svc(struct ip_vs_service *svc)
static int ip_vs_wrr_update_svc(struct ip_vs_service *svc)
static struct ip_vs_dest *
ip_vs_wrr_schedule(struct ip_vs_service *svc, const struct sk_buff *skb)
static struct ip_vs_scheduler ip_vs_wrr_scheduler = ;
static int __init ip_vs_wrr_init(void)
static void __exit ip_vs_wrr_cleanup(void)
module_init(ip_vs_wrr_init);
module_exit(ip_vs_wrr_cleanup);
MODULE_LICENSE("GPL");
