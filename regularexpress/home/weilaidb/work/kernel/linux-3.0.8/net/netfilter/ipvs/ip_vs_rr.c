#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static int ip_vs_rr_init_svc(struct ip_vs_service *svc)
static int ip_vs_rr_update_svc(struct ip_vs_service *svc)
static struct ip_vs_dest *
ip_vs_rr_schedule(struct ip_vs_service *svc, const struct sk_buff *skb)
static struct ip_vs_scheduler ip_vs_rr_scheduler = ;
static int __init ip_vs_rr_init(void)
static void __exit ip_vs_rr_cleanup(void)
module_init(ip_vs_rr_init);
module_exit(ip_vs_rr_cleanup);
MODULE_LICENSE("GPL");
