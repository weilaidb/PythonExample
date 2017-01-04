#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static inline unsigned int
ip_vs_nq_dest_overhead(struct ip_vs_dest *dest)
static struct ip_vs_dest *
ip_vs_nq_schedule(struct ip_vs_service *svc, const struct sk_buff *skb)
static struct ip_vs_scheduler ip_vs_nq_scheduler =
;
static int __init ip_vs_nq_init(void)
static void __exit ip_vs_nq_cleanup(void)
module_init(ip_vs_nq_init);
module_exit(ip_vs_nq_cleanup);
MODULE_LICENSE("GPL");
